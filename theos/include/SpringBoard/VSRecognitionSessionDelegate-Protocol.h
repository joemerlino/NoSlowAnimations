/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol VSRecognitionSessionDelegate <NSObject>

@optional
- (void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
- (void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
- (id)recognitionSession:(id)arg1 openURL:(id)arg2;
- (void)recognitionSessionDidBeginAction:(id)arg1;
- (BOOL)recognitionSessionWillBeginAction:(id)arg1;
@end

