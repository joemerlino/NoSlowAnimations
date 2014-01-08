/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBApplication, UIView;

@interface SBMiniAlertController : NSObject
{
    SBApplication *_displayShowingAnAlert;
    unsigned int _sbMiniAlertVisible:1;
    UIView *_hiddenAlertWindow;
}

+ (id)sharedInstance;
- (BOOL)canShowAlerts;
- (BOOL)miniAlertVisible;
- (void)_setAlertVisibleNotifyState:(BOOL)arg1;
- (void)noteMiniAlertStateChanged;
- (void)hideApplicationMiniAlerts;
- (void)_hideMiniAlertsForApp:(id)arg1;
- (void)showApplicationMiniAlertsIfNeeded;
- (void)displayDidDismissMiniAlert:(id)arg1;
- (void)displayWillDismissMiniAlert:(id)arg1;
- (id)displayShowingAnAlert;
- (void)displayWillShowMiniAlert:(id)arg1;
- (void)_setDisplayShowingAnAlert:(id)arg1;
- (void)deactivateAlertItemsForDisplay:(id)arg1;
- (void)dealloc;
- (id)init;

@end

