//
//  MasterViewController.h
//  TDDJenkins
//
//  Created by  on 12/17/12.
//  Copyright (c) 2012 com.companyname. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
