/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

@class MessageFileWrapper;

@interface MessageTextAttachment : NSObject {
	MessageFileWrapper* _fileWrapper;
}
-(id)initWithWrapper:(id)wrapper;
// inherited: -(void)dealloc;
-(unsigned)approximateSize;
-(id)mimePart;
-(BOOL)hasBeenDownloaded;
-(BOOL)isPlaceholder;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(void)setFileWrapper:(id)wrapper;
-(id)fileWrapper;
-(id)fileWrapperForcingDownload:(BOOL)download;
-(void)inlineDisplayData:(id*)data mimeType:(id*)type;
-(BOOL)allowDownload;
// inherited: -(id)description;
@end

