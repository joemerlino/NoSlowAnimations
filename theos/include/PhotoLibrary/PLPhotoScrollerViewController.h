/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIViewController.h>

@class NSArray, UINavigationItem;
@protocol PLPhotoScrollerViewControllerDelegate;

@interface PLPhotoScrollerViewController : UIViewController {
	id _delegate;
	id _albumsController;
	unsigned _itemIndex;
	UINavigationItem* _navItem;
	NSArray* _items;
	id _uiController;
	int _previousInterfaceOrientation;
	unsigned _canShowCopyCallout : 1;
	unsigned _didDisplay : 1;
	unsigned _modalSheetIsPresent : 1;
	unsigned _dontChangeStatusBar : 1;
}
@property(assign, nonatomic) id<PLPhotoScrollerViewControllerDelegate> delegate;
@property(assign, nonatomic) BOOL canShowCopyCallout;
@property(assign, nonatomic) unsigned visibleItemIndex;
-(id)initWithItems:(id)items;
-(id)_initWithAlbum:(id)album lockStatusBar:(BOOL)bar currentImageIndex:(int)index;
// inherited: -(void)dealloc;
-(id)navigationItem;
// inherited: -(void)loadView;
-(void)setDontChangeStatusBar:(BOOL)bar;
-(BOOL)dontChangeStatusBar;
// inherited: -(void)viewWillAppear:(BOOL)view;
// inherited: -(void)viewDidAppear:(BOOL)view;
// inherited: -(void)viewWillDisappear:(BOOL)view;
// inherited: -(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
// inherited: -(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
// inherited: -(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
// inherited: -(id)rotatingFooterView;
-(void)albumsController:(id)controller didMoveToPhotoAtIndex:(unsigned)index;
-(BOOL)albumsControllerShouldShowActionItem:(id)albumsController;
-(BOOL)albumsControllerShowActionSheet:(id)sheet inView:(id)view;
-(BOOL)albumsControllerShouldShowVideoOverlay:(id)albumsController;
-(id)itemAtIndex:(unsigned)index;
-(void)_updateNavigationItemTitle;
-(BOOL)_visibleItemAllowsRotation;
-(void)_forceRotationToPortaitIfNecessary;
@end

