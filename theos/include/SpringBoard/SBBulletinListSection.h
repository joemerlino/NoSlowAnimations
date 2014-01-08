/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class BBSectionInfo, NSArray, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, UIImage;

@interface SBBulletinListSection : NSObject
{
    NSString *_sectionID;
    int _sectionType;
    int _sectionCategory;
    id _widget;
    NSMutableArray *_bulletins;
    NSMutableSet *_bulletinIDs;
    NSArray *_sortDescriptors;
    NSString *_displayName;
    UIImage *_iconImage;
    BOOL _showsInLockScreen;
    BOOL _showsMessagePreview;
    unsigned int _messageNumberOfLines;
    BOOL _displaysCriticalBulletins;
    NSDate *_lastSortDate;
    NSMutableSet *_subsections;
    UIImage *_largeIconImage;
    BBSectionInfo *_sectionInfo;
}

@property(retain, nonatomic) BBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) unsigned int messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) BOOL showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) UIImage *largeIconImage; // @synthesize largeIconImage=_largeIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) id widget; // @synthesize widget=_widget;
@property(readonly, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
- (void)setShowsMessagePreview:(BOOL)arg1 forSubsectionID:(id)arg2;
- (BOOL)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1;
- (BOOL)showsMessagePreviewForBulletinID:(id)arg1;
- (void)setShowsInLockScreen:(BOOL)arg1 forSubsectionID:(id)arg2;
- (BOOL)showsBulletinsInSubsectionIDInLockScreen:(id)arg1;
- (BOOL)showsBulletinIDInLockScreen:(id)arg1;
- (id)_subsectionWithIDCreatingIfNecessary:(id)arg1;
@property(readonly, nonatomic) NSSet *subsectionIDs;
- (BOOL)hasBulletinWithID:(id)arg1;
- (id)bulletinWithBulletinID:(id)arg1;
- (id)bulletinAtIndex:(unsigned int)arg1;
- (unsigned int)replaceBulletin:(id)arg1 withBulletin:(id)arg2;
- (unsigned int)removeBulletin:(id)arg1;
- (unsigned int)_removeBulletin:(id)arg1;
- (unsigned int)addBulletin:(id)arg1;
- (unsigned int)indexOfBulletinWithLocalNotification:(id)arg1;
- (unsigned int)indexOfBulletinID:(id)arg1;
- (unsigned int)_indexForNewBulletin:(id)arg1;
- (int)compareSection:(id)arg1 forOrder:(int)arg2;
- (int)compare:(id)arg1;
- (void)_updateWithSectionInfo:(id)arg1;
- (void)updateWithSectionInfo:(id)arg1;
- (void)dealloc;
- (id)initWithSectionInfo:(id)arg1;
- (BOOL)displaysCriticalBulletins;
- (id)lastSortDate;
- (BOOL)hasClearableBulletins;
- (unsigned int)bulletinCount;
- (BOOL)isBulletinSection;
- (BOOL)isWidgetSection;
- (id)description;

@end

