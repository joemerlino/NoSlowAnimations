/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIScreen;

@interface SBSnapshotImageInfo : NSObject
{
    BOOL _defaultPNG;
    NSString *_path;
    UIScreen *_screen;
    float _scale;
    int _launchingOrientation;
    int _originalOrientation;
}

+ (id)snapshotImageInfoWithPath:(id)arg1 launchingOrientation:(int)arg2 originalOrientation:(int)arg3 forScreen:(id)arg4;
@property(nonatomic) BOOL defaultPNG; // @synthesize defaultPNG=_defaultPNG;
@property(nonatomic) int originalOrientation; // @synthesize originalOrientation=_originalOrientation;
@property(nonatomic) int launchingOrientation; // @synthesize launchingOrientation=_launchingOrientation;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)description;
- (id)_stringForInterfaceOrientation:(int)arg1;
- (void)dealloc;

@end

