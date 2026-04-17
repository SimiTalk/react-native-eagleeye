#import <Foundation/Foundation.h>

@interface Hawkeye : NSObject
+ (void)initEagleyeWithAppKey:(NSString *)appKey
                    serverURL:(NSString *)serverURL
                   completion:(void (^)(BOOL, NSError *))completion;
@end
