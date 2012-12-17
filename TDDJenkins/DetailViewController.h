//
//  DetailViewController.h
//  TDDJenkins
//
//  Created by  on 12/17/12.
//  Copyright (c) 2012 com.companyname. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
