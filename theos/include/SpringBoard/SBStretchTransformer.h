/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CAMutableMeshTransform, UIView;

@interface SBStretchTransformer : NSObject
{
    UIView *m_view;
    int m_anchorEdge;
    int m_orientation;
    CAMutableMeshTransform *m_mesh;
    float m_stretchFactor;
    id m_animationCompletionHandler;
}

@property(nonatomic) float stretchFactor; // @synthesize stretchFactor=m_stretchFactor;
@property(nonatomic) int orientation; // @synthesize orientation=m_orientation;
@property(nonatomic) int anchorEdge; // @synthesize anchorEdge=m_anchorEdge;
@property(retain, nonatomic) UIView *view; // @synthesize view=m_view;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animateToZeroStretchFactorWithCompletionHandler:(id)arg1;
- (void)animateToZeroStretchFactor;
- (void)updateMeshTransform:(id)arg1 stretchFactor:(float)arg2;
- (id)meshTransform;
- (void)dealloc;
- (id)initWithView:(id)arg1 anchorEdge:(int)arg2 orientation:(int)arg3;

@end
