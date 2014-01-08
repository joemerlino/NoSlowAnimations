/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBStarkAutoHideControlBarDelegate.h"
#import "UIStatusBarStyleDelegate.h"

@class NSMutableSet, SBStarkFakeIconOperationController, SBStarkScreenFocusController, UIStatusBar, UIViewController<SBStarkLauncher>;

@interface SBStarkControlBarViewController : UIViewController <UIStatusBarStyleDelegate, SBStarkAutoHideControlBarDelegate>
{
    id <SBStarkControlBarDelegate> _delegate;
    double _autoHideDelay;
    NSMutableSet *_launcherHideReasons;
    UIViewController<SBStarkLauncher> *_launcherViewController;
    UIStatusBar *_statusBarView;
    id <UIStatusBarStyleDelegate> _statusBarStyleDelegate;
    NSMutableSet *_statusBarHideReasons;
    int _requestedStyle;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
}

@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController; // @synthesize fakeIconOperationController=_fakeIconOperationController;
@property(retain, nonatomic) SBStarkScreenFocusController *focusController; // @synthesize focusController=_focusController;
@property(nonatomic) id <SBStarkControlBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetStarkControlBarAutoHideTimer;
- (void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (BOOL)_isStatusBarHidden;
- (void)_autoHideTriggered;
- (void)_resetAutoHideTimer;
- (struct CGRect)_launcherViewFrameForVisibility:(BOOL)arg1;
- (void)_setLauncherHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3 fallbackToDefaultAnimationFactory:(BOOL)arg4;
- (BOOL)_isLauncherHidden;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)updateStatusBarWithRequestedStyle:(int)arg1 animationFactory:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
@property(nonatomic) id <UIStatusBarStyleDelegate> statusBarStyleDelegate;
- (void)setLauncherHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3;
- (void)setLauncherHidden:(BOOL)arg1 forReason:(id)arg2 animated:(BOOL)arg3;
@property(nonatomic) double autoHideDelay;
@property(readonly, nonatomic) struct CGPoint highestVisiblePoint;
- (void)dealloc;
- (id)initWithInterfaceType:(int)arg1;

@end

