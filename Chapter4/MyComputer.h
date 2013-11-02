//
//  MyComputer.h
//  Chapter4
//
//  Created by Eric on 13-11-3.
//
//

#import <Foundation/Foundation.h>

@interface MyComputer : NSObject
{
    NSString * computerName;
    NSString * computerType;
    int speed;
}

- (NSString *)computerName;
- (void)setComputerName;
- (NSString *)computerType;
- (void)setComputerType;
- (void)print;
@end

@implementation
(void)print
{
    printf("%d\n",speed);
}
@end