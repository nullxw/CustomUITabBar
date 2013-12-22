//
//  SecondViewController.m
//  CustomUITabBar
//
//  Created by akron on 12/18/13.
//  Copyright (c) 2013 yechunxiao. All rights reserved.
//

#import "SecondViewController.h"
#import "shadowViewController.h"
#import "CustomUITabBarController.h"
#import "AppDelegate.h"
#import "FirstViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewWillAppear:(BOOL)animated
{
	[super viewWillAppear:animated];
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	self.view.backgroundColor = [UIColor redColor];
	
	UIBarButtonItem *rightBtn = [[UIBarButtonItem alloc] initWithTitle:@"Add" style:UIBarButtonItemStyleBordered target:self action:@selector(hide)];
	self.navigationItem.rightBarButtonItem = rightBtn;
}


- (void)hide
{
    static NSInteger dir = 0;
    
    //    FirstViewController *firstVC = [[FirstViewController alloc] init];
    shadowViewController *firstVC = [[shadowViewController alloc] init];
    //firstVC.hidesBottomBarWhenPushed = YES;
    AppDelegate* appDelegate = (AppDelegate*)[UIApplication sharedApplication].delegate;
    
    dir++;
    appDelegate.tabBarController.animateDriect = dir % 2;
    firstVC.hidesBottomBarWhenPushed = YES;
    //[appDelegate.leveyTabBarController hidesTabBar:YES animated:YES];
    [self.navigationController pushViewController:firstVC animated:YES];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
