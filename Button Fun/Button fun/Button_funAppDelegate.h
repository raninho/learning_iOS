//
//  Button_funAppDelegate.h
//  Button fun
//
//  Created by Raniere Fernandes de Medeiro on 01/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Button_funViewController;

@interface Button_funAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Button_funViewController *viewController;

@end
