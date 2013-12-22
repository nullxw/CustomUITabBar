//
//  AppDelegate.h
//  CustomUITabBar
//
//  Created by akron on 12/18/13.
//  Copyright (c) 2013 yechunxiao. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CustomUITabBarController;
@interface AppDelegate : UIResponder <UIApplicationDelegate,UINavigationControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) CustomUITabBarController *tabBarController;

@end
