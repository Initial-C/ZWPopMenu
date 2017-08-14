//
//  AppDelegate.h
//  ZWPopMenuDemo
//
//  Created by InitialC on 2017/8/14.
//  Copyright © 2017年 InitialC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

