#include <stdio.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

int main()
{
	int i;
	const gsl_rng_type *T;
	gsl_rng *r;
	gsl_rng_env_setup();
	T = gsl_rng_default;
 	r = gsl_rng_alloc(T);
	gsl_rng_set(r,time(0));

	long double ns[1000];
	for (i = 0; i < 1000; i++){
		ns[i] = gsl_ran_flat(r, 0, 9);
	}
	histogram(ns);
}

int histogram(long double rs[])
{
	int cols[10] = {0,0,0,0,0,0,0,0,0,0};
	int i;	
	int d;
	
	for (i = 0; i < 1000; i++){
		d = rs[i] / 1;
		cols[d] = cols[d] + 1;
	}
	
	for (i = 0; i < 10; i++){
		printf("%d: ", i);
		for (d = 0; d < cols[i]; d++){
			printf("X");
		}
		printf("\n");
	}
	return 0;
}
