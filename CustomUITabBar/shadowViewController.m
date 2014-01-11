//
//  shadowViewController.m
//  CustomUITabBar
//
//  Created by akron on 12/18/13.
//  Copyright (c) 2013 yechunxiao. All rights reserved.
//

#import "shadowViewController.h"

@interface shadowViewController ()

@end

@implementation shadowViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)loadView
{
	[super loadView];
	
    CGRect frame = [self.view bounds];
    
    UIView *shadowView = [[UIView alloc] initWithFrame:CGRectMake(0, 60, frame.size.width, frame.size.height)];
    shadowView.backgroundColor = [UIColor colorWithRed:0.0f/255.0f green:0.0f/255.0f blue:0.0f/255.0f alpha:0.4f];
    [self.view addSubview:shadowView];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
