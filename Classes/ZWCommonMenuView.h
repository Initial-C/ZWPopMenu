//
//  ZWCommonMenuView.h
//  PopMenuTableView
//
//  Created by InitialC on 2017/8/14.
//  Copyright © 2017年 InitialC. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^ItemsClickBlock)(NSString *str, NSInteger tag);
typedef void(^BackViewTapBlock)();

typedef NS_ENUM(NSInteger, ZWPopStyle) {
    ZWPopStyleBlack,
    ZWPopStyleLight
};

@interface ZWCommonMenuView : UIView
/* 菜单样式 */
@property (assign, nonatomic) ZWPopStyle styleType;
/* 菜单点击回掉，默认值：6; */
@property (nonatomic,copy) ItemsClickBlock itemsClickBlock;

@property (nonatomic,copy) BackViewTapBlock backViewTapBlock;
/* 最多菜单项个数，默认值：6; */
@property (nonatomic,assign) NSInteger maxValueForItemCount;

/**
 *  menu
 *
 *  @param frame            菜单frame
 *  @param target           将在在何控制器弹出
 *  @param dataArray        菜单项内容
 *  @param itemsClickBlock  点击某个菜单项的blick
 *  @param backViewTapBlock 点击背景遮罩的block
 *
 *  @return 返回创建对象
 */
+ (ZWCommonMenuView *)createMenuWithFrame:(CGRect)frame target:(UIViewController *)target dataArray:(NSArray *)dataArray itemsClickBlock:(void(^)(NSString *str, NSInteger tag))itemsClickBlock backViewTap:(void(^)())backViewTapBlock;

/**
 *  展示菜单,定点展示
 *
 *  @param point 展示坐标
 */
+ (void)showMenuAtPoint:(CGPoint)point;

/* 隐藏菜单 */
+ (void)hidden;

/* 移除菜单 */
+ (void)clearMenu;

/**
 *  追加菜单项
 *
 *  @param itemsArray 需要追加的菜单项内容数组
 */
+ (void)appendMenuItemsWith:(NSArray *)appendItemsArray;

/**
 *  更新菜单项
 *
 *  @param itemsArray 需要更新的菜单项内容数组
 */
+ (void)updateMenuItemsWith:(NSArray *)newItemsArray;


@end
