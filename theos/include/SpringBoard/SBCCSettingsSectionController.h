/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBControlCenterSectionViewController.h"

#import "RadiosPreferencesDelegate.h"
#import "SBUIControlCenterButtonDelegate.h"

@class BBSettingsGateway, BluetoothManager, NSMutableDictionary, RadiosPreferences;

@interface SBCCSettingsSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate, RadiosPreferencesDelegate>
{
    NSMutableDictionary *_buttonsByID;
    char _settingSupported[6];
    RadiosPreferences *_airplaneModeController;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    BBSettingsGateway *_settingsGateway;
    BOOL _dndEnabled;
    int _dndStatus;
    BluetoothManager *_btManager;
}

+ (Class)viewClass;
- (void)_updateOrientationLockButtonState;
- (BOOL)_getOrientationLocked;
- (void)_setOrientationLocked:(BOOL)arg1;
- (void)_tearDownOrientationLock;
- (void)_initOrientationLock;
- (void)_updateMuteButtonState;
- (BOOL)_getMuted;
- (void)_setMuted:(BOOL)arg1;
- (void)_tearDownMute;
- (void)_initMute;
- (BOOL)_getDND;
- (void)_setDNDEnabled:(BOOL)arg1 updateServer:(BOOL)arg2;
- (void)_setDNDStatus:(int)arg1;
- (void)_tearDownDND;
- (void)_initDND;
- (void)_updateBluetoothState;
- (BOOL)_getBluetooth;
- (void)_setBluetoothEnabled:(BOOL)arg1;
- (void)_tearDownBluetooth;
- (void)_initBluetooth;
- (void)_updateWifiButtonState;
- (BOOL)_getWifi;
- (void)_setWifiEnabled:(BOOL)arg1;
- (void)_tearDownWifi;
- (void)_initWifi;
- (void)airplaneModeChanged;
- (BOOL)_getAirplaneMode;
- (void)_setAirplaneModeEnabled:(BOOL)arg1;
- (void)_tearDownAirplaneMode;
- (void)_initAirplaneMode;
- (void)buttonTapped:(id)arg1;
- (id)_buttonForSetting:(int)arg1;
- (void)_addButtonForSetting:(int)arg1;
- (id)_identifierForSetting:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)noteSettingsDidUpdate:(id)arg1;
- (id)view;
- (struct CGSize)contentSizeForOrientation:(int)arg1;
- (id)sectionIdentifier;
- (void)dealloc;
- (id)init;

@end

