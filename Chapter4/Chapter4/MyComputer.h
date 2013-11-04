//
//  MyComputer.h
//  Chapter4
//
//  Created by Eric on 13-11-3.
//  Copyright (c) 2013年 ERICx64. All rights reserved.
//

#import <Foundation/Foundation.h>




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

