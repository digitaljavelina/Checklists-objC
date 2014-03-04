//
//  AllListsViewController.h
//  Checklists
//
//  Created by Michael Henry on 2/7/14.
//  Copyright (c) 2014 Digital Javelina, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"

@interface AllListsViewController : UITableViewController <ListDetailViewControllerDelegate>

- (void)saveChecklists;

@end
