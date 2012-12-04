//
//  DetailViewController.h
//  TestApp
//
//  Created by Vinay Balamuru on 12/3/12.
//  Copyright (c) 2012 Vinay Balamuru. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
