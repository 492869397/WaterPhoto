//
//  MainViewController.m
//  WaterPhoto
//
//  Created by len on 16/8/5.
//  Copyright (c) 2016年 com.sxt. All rights reserved.
//

#import "MainViewController.h"
#import "CameraViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)enterPhotoView:(id)sender {
    
    CameraViewController *camera = [[CameraViewController alloc]init];
    
    [self.navigationController pushViewController:camera animated:YES];
    
}


@end
