//
//  RKCPAppDelegate.h
//  RKCocoaPods OS X
//
//  Created by Blake Watters on 12/19/12.
//  Copyright (c) 2012 RestKit. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface RKCPAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
