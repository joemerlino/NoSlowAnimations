/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBUIAnimationZoomDownApp.h"

@class SBAlertManager;

@interface SBUIAnimationZoomDownAppToAlert : SBUIAnimationZoomDownApp
{
    SBAlertManager *_alertManager;
}

- (void)cleanupZoom;
- (void)animateZoomWithCompletion:(id)arg1;
- (void)prepareZoom;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithDeactivatingApp:(id)arg1 alertManager:(id)arg2;

@end

