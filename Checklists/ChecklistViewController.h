//
//  ChecklistsViewController.h
//  Checklists
//
//  Created by Michael Henry on 11/17/13.
//  Copyright (c) 2013 Digital Javelina, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemDetailViewController.h"

@class Checklist;

@interface ChecklistViewController : UITableViewController <ItemDetailViewControllerDelegate>

@property (nonatomic, strong) Checklist *checklist;


@end
