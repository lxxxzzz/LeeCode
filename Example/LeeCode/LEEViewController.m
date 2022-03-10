//
//  LEEViewController.m
//  LeeCode
//
//  Created by Danny.li on 03/10/2022.
//  Copyright (c) 2022 Danny.li. All rights reserved.
//

#import "LEEViewController.h"
#import <YXProxy.h>

@interface LEEViewController ()

@property (nonatomic, strong) NSTimer *timer;

@end

@implementation LEEViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    
    self.timer = [NSTimer scheduledTimerWithTimeInterval:1 target:[YXProxy proxyWithTarget:self] selector:@selector(test) userInfo:nil repeats:YES];
}

- (void)test {
    NSLog(@"----------------");
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
