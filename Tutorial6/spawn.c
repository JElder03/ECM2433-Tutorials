#include <spawn.h>

int fd1[2];
int fd2[2];
int pid;

void sig_handler(int signo){
	if (signo = SIGUSR1){
		int status;
		char c = 'X';
		
		printf("Parent: send stop\n");
		write(fd1[1], &c,sizeof(char));
		close(fd1[1]);
		
		(int)waitpid(pid, &status, 0);
		printf("Parent: stopped.\n");  
		
		if ( signal(SIGUSR1, sig_handler) == SIG_ERR ) {
			printf("Can't catch SIGUSR1\n");
			fprintf(stderr,"Failed to catch SIGUSR1 in line %d of program %s\n",__LINE__,__FILE__);
		}
		exit(0);
	}
}


void parent(void){
	if ( signal( SIGUSR1, sig_handler) == SIG_ERR){	
		printf("Can't catch SIGUSR1\n");
		fprintf(stderr,"Failed to catch SIGUSR1 in line %d of program %s\n",__LINE__,__FILE__);
	}

	while(1){
		char buffer = '\0';
		char r;

		close(fd1[0]);
		close(fd2[1]);
		r = rand()%10;
		printf("Parent: random %d\n", r);
		write(fd1[1], &r, sizeof(char));
		
		do{
			read(fd2[0], &buffer, sizeof(char));
		} while (buffer != 'Z');	
	}	
}

void child(void){
	char buffer = '\0';
	char c = 'Z';

	close(fd1[1]);
	close(fd2[0]);
	
	while(1){
		read(fd1[0], &buffer, sizeof(char));
		if (buffer == 'X'){
			close(fd1[0]);
			close(fd2[1]);
			printf("Child: stopped.\n");
			return;
		} else if (buffer >= 0 && buffer <= 9){
			printf("Child: started %d\n", buffer);
			sleep(buffer);
			printf("Child: completed %d\n", buffer);
			write(fd2[1], &c, sizeof(char));
		}
	}
}

int main(void){
	srand(time(NULL));

	if ( pipe(fd1) || pipe(fd2) ){
		printf("Can't set up pipes\n");	
		fprintf(stderr,"Failed to set up pipes in line %d of program %s\n",__LINE__,__FILE__);
	}

	pid = fork();
	
	if (pid < 0){
		printf("Error occurred while forking\n");
		fprintf(stderr,"Failed to fork processes in line %d of program %s\n",__LINE__,__FILE__);
	} else if (pid == 0){
		child();
	} else{
		parent();
	}
} 
