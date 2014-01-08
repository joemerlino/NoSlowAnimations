/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <MusicLibrary/MLPhoto.h>

@class UIImage, NSString, MLPhotoDCFFileGroup;

@interface PLCameraImage : MLPhoto {
	MLPhotoDCFFileGroup* _fileGroup;
	UIImage* _thumbnailImage;
	double _duration;
	BOOL _hasJPEGData;
	unsigned _didSetHasJPEGData : 1;
	unsigned _didSetDuration : 1;
}
@property(readonly, assign, nonatomic) NSString* title;
+(void)setMaxImageSize:(int)size;
+(int)imageIDForFileGroup:(id)fileGroup;
-(id)initWithDCFFileGroup:(id)dcffileGroup;
-(void)checkForVideoFile;
// inherited: -(unsigned)hash;
// inherited: -(BOOL)isEqual:(id)equal;
// inherited: -(void)dealloc;
-(id)fileGroup;
-(void)fileGroupWillBeginSaving:(id)fileGroup;
-(void)fileGroupDidFinishSaving:(id)fileGroup jobType:(id)type;
-(int)compare:(id)compare;
// inherited: -(BOOL)isAudio;
// inherited: -(BOOL)hasFullSizeJPEGData;
// inherited: -(id)fullSizeJPEGPath;
// inherited: -(id)description;
-(void)setThumbnailImage:(id)image;
-(id)thumbnailImage;
-(CGImageRef)_createCGImageForFormat:(int)format orientation:(int*)orientation ignoringSizeCaps:(BOOL)caps properties:(const CFDictionaryRef*)properties;
-(CGImageRef)createFullScreenCGImageRef:(int*)ref properties:(const CFDictionaryRef*)properties;
-(CGImageRef)createFullSizeCGImageRef:(int*)ref;
-(CGImageRef)createFullSizeCGImageRefForImagePickerClient:(int*)imagePickerClient;
-(CGImageRef)createLowResolutionFullScreenCGImageRef;
-(BOOL)hasFullSizeImage;
// inherited: -(void)deleteFiles;
// inherited: -(double)duration;
// inherited: -(id)pathForVideoFile;
// inherited: -(BOOL)isWritePending;
// inherited: -(void)setWriteIsPending:(BOOL)pending;
// inherited: -(id)pathForVideoPreviewFile;
// inherited: -(void)addExtension:(id)extension;
// inherited: -(void)setDate:(id)date;
// inherited: -(id)pathForPrebakedLandscapeScrubberThumbnails;
// inherited: -(id)pathForPrebakedPortraitScrubberThumbnails;
// inherited: -(id)pathForTrimmedVideoFile;
-(id)posterImagePath;
// inherited: -(id)pathForThumbnailFile;
// inherited: -(id)pathForPrebakedThumbnail;
-(id)pathForFullSizeImage;
@end

