//
//  GDYAppDelegate.h
//  fruitLink
//
//  Created by gdy on 14-11-21.
//  Copyright (c) 2014年 郭东洋. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GDYAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
