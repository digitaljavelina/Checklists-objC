//
//  ChecklistItem.h
//  Checklists
//
//  Created by Michael Henry on 11/24/13.
//  Copyright (c) 2013 Digital Javelina, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;
@property (nonatomic, copy) NSDate *dueDate;
@property (nonatomic, assign) BOOL shouldRemind;
@property (nonatomic, assign) NSInteger itemId;

-(void)toggleChecked;

@end
