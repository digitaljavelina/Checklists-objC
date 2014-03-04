//
//  Checklist.h
//  Checklists
//
//  Created by Michael Henry on 2/7/14.
//  Copyright (c) 2014 Digital Javelina, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;

@end
