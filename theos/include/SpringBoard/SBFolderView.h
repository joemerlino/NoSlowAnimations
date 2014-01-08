/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

#import "SBIconListPageControlDelegate.h"
#import "SBIconScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, SBFolder, SBFolderTitleTextField, SBIconListPageControl, SBIconListView, SBIconScrollView, SBIconViewMap, _UILegibilitySettings;

@interface SBFolderView : UIView <SBIconScrollViewDelegate, SBIconListPageControlDelegate, UITextFieldDelegate>
{
    NSMutableArray *_iconListViews;
    SBIconListView *_rotatingIconList;
    int _minVisibleListViewIndex;
    int _maxVisibleListViewIndex;
    int _minAnimatingListViewIndex;
    int _maxAnimatingListViewIndex;
    int _disableUpdatingCurrentIconListCount;
    int _firstDisplayedColumnOnCurrentList;
    BOOL _animatedScrolling;
    BOOL _scalingViewIsBorrowed;
    SBIconViewMap *_viewMap;
    NSMutableArray *_scrollFrames;
    unsigned int _scrollFrameCount;
    BOOL _isN90;
    SBIconListPageControl *_pageControl;
    SBIconScrollView *_scrollView;
    SBFolderTitleTextField *_titleTextField;
    UIView *_scalingView;
    BOOL _isEditing;
    BOOL _isScrolling;
    int _currentPageIndex;
    float _statusBarHeight;
    id <SBFolderViewDelegate> _delegate;
    SBFolder *_folder;
    int _orientation;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) id <SBFolderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(readonly, nonatomic) int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
- (void)willMoveToWindow:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)_setFolderName:(id)arg1;
- (void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2;
- (void)iconScrollView:(id)arg1 willSetContentOffset:(inout struct CGPoint *)arg2;
- (void)iconScrollViewDidCancelTouchTracking:(id)arg1;
- (void)iconScrollViewWillCancelTouchTracking:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)cleanupAfterClosing;
- (void)prepareToOpen;
- (BOOL)_scrollViewThinksItsScrolling;
- (void)_purgeListViews;
- (void)noteUserIsInteractingWithIcons;
- (void)noteUserHasGrabbedIcon:(BOOL)arg1;
- (void)updateIconListIndexAndVisibility:(BOOL)arg1;
- (int)lowestVisibleIconListIndexAndColumn:(int *)arg1 columnsOnScreen:(int *)arg2 totalLists:(unsigned int)arg3 columnsPerList:(unsigned int)arg4;
- (void)updateIconListIndexAndVisibility;
- (void)_updateEditingStateAnimated:(BOOL)arg1;
- (void)layoutIconLists:(double)arg1 domino:(BOOL)arg2 forceRelayout:(BOOL)arg3;
- (void)updateIconListViews;
- (void)resetIconListViews;
- (void)tearDownListViews;
- (id)currentIconListView;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)iconListViewAtIndex:(unsigned int)arg1;
- (int)_pageIndexForOffset:(float)arg1;
- (void)_updateIconListFrames;
- (void)_updateIconListViews;
- (void)_resetIconListViews;
- (void)_addIconListViewsForModels:(id)arg1;
- (id)_createIconListViewForList:(id)arg1;
- (id)_iconListViewForList:(id)arg1;
- (id)_iconListViewAtIndex:(unsigned int)arg1;
- (id)_currentIconListView;
- (void)_removeIconListView:(id)arg1;
- (void)_addIconListView:(id)arg1;
- (void)_enableUserInteractionAfterSignificantAnimation;
- (void)_disableUserInteractionBeforeSignificantAnimation;
- (float)_titleFontSize;
- (BOOL)_showsTitle;
- (void)_popDisableUpdateCurrentIconListCount;
- (void)_pushDisableUpdateCurrentIconListCount;
- (BOOL)_shouldDisableUpdatingCurrentIconList;
- (BOOL)_isValidPageIndex:(int)arg1;
- (float)_scrollOffsetForPageAtIndex:(int)arg1;
- (float)_scrollOffsetForFirstListView;
- (float)_pageWidth;
- (BOOL)_hasMinusPages;
- (unsigned int)_minusPageCount;
- (float)_offsetToCenterPageControlInSpaceForPageControl;
- (struct CGRect)_frameForScalingView;
- (void)_layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (void)fadeContentForMinificationFraction:(float)arg1;
- (void)fadeContentForMagnificationFraction:(float)arg1;
- (void)didAnimate;
- (void)willAnimate;
@property(readonly, nonatomic) SBIconViewMap *viewMap;
- (BOOL)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (void)returnScalingView;
- (id)borrowScalingView;
- (struct CGRect)scalingViewFrame;
- (BOOL)setCurrentPageIndex:(int)arg1 animated:(BOOL)arg2;
- (BOOL)doesPageContainIconListView:(int)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *iconListViews; // @synthesize iconListViews=_iconListViews;
- (void)_setCurrentPageIndex:(int)arg1 deferringPageControlUpdate:(BOOL)arg2;
- (void)_setCurrentPageIndex:(int)arg1;
- (void)_setAnimatedScrolling:(BOOL)arg1;
@property(nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_isScrolling;
- (id)scrollView;
- (void)dealloc;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3;
- (id)initWithFolder:(id)arg1 orientation:(int)arg2;

@end

