/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBIconIndexNodeObserver.h"

@class SBFMappedImageCache;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver>
{
    SBFMappedImageCache *_imageCache;
    int _invalidatedLocations;
}

- (id)_lockScreenSnapshotProvider;
- (id)_homeScreenSnapshotProvider;
- (void)_backlightFadeFinished;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)regenerateSnapshotsForLocations:(int)arg1 withCompletion:(id)arg2;
- (id)homeScreenSnapshot;
- (id)lockScreenSnapshot;
- (void)invalidateSnapshotsForLocations:(int)arg1;
- (void)dealloc;
- (id)initWithImageCache:(id)arg1;

@end

