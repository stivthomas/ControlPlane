//
//  ToggleFTPAction.h
//  ControlPlane
//
//  Created by Dustin Rue on 3/26/12.
//  Copyright (c) 2012. All rights reserved.
//

#import "ToggleableAction.h"

@interface ToggleFTPAction : ToggleableAction

- (NSString *) description;
- (BOOL) execute: (NSString **) errorString;
+ (NSString *) helpText;
+ (NSString *) creationHelpText;

@end