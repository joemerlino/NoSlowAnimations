/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBStarkBannerItem.h"

@class NSString, SBAlertItem, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem
{
    SBAlertItem *_alertItem;
    NSString *_title;
    NSString *_message;
    SBUISound *_sound;
}

- (id)subActionWithIndex:(SEL)arg1;
- (id)subActionLabels;
- (id)sound;
- (id)action;
- (BOOL)isSticky;
- (unsigned int)priority;
- (BOOL)matchesContext:(id)arg1;
- (void)reloadDisplayProperties;
- (int)actionType;
- (id)categoryImage;
- (id)category;
- (id)title;
- (void)dealloc;
- (id)initWithAlertItem:(id)arg1;

@end

