//
//  Control_FunAppDelegate.h
//  Control Fun
//
//  Created by Raniere Fernandes de Medeiro on 14/05/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Control_FunViewController;

@interface Control_FunAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet Control_FunViewController *viewController;

@end
