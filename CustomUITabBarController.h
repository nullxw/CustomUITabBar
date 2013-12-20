//
//  CustomUITabBarController.h
//  CustomUITabBar
//
//  Created by akron on 12/18/13.
//  Copyright (c) 2013 yechunxiao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomTabBar.h"
@class UITabBarController;
@protocol CustomUITabBarControllerDelegate;

@interface CustomUITabBarController : UIViewController<CustomTabBarDelegate>
{
	CustomTabBar *_tabBar;
	UIView      *_containerView;
	UIView		*_transitionView;
	id<CustomUITabBarControllerDelegate> delegate;
	NSMutableArray *_viewControllers;
	NSUInteger _selectedIndex;
	
	BOOL _tabBarTransparent;
	BOOL _tabBarHidden;
    
    NSInteger animateDriect;
}

@property(nonatomic, copy) NSMutableArray *viewControllers;

@property(nonatomic, readonly) UIViewController *selectedViewController;
@property(nonatomic) NSUInteger selectedIndex;

// Apple is readonly
@property (nonatomic, readonly) CustomTabBar *tabBar;
@property(nonatomic,assign) id<CustomUITabBarControllerDelegate> delegate;


// Default is NO, if set to YES, content will under tabbar
@property (nonatomic) BOOL tabBarTransparent;
@property (nonatomic) BOOL tabBarHidden;

@property(nonatomic,assign) NSInteger animateDriect;

- (id)initWithViewControllers:(NSArray *)vcs imageArray:(NSArray *)arr;

- (void)hidesTabBar:(BOOL)yesOrNO animated:(BOOL)animated;
- (void)hidesTabBar:(BOOL)yesOrNO animated:(BOOL)animated driect:(NSInteger)driect;

// Remove the viewcontroller at index of viewControllers.
- (void)removeViewControllerAtIndex:(NSUInteger)index;

// Insert an viewcontroller at index of viewControllers.
- (void)insertViewController:(UIViewController *)vc withImageDic:(NSDictionary *)dict atIndex:(NSUInteger)index;

@end


@protocol CustomUITabBarControllerDelegate <NSObject>
@optional
- (BOOL)tabBarController:(CustomUITabBarController *)tabBarController shouldSelectViewController:(UIViewController *)viewController;
- (void)tabBarController:(CustomUITabBarController *)tabBarController didSelectViewController:(UIViewController *)viewController;
@end

@interface UIViewController (CustomUITabBarControllerSupport)
@property(nonatomic, readonly) CustomUITabBarController *customUITabBarController;

@end
