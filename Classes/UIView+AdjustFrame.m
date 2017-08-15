//
//  UIView+AdjustFrame.m
//
//
//  Created by InitialC on 2017/8/14.
//  Copyright © 2017年 InitialC. All rights reserved.
//

#import "UIView+AdjustFrame.h"

@implementation UIView (AdjustFrame)

- (void)setX:(CGFloat)x
{
    CGRect frame = self.frame;
    frame.origin.x = x;
    self.frame = frame;
}

- (CGFloat)x
{
    return self.frame.origin.x;
}

- (void)setY:(CGFloat)y
{
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}

- (CGFloat)y
{
    return self.frame.origin.y;
}

- (void)setWidth:(CGFloat)width
{
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)max_X{
    return CGRectGetMaxX(self.frame);
}
- (void)setMax_X:(CGFloat)max_X{}

- (CGFloat)max_Y{
    return CGRectGetMaxY(self.frame);
}
- (void)setMax_Y:(CGFloat)max_Y{}

- (CGFloat)width
{
    return self.frame.size.width;
}

- (void)setHeight:(CGFloat)height
{
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

- (CGFloat)height
{
    return self.frame.size.height;
}

- (void)setSize:(CGSize)size
{
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

- (CGSize)size
{
    return self.frame.size;
}

- (void)setOrigin:(CGPoint)origin
{
    CGRect frame = self.frame;
    frame.origin = origin;
    self.frame = frame;
}

- (CGPoint)origin
{
    return self.frame.origin;
}

- (void)setCenter_X:(CGFloat)center_X {
    CGPoint center = self.center;
    center.x = center_X;
    self.center = center;
}
- (CGFloat)center_X {
    return self.center.x;
}

- (void)setCenter_Y:(CGFloat)center_Y {
    CGPoint center = self.center;
    center.y = center_Y;
    self.center = center;
}

- (CGFloat)center_Y {
    return self.center.y;
}

@end
