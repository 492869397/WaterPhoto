//
//  UIImage+WaterMask.h
//  WaterPhoto
//
//  Created by len on 16/8/8.
//  Copyright (c) 2016年 com.sxt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (WaterMask)

- (UIImage *)imageWithLogoText:(UIImage *)img text:(NSString *)text1;

- (UIImage *) imageWithStringWaterMark:(NSString *)markString inRect:(CGRect)rect color:(UIColor *)color font:(UIFont *)font;

- (UIImage *) imageWithStringWaterMark:(NSString *)markString atPoint:(CGPoint)point color:(UIColor *)color font:(UIFont *)font;

-(UIImage *)imageWithLogoImage:(UIImage *)img logo:(UIImage *)logo;

- (UIImage *) imageWithWaterMask:(UIImage*)mask inRect:(CGRect)rect;

-(UIImage *)imageWithTransImage:(UIImage *)useImage addtransparentImage:(UIImage *)transparentimg;

@end
