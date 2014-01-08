/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpringBoardUI/SBDeviceLockView.h>

#import "TPDialerKeypadDelegate.h"

@class SBDeviceLockKeypad;

@interface SBDeviceLockViewWithKeypad : SBDeviceLockView <TPDialerKeypadDelegate>
{
    SBDeviceLockKeypad *_keypad;
    _Bool _cancelingTouches;
}

- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;
- (void)phonePad:(id)arg1 keyDown:(BOOL)arg2;
- (void)deviceLockEntryFieldDidAcceptEntry:(id)arg1;
- (void)deviceLockEntryFieldTextDidChange:(id)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (_Bool)showsEmergencyCallButton;
- (void)setPlaysKeyboardClicks:(_Bool)arg1;
- (_Bool)playsKeyboardClicks;
- (void)setPasscode:(id)arg1;
- (id)keypadView;
- (void)dealloc;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2 showsEmergencyCall:(_Bool)arg3;

@end
