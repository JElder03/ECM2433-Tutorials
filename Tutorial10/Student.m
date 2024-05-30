#import <Student.h>

@implementation Student : NSObject
- (id)init {
	self = [super init];
	if (self) {
		firstName = @"";
		lastName = @"";
		credits = 0;
		gpa = 0.0;
	}
	return self;
}

- (id) initWithFirstName:(NSString *)firstName lastName:(NSString *)lastName credits:(int)credits gpa:(float)gpa {
	self = [super self];
	if (self) {
		self->firstName = [firstName retain];
		self->lastName = [lastName retain];
		self->credits = credits;
		self->gpa = gpa;
	}
	return self;
}

- (void) setFirstName:(NSString *) firstName {
	if (firstName == self->firstName)
		return
	[firstName retain];
	[self->firstName release];
	self->firstName = firstName;
}

- (void) setLastName:(NSString *) lastName {
        if (lastName == self->lastName)
                return
        [lastName retain];
        [self->lastName release];
        self->lastName = lastName;
}

- (void) setCredits:(int) credits {
        self->credits = credits;
}

- (void) setGPA:(float) gpa {
        self->gpa = gpa;
}

- (void) printStudent {
	printf("%s %s: credits = %d; GPA = %f\n", [firstName UTF8String], [lastName UTF8String], credits, gpa);
}

- (void) dealloc {
	NSLog(@"Deconstructing student object\n");
	[firstName release];
	[lastName release];
	[super dealloc];
}
@end
