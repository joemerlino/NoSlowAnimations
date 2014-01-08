/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class SBIcon;
@protocol SBIconObserver <NSObject>

@optional
- (void)iconLaunchEnabledDidChange:(SBIcon *)icon;
- (void)iconAccessoriesDidUpdate:(SBIcon *)icon;
- (void)iconImageDidUpdate:(SBIcon *)icon;
@end

