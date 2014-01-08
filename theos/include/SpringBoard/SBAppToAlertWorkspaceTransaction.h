/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate.h"

@class BKSApplicationActivationAssertion, SBAlert, SBApplication, SBUIAnimationController;

@interface SBAppToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBApplication *_topApplication;
    BKSApplicationActivationAssertion *_topApplicationActivationAssertion;
    BOOL _topApplicationSuppressesSpringBoardStatusBar;
    SBAlert *_activatingAlert;
    SBUIAnimationController *_animation;
    id _alertActivationBlock;
    BOOL _animatedAppDeactivation;
    BOOL _suspendWorkspace;
}

@property(copy, nonatomic) id alertActivationBlock; // @synthesize alertActivationBlock=_alertActivationBlock;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_transactionComplete;
- (BOOL)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 alert:(id)arg3 overTopApplication:(id)arg4;

@end

