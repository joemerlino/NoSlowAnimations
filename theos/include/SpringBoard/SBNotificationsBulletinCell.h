/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBNotificationCell.h"

@class SBNotificationCenterSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell
{
    SBNotificationCenterSeparatorView *_separator;
    BOOL _missed;
}

+ (id)defaultColorForRelevanceDate;
+ (struct CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1;
+ (float)iconPaddingLeft;
@property(nonatomic, getter=isMissed) BOOL missed; // @synthesize missed=_missed;
- (struct CGRect)_separatorFrame;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(nonatomic) BOOL showsSeparator;
- (void)setEventDateLabel:(id)arg1;
- (void)setRelevanceDateLabel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

