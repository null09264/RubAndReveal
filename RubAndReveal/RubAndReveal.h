//
//  RubAndReveal.h
//  RubAndReveal
//
//  Created by Mingyu on 27/7/15.
//  Copyright (c) 2015 Echx. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RubAndReveal;

@protocol RubAndRevealDelegate

@optional
- (void)rubbingStart: (RubAndReveal *)rubAndReveal;

@optional
- (void)rubbingEnd: (RubAndReveal *)rubAndReveal;

@end

@interface RubAndReveal : UIView

@property (nonatomic, strong) NSString *lineCap;
@property (nonatomic, strong) NSString *lineJoin;
@property (nonatomic, assign) CGFloat lineWidth;
@property (nonatomic, weak) NSObject<RubAndRevealDelegate> *delegate;

- (void)configureLayoutWithBackImage:(UIImage *)backImage frontImage:(UIImage *)frontImage;
- (void)resetImage;

@end
