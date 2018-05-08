//
//  AppDelegate.h
//  testApplication
//
//  Created by Asim Khan on 5/8/18.
//  Copyright © 2018 M3 Technologies Pakistan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

