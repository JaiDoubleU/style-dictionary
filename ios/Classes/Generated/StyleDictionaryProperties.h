
//
// StyleDictionaryProperties.h
//
// Do not edit directly
// Generated on Tue, 22 Mar 2022 22:49:41 GMT
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleDictionaryProperties : NSObject

+ (NSDictionary *)properties;
+ (NSDictionary *)getProperty:(NSString *)keyPath;
+ (nonnull)getValue:(NSString *)keyPath;

@end
