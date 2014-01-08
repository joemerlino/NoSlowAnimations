/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import "ASAccount.h"
#import "DAAccount.h"

@class ASAutodiscoverTask, ASFolderHierarchy, NSMutableSet, NSLock, ASTaskManager, ASProtocol, NSMutableArray;

@interface ASAccount : DAAccount {
	ASFolderHierarchy* _folderHierarchy;
	ASTaskManager* _taskManager;
	ASProtocol* _protocol;
	CFDictionaryRef _consumers;
	NSMutableSet* _searchTaskSet;
	NSMutableArray* _autodiscoveryServersToTry;
	NSLock* _autodiscoverTaskLock;
	ASAutodiscoverTask* _autodiscoverTask;
	BOOL _useHTTPForTesting;
	BOOL _isValidating;
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;
@property(assign) int mailNumberOfPastDaysToSync;
// inherited: +(Class)accountClass;
+(void)cleanUpFilesForAccountWithId:(id)anId;
// inherited: +(id)defaultProperties;
-(id)_newPolicyManager;
// inherited: -(id)initWithProperties:(id)properties;
// inherited: -(void)dealloc;
-(id)policyManager;
// inherited: -(void)saveAccountSettings;
// inherited: -(void)cleanupAccountFiles;
-(id)taskManager;
// inherited: -(void)checkValidityWithConsumer:(id)consumer;
-(void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;
// inherited: -(BOOL)supportsAccountType:(int)type;
// inherited: -(id)stateString;
-(CFStringRef)passwordChangedNotificationName;
-(BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded accountManager:(id)manager;
// inherited: -(BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)accountManager;
// inherited: -(void)setEnabled:(BOOL)enabled forAccountType:(int)accountType changeType:(int)type;
// inherited: -(void)resetAccountID;
// inherited: -(void)tearDown;
-(id)_folderHierarchy;
-(id)visibleFolders;
-(id)_visibleASFolders;
-(int)sniffableTypeForFolder:(id)folder;
-(id)defaultContactsFolder;
-(id)contactsFolders;
-(id)defaultEventsFolder;
-(id)eventsFolders;
-(id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)foldersTag;
-(void)blowAwayFolderCache;
-(id)asFolderWithId:(id)anId;
-(id)folderWithId:(id)anId;
-(id)asFolderHierarchyTaskManager:(id)manager;
-(void)setConsumer:(id)consumer forTask:(id)task;
-(id)consumerForTask:(id)task;
-(void)removeConsumerForTask:(id)task;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForType:(int)type;
// inherited: -(id)defaultContainerIdentifierForDataclass:(int)dataclass;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;
-(BOOL)shouldFixHierarchyDeviceId;
-(void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response8 removedResponse:(id)response9 fetchedResponse:(id)response10;
-(void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;
-(void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;
-(BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char*)data dataLength:(int)length;
-(BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;
-(void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;
-(void)fetchAttachmentTask:(id)task completedWithStatus:(int)status error:(id)error;
-(void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;
-(BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char*)data dataLength:(int)length;
-(BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;
-(void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;
-(int)sendMessageWithRFC822Data:(id)rfc822Data consumer:(id)consumer context:(void*)context;
-(void)cancelTaskWithID:(int)anId;
-(BOOL)clearOutInviteWithDeliveryFolderId:(id)deliveryFolderId deliveryServerId:(id)anId wasSoftDelete:(BOOL)aDelete withDBHelper:(id)dbhelper considerInvitedToInvitations:(BOOL)invitations;
-(void*)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;
-(void)cancelSearchQuery:(id)query;
-(void)cancelAllSearchQueries;
-(void)performSearchQuery:(id)query consumer:(id)consumer;
-(BOOL)searchQueriesRunning;
-(void)searchTask:(id)task returnedResults:(id)results;
-(void)searchTask:(id)task returnedTotalCount:(id)count;
-(void)searchTask:(id)task finishedWithError:(id)error;
-(BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;
-(void)setUseHTTPForTesting:(BOOL)testing;
// inherited: -(void)cancelAutodiscovery;
-(void)_startAutodiscoverTaskWithConsumer:(id)consumer;
// inherited: -(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;
-(void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;
// inherited: -(void)setShouldFailAllTasks:(BOOL)failAllTasks;
// inherited: -(id)username;
// inherited: -(void)setUsername:(id)username;
// inherited: -(id)usernameWithoutDomain;
// inherited: -(id)host;
// inherited: -(void)setHost:(id)host;
// inherited: -(int)port;
// inherited: -(void)setPort:(int)port;
// inherited: -(BOOL)useSSL;
// inherited: -(void)setUseSSL:(BOOL)ssl;
// inherited: -(id)emailAddress;
// inherited: -(void)setEmailAddress:(id)address;
// inherited: -(id)emailAddresses;
// inherited: -(void)setEmailAddresses:(id)addresses;
// inherited: -(id)urlForKeychain;
-(id)lastKnownProtocolVersion;
-(void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;
-(BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
-(id)savedFolderPathsThatClientsCareAbout;
-(void)setSavedFolderPathsThatClientsCareAbout:(id)about;
-(BOOL)_shouldSaveLastKnownProtocolVersion;
-(void)setLastKnownProtocolVersion:(id)version;
-(void)upgradeWithProtocolVersion:(id)protocolVersion;
-(void)setProtocolVersion:(id)version;
-(id)protocol;
-(int)supportsMailboxSearch;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(void)accountDidUpdateProtocolVersion;
@end

@interface ASAccount (DaemonOptions)
// inherited: +(Class)clientClass;
@end

