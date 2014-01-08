/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBStarkFakeIconOperationController, SBStarkIconListModel;

@protocol SBStarkLauncher <NSObject>
+ (float)desiredHeightForBounds:(struct CGRect)arg1;
@property(nonatomic) id <SBStarkAutoHideControlBarDelegate> autoHideDelegate;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController;
@property(readonly, nonatomic) BOOL obscuresControlBar;
@property(readonly, nonatomic) BOOL hidesAutomatically;
@property(readonly, nonatomic) SBStarkIconListModel *iconList;
@property(nonatomic) float height;
@end
