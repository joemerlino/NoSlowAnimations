/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString;

@interface SBDeviceLockTitle : UIView
{
    int _style;
    long long _interfaceOrientation;
}

+ (id)newWithStyle:(int)arg1 interfaceOrientation:(long long)arg2;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
- (void)blinkSubtitle;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2;

@end

