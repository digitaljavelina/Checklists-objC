//
//  ChecklistsAppDelegate.m
//  Checklists
//
//  Created by Michael Henry on 11/17/13.
//  Copyright (c) 2013 Digital Javelina, LLC. All rights reserved.
//

#import "ChecklistsAppDelegate.h"
#import <Crashlytics/Crashlytics.h>
#import "AllListsViewController.h"

@implementation ChecklistsAppDelegate
							
- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)saveData {
    
    UINavigationController *navigationController = (UINavigationController *)self.window.rootViewController;
    AllListsViewController *controller = navigationController.viewControllers[0];
    
    [controller saveChecklists];
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    [self saveData];
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    [self saveData];
}

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [Crashlytics startWithAPIKey:@"01e2bba84f780607890228d0e23a5a868036219f"];
    
    return YES;
}

@end
