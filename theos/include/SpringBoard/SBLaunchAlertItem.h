/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString, SBApplication;

@interface SBLaunchAlertItem : SBAlertItem
{
    SBApplication *_associatedDisplay;
    int _type;
    NSString *_bundleID;
    BOOL _isDataAlert;
    BOOL _usesCellNetwork;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)alertSheet;
- (id)_customAirplaneModeAlertPrompt;
- (BOOL)dismissOnLock;
- (void)_displayDeactivated:(id)arg1;
- (void)setAssociatedWithDisplay:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchAlertType:(int)arg1 dataAlert:(BOOL)arg2 usesCellNetwork:(BOOL)arg3 bundleID:(id)arg4;

@end

