//
//  Button_funViewController.h
//  Button fun
//
//  Created by Raniere Fernandes de Medeiro on 01/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Button_funViewController : UIViewController{
    UILabel * statusText;
}

@property (nonatomic, retain) IBOutlet UILabel * statusText;

- (IBAction)buttonPressed:(id)sender;

@end
