#include <Student.h>

int main(void) {
	NSAutoreleasePool *myPool = [NSAutoreleasePool new];

	Student *me = [Student new];
	Student *cfb = [[Student alloc] initWithFirstName:@"Charles" lastName:@"Fowkes-Bolt" credits:45 gpa:3.1];
	
	[me printStudent];
	[cfb printStudent];
	[me setFirstName:@"James"];
	[me setLastName:@"Elder"];
	[me setCredits:45];
	[me setGPA:4.0];
	[me printStudent];

	[me release];
	[cfb release];
	[myPool drain];
	return 0;
}
