//
//  AllListsViewController.h
//  Checklists
//
//  Created by Michael Henry on 2/7/14.
//  Copyright (c) 2014 Digital Javelina, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"

@class DataModel;

@interface AllListsViewController : UITableViewController <ListDetailViewControllerDelegate>

@property (nonatomic, strong) DataModel *dataModel;

@end
