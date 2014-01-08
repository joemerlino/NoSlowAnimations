/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>
#import "MusicLibrary-Structs.h"

@class NSDate, NSMutableArray, NSString;

@interface MLPhotoLibrary : NSObject {
@private
	NSString* _path;
	NSMutableArray* _albums;
	NSDate* _referenceDate;
	BOOL _cancelFileSystemGarbageCollection;
}
+(id)sharedPhotoLibrary;
+(void)setApplicationIsWildcat:(BOOL)wildcat;
+(BOOL)isApplicationWildcat;
+(id)imageFormats;
+(int)widthForFormat:(int)format;
+(int)heightForFormat:(int)format;
+(BOOL)formatIsCropped:(int)cropped;
+(BOOL)formatHasJPEGFile:(int)file;
+(BOOL)formatWasSynced:(int)synced;
+(BOOL)isAlbumVideoPath:(id)path;
+(BOOL)transformForImage:(CGImageRef)image orientation:(int)orientation format:(int)format sizeInOut:(CGSize*)anOut contextSizeOut:(CGSize*)anOut5 transformOut:(CGAffineTransform*)anOut6;
-(void)_loadImageLibrary;
-(void)_flushImageLibrary;
-(id)initWithPath:(id)path;
-(void)dealloc;
-(ITImageInfo*)_imageInfoForPhoto:(id)photo;
-(id)databasePath;
-(id)videosPath;
-(id)slideshowSettingsPathForUuid:(id)uuid;
-(id)pathForPhotoJPEG:(id)photoJPEG format:(int)format;
-(id)dataForPhoto:(id)photo format:(int)format width:(int*)width height:(int*)height bytesPerRow:(int*)row dataWidth:(int*)width6 dataHeight:(int*)height7 imageDataOffset:(int*)offset;
-(id)iTunesDataForPhoto:(id)photo format:(int)format width:(int*)width height:(int*)height bytesPerRow:(int*)row dataWidth:(int*)width6 dataHeight:(int*)height7 imageDataOffset:(int*)offset;
-(CGRect)faceRectangles:(id)rectangles forPhoto:(id)photo;
-(id)dateForPhoto:(id)photo;
-(id)_albums;
-(void)_setAlbums:(id)albums;
-(id)albums;
-(id)albumsWithKinds:(id)kinds;
-(id)eventAlbums;
-(id)faceAlbums;
-(id)placeAlbums;
-(id)userAlbums;
-(BOOL)iTunesLibraryFromIPhoto;
-(BOOL)iTunesLibraryFromAperture;
-(BOOL)supportsAllPhotos;
-(BOOL)supportsAlbums;
-(BOOL)supportsEvents;
-(BOOL)supportsFaces;
-(BOOL)supportsPlaces;
-(BOOL)containersAreSorted;
-(void)flushAlbums;
-(void)reloadAlbums;
-(id)imageWithITImageInfo:(ITImageInfo*)itimageInfo;
-(BOOL)sortITunesAlbumsByDate;
-(id)_imagesForAlbum:(id)album firstImageOnly:(BOOL)only;
-(int)numberOfImagesInAlbum:(id)album;
-(int)numberOfVideosInAlbum:(id)album;
-(id)countOfAllPhotosAndVideos;
-(BOOL)_hasAtLeastOnePhoto:(BOOL)leastOnePhoto;
-(BOOL)hasAtLeastOneItem;
-(BOOL)hasAtLeastOnePhoto;
-(BOOL)hasAtLeastOnePhotoWithGPS;
-(BOOL)isPosterPhoto:(id)photo forAlbum:(id)album;
-(void)updateHasAtLeastOnePhotoWithGPS;
-(id)firstImageForAlbum:(id)album;
-(id)imagesForAlbum:(id)album;
-(id)_faceImageDataForRecordID:(int)recordID faceIndex:(int)index returnLocationInImage:(CGRect*)image;
-(id)iTunesFaceImageForRecordID:(int)recordID faceIndex:(int)index size:(CGSize)size returnLocationInImage:(CGRect*)image;
-(void)iTunesFaceForID:(int)anId faceIndex:(int)index photoOut:(id*)anOut rectOut:(CGRect*)anOut4;
@end

