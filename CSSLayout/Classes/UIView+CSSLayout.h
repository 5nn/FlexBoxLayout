//
//  UIView+CSJSLayout.h
//  CSJSView
//
//  Created by 沈强 on 16/8/31.
//  Copyright © 2016年 沈强. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSSLayout.h"
#import "CSSLayoutProtocol.h"

@interface UIView (CSSLayout)<CSSLayoutProtocol>

- (CSSLayout *)layout;

- (void)wrapContent;

- (void)applyLayouWithSize:(CGRect)frame;

- (void)asyApplyLayoutWithSize:(CGRect)frame;

@end