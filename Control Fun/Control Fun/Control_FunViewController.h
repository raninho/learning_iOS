//
//  Control_FunViewController.h
//  Control Fun
//
//  Created by Raniere Fernandes de Medeiro on 14/05/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define KSwitchesSegmentIndex   0

@interface Control_FunViewController : UIViewController <UIActionSheetDelegate> {
    UITextField *nameField;
    UITextField *numberField;
    UILabel *sliderLabel;
    UISwitch *leftSwitch;
    UISwitch *rightSwitch;
    UIButton *doSomethingButton;

}
@property (nonatomic, retain) IBOutlet UITextField *nameField;
@property (nonatomic, retain) IBOutlet UITextField *numberField;
@property (nonatomic, retain) IBOutlet UILabel *sliderLabel;
@property (nonatomic, retain) IBOutlet UISwitch *leftSwitch;
@property (nonatomic, retain) IBOutlet UISwitch *rightSwitch;
@property (nonatomic, retain) IBOutlet UIButton *doSomethingButton;
- (IBAction)textFieldDoneEditing:(id)sender;
- (IBAction)backgrounTap:(id)sender;
- (IBAction)sliderChanged:(id)sender;
- (IBAction)toggleControls:(id)sender;
- (IBAction)switchChanged:(id)sender;
- (IBAction)buttonPressed;
@end
