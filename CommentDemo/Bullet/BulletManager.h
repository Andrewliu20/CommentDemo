//
//  BulletManager.h
//  CommentDemo
//
//  Created by andrewliu on 16/7/13.
//  Copyright © 2016年 andrewliu. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BulletView;
@interface BulletManager : NSObject
@property (nonatomic, copy) void(^generateBulletBlock)(BulletView *view);
- (void)start;
- (void)stop;
@end
