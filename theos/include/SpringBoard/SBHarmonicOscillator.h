/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBHarmonicOscillator : NSObject
{
    float A;
    float Z;
    float k;
    float dk;
    float mink;
    float m;
    float dm;
    float minm;
    float psi_n;
    float psi_d;
    float zeta;
}

@property(nonatomic) float minimumMass; // @synthesize minimumMass=minm;
@property(nonatomic) float massDecay; // @synthesize massDecay=dm;
@property(nonatomic) float mass; // @synthesize mass=m;
@property(nonatomic) float minimumSpringStrength; // @synthesize minimumSpringStrength=mink;
@property(nonatomic) float springDecay; // @synthesize springDecay=dk;
@property(nonatomic) float springStrength; // @synthesize springStrength=k;
@property(nonatomic) float endingAmplitude; // @synthesize endingAmplitude=Z;
@property(nonatomic) float startingAmplitude; // @synthesize startingAmplitude=A;
- (float)amplitudeForElapsedTime:(double)arg1;
- (void)updateParameters;
- (void)setSpringConstant:(float)arg1;
- (id)init;

@end

