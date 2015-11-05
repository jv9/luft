//
//  LightViewControllers.h
//  LightViewControllers
//
//  Created by Hugo Tunius on 05/11/15.
//  Copyright © 2015 Hugo Tunius. All rights reserved.
//

#import <AppKit/AppKit.h>

@class LightViewControllers;

static LightViewControllers *sharedPlugin;

@interface LightViewControllers : NSObject

+ (instancetype)sharedPlugin;


- (id)initWithBundle:(NSBundle *)plugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;
@end