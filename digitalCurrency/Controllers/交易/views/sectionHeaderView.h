//
//  sectionHeaderView.h
//  digitalCurrency
//
//  Created by sunliang on 2018/2/6.
//  Copyright © 2018年 XinHuoKeJi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface sectionHeaderView : UIView
+(sectionHeaderView *)instancesectionHeaderViewWithFrame:(CGRect)Rect;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@end
