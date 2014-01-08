/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer, SBPasscodeLockDisableAssertion;

@interface SBSyncController : NSObject
{
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    BOOL _showingResetUI;
    BOOL _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBPasscodeLockDisableAssertion *_disableDeviceLockAssertion;
}

+ (id)sharedInstance;
- (BOOL)isInUse;
- (void)_appInstallationNotification;
- (void)_setupRestoreTimer;
- (void)_restoreTimerFired:(id)arg1;
- (BOOL)_isBackupAgentRunning;
- (void)_invalidateRestoreTimer;
- (void)_resetEnded:(id)arg1;
- (void)_resetStarted:(id)arg1;
- (void)didEndResetting;
- (void)beginResetting:(BOOL)arg1;
- (void)_delayedBeginReset;
- (void)_updateProgress;
- (void)_delayedQuitApplications;
- (int)resetState;
- (BOOL)isResetting;
- (void)didEndRestoring:(int)arg1;
- (void)finishEndRestoring;
- (void)_rebootNow;
- (void)cancelRestoring;
- (void)finishedTerminatingApplications;
- (void)beginRestoring;
- (void)_killApplications;
- (void)_notifyRestoreCanProceed;
- (int)restoreState;
- (BOOL)isRestoring;
- (void)_wirelessSyncEnded:(id)arg1;
- (void)syncSessionDidEnd;
- (void)_setRestoreState:(int)arg1;
- (void)stopObserving;
- (void)startObserving;
- (void)dealloc;

@end

