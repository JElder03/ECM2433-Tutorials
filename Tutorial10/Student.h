#import <Foundation/Foundation.h>
@interface Student : NSObject {
	NSString *firstName;
	NSString *lastName;
	int credits;
	float gpa;
}
- (id) init;
- (id) initWithFirstName:(NSString *)firstName lastName:(NSString *)lastName credits:(int)credits gpa:(float)gpa;
- (void)setFirstName : (NSString *) firstName;
- (void)setLastName : (NSString *) lastName;
- (void)setCredits : (int) credits;
- (void)setGPA : (float) gpa;
- (void)printStudent;
@end
