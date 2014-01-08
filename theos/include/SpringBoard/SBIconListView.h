/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>
#import "SBIconListLayoutDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, SBIcon, SBIconListModel, SBIconViewMap;

@interface SBIconListView : UIView
{
    SBIconListModel *_model;
    SBIconViewMap *_viewMap;
    UIInterfaceOrientation _orientation;
    float _statusBarHeight;
    SBIcon *_bouncedIcon;
    NSMutableArray *_removedIcons;
    NSArray *_rotationContainers;
    NSUInteger _needsLayout:1;
    NSUInteger _rotating:1;
    UIView *_fadeView;
    BOOL _purged;
    NSMutableSet *_notShownIconViews;
    BOOL _isEditing;
    id<SBIconListLayoutDelegate> _layoutDelegate;
    CGRect _wallpaperRelativeFrame;
}

+ (NSUInteger)maxVisibleIcons;
+ (NSUInteger)maxIcons;
+ (NSUInteger)iconColumnsForInterfaceOrientation:(NSInteger)arg1;
+ (NSUInteger)maxVisibleIconRowsInterfaceOrientation:(NSInteger)arg1;
+ (NSUInteger)iconRowsForInterfaceOrientation:(NSInteger)arg1;
+ (NSInteger)rotationAnchor;
@property(nonatomic, assign) id <SBIconListLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) CGRect wallpaperRelativeFrame; // @synthesize wallpaperRelativeFrame=_wallpaperRelativeFrame;
@property(nonatomic) CGFloat statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) UIInterfaceOrientation orientation; // @synthesize orientation=_orientation;
@property(nonatomic) BOOL purged; // @synthesize purged=_purged;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
- (void)_sendLayoutDelegateLayoutInvalidated;
- (void)_sendLayoutDelegateWouldHaveMovedIcon:(id)arg1;
- (void)cleanupAfterRotation;
- (void)performRotationWithDuration:(double)arg1;
- (void)prepareToRotateToInterfaceOrientation:(NSInteger)arg1;
- (NSUInteger)rowAtPoint:(CGPoint)arg1;
- (NSUInteger)columnAtPoint:(CGPoint)arg1;
- (CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1;
- (float)verticalIconPadding;
- (float)horizontalIconPadding;
- (float)horizontalBumpForColumn:(NSUInteger)arg1;
- (float)sideIconInset;
- (float)bottomIconInset;
- (float)topIconInset;
- (id)bouncedIcon;
- (void)setBouncedIcon:(id)arg1;
- (BOOL)isDock;
- (void)enumerateIconViewsUsingBlock:(id)arg1;
- (void)enumerateIconsUsingBlock:(id)arg1;
- (void)_updateEditingStateForIcons:(id)arg1 animated:(BOOL)arg2;
- (void)updateEditingStateAnimated:(BOOL)arg1;
- (void)showIconImagesFromColumn:(NSInteger)arg1 toColumn:(NSInteger)arg2 totalColumns:(NSInteger)arg3 allowAnimations:(BOOL)arg4;
- (void)showAllIcons;
- (id)iconAtPoint:(CGPoint)arg1 index:(NSUInteger *)arg2 proposedOrder:(int *)arg3 grabbedIcon:(id)arg4;
- (id)iconAtPoint:(CGPoint)arg1 index:(NSUInteger *)arg2;
- (void)layoutIconsIfNeeded:(double)arg1 domino:(BOOL)arg2;
- (void)layoutIconsNow;
- (void)setIconsNeedLayout;
- (void)setFrame:(CGRect)arg1;
- (NSUInteger)indexOfIcon:(id)arg1;
- (struct SBIconCoordinate)coordinateForIconAtIndex:(NSUInteger)arg1;
- (struct SBIconCoordinate)coordinateForIcon:(id)arg1;
- (id)viewForIcon:(id)arg1;
- (CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)arg1;
- (CGPoint)centerForIcon:(id)arg1;
- (CGPoint)originForIcon:(id)arg1;
- (CGPoint)originForIconAtIndex:(NSUInteger)arg1;
- (CGSize)defaultIconSize;
- (void)removeAllIconAnimations;
- (void)setAlphaForAllIcons:(float)arg1;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(NSUInteger)arg1;
- (id)removedIcons;
- (id)insertIcon:(SBIcon *)icon atIndex:(NSUInteger)arg2 moveNow:(BOOL)arg3;
- (id)insertIcon:(SBIcon *)icon atIndex:(NSUInteger)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (id)placeIcon:(SBIcon *)icon atIndex:(NSUInteger)arg2 moveNow:(BOOL)arg3 pop:(BOOL)arg4;
- (void)_layoutIcon:(id)arg1 atIndex:(NSUInteger)arg2 createViewNow:(BOOL)arg3 pop:(BOOL)arg4;
- (void)_popIconView:(id)arg1;
- (NSUInteger)firstFreeSlotOrLastSlotIndexForType:(NSInteger)arg1;
- (NSUInteger)firstFreeSlotOrLastSlotIndex;
- (NSUInteger)firstFreeSlotIndexForType:(NSInteger)arg1;
- (NSUInteger)firstFreeSlotIndex;
- (BOOL)containsIcon:(id)arg1;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (id)visibleIcons;
- (id)icons;
- (BOOL)compactIcons:(BOOL)arg1;
- (NSUInteger)rowForIcon:(id)arg1;
- (id)description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(NSUInteger)arg1 forOrientation:(NSInteger)arg2;
- (NSUInteger)indexForCoordinate:(struct SBIconCoordinate)arg1 forOrientation:(NSInteger)arg2;
- (NSInteger)iconLocation;
- (NSUInteger)iconRowsForSpacingCalculation;
- (NSUInteger)iconsInRowForSpacingCalculation;
- (NSUInteger)iconColumnsForCurrentOrientation;
- (NSUInteger)iconRowsForCurrentOrientation;
- (CGPoint)_wallpaperRelativeIconCenterForIconView:(id)arg1;
- (CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(CGPoint)arg1;
- (Class)baseIconViewClass;
- (id)viewMap;
- (id)model;
- (void)setModel:(SBIconListModel *)model;
- (void)dealloc;
- (id)initWithModel:(SBIconListModel *)model orientation:(UIInterfaceOrientation)orientation viewMap:(SBIconViewMap *)viewMap;
- (id)init;
- (Class)modelClass;

@end

