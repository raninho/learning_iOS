//
//  Button_funViewController.m
//  Button fun
//
//  Created by Raniere Fernandes de Medeiro on 01/10/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "Button_funViewController.h"

@implementation Button_funViewController
@synthesize statusText;

- (IBAction)buttonPressed:(id)sender {
    NSString * title = [sender titleForState:UIControlStateNormal];
    NSString * newTitle =[[NSString alloc] initWithFormat:@"%@ button pressed.", title];
    
    statusText.text = newTitle;
    [newTitle release];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (void)dealloc{
    [statusText release];
    [super dealloc];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
