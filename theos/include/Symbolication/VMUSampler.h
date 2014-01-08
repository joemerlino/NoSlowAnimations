/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSConditionLock, VMUSymbolicator, NSMutableArray;

@interface VMUSampler : NSObject {
	int _pid;
	unsigned _task;
	BOOL _needTaskPortDealloc;
	BOOL _taskIs64Bit;
	VMUSymbolicator* _symbolicator;
	double _tbRate;
	double _tbInterval;
	NSConditionLock* _stateLock;
	double _interval;
	double _timeLimit;
	unsigned _sampleLimit;
	BOOL _sampling;
	unsigned _samplingThreadPort;
	NSMutableArray* _samples;
	BOOL _stacksFixed;
	id _delegate;
}
+(id)sampleAllThreadsOfPID:(int)pid withSymbolicator:(id)symbolicator;
+(id)sampleAllThreadsOfTask:(unsigned)task withSymbolicator:(id)symbolicator;
+(id)sampleAllThreadsOfTask:(unsigned)task withSymbolicator:(id)symbolicator symbolicate:(BOOL)symbolicate;
// inherited: -(id)init;
-(id)initWithPID:(int)pid;
-(id)initWithTask:(unsigned)task;
// inherited: -(void)dealloc;
// inherited: -(void)finalize;
-(void)_makeHighPriority;
-(void)_makeTimeshare;
-(unsigned)samplingThread;
-(BOOL)recordSampleTo:(id)to beginTime:(double)time endTime:(double)time3;
-(void)_fixupStacks:(id)stacks symbolicate:(BOOL)symbolicate;
-(void)_runSamplingThread;
-(id)sampleAllThreadsOnce;
-(id)sampleAllThreadsOnce:(BOOL)once;
-(BOOL)start;
-(BOOL)stop;
-(BOOL)waitUntilDone;
-(void)setSamplingInterval:(double)interval;
-(double)samplingInterval;
-(void)setTimeLimit:(double)limit;
-(double)timeLimit;
-(void)setSampleLimit:(unsigned)limit;
-(unsigned)sampleLimit;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)setSymbolicator:(id)symbolicator;
-(id)symbolicator;
-(void)preloadSymbols;
-(void)sampleForDuration:(unsigned)duration interval:(unsigned)interval;
-(void)stopSampling;
-(void)forceStop;
-(id)stopSamplingAndReturnCallNode;
-(id)_systemVersionDescription;
-(void)writeOutput:(id)output append:(BOOL)append;
@end

