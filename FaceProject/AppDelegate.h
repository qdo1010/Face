//
//  AppDelegate.h
//  FaceProject
//
//  Created by HongQuan Do on 1/28/17.
//  Copyright © 2017 HongQuan Do. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

