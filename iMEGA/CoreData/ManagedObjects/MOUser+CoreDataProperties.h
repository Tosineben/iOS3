#import "MOUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface MOUser (CoreDataProperties)

@property (nonatomic, retain) NSString *base64userHandle;
@property (nullable, nonatomic, retain) NSString *firstname;
@property (nullable, nonatomic, retain) NSString *lastname;
@property (nullable, nonatomic, retain) NSString *email;

@end

NS_ASSUME_NONNULL_END
