//
//  Lesson1AppDelegate.h
//  Lesson1
//
//  Created by Kaelan thaddeus Mikowicz on 11/1/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Lesson1AppDelegate : UIResponder <UIApplicationDelegate>
{
    IBOutlet UILabel *label;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;

-(IBAction) changeText:(id)sender;

@end
