//
//  DataModel.h
//  Checklists
//
//  Created by Michael Henry on 3/3/14.
//  Copyright (c) 2014 Digital Javelina, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject

@property (nonatomic, strong) NSMutableArray *lists;

- (void)saveChecklists;
- (NSInteger)indexOfSelectedChecklist;
- (void)setIndexOfSelectedChecklist:(NSInteger)index;
- (void)sortChecklists;

@end
