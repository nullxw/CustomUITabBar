//
//  CustomTabBar.h
//  CustomUITabBar
//
//  Created by akron on 12/18/13.
//  Copyright (c) 2013 yechunxiao. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol CustomTabBarDelegate;

@interface CustomTabBar : UIView
{
	UIImageView *backgroundView;
	id<CustomTabBarDelegate> delegate;
	NSMutableArray *buttons;
}

@property (nonatomic, retain) UIImageView *backgroundView;
@property (nonatomic, assign) id<CustomTabBarDelegate> delegate;
@property (nonatomic, retain) NSMutableArray *buttons;


- (id)initWithFrame:(CGRect)frame buttonImages:(NSArray *)imageArray;
- (void)selectTabAtIndex:(NSInteger)index;
- (void)removeTabAtIndex:(NSInteger)index;
- (void)insertTabWithImageDic:(NSDictionary *)dict atIndex:(NSUInteger)index;
- (void)setBackgroundImage:(UIImage *)img;

@end
@protocol CustomTabBarDelegate<NSObject>
@optional
- (void)tabBar:(CustomTabBar *)tabBar didSelectIndex:(NSInteger)index;

@end
