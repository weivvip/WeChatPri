//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMResBatchDownloadMgrDelegate-Protocol.h"
#import "MMResBatchSaveHandlerDelegate-Protocol.h"
#import "MMResDownloadMgrDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class MMResBatchDownloadMgr, MMResourceDownloadMgr, MMWCResCleanupMgr, MMWCWebviewCacheCleaner, MMWebCacheDataManager, MMWebCacheUpdater, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, WebviewSessionCache;

@interface MMWCResourceMgr : MMService <MMResBatchSaveHandlerDelegate, MMResDownloadMgrDelegate, MMResBatchDownloadMgrDelegate, MMService>
{
    NSRecursiveLock *_lock;
    NSMutableDictionary *_distFileDataForPath;
    WebviewSessionCache *_webviewSession;
    MMWCWebviewCacheCleaner *_webviewCacheCleaner;
    NSMutableArray *_arrWebcacheDomain;
    MMResourceDownloadMgr *_resDownloadMgr;
    MMResBatchDownloadMgr *_batchDownloadMgr;
    MMWebCacheDataManager *_dataManager;
    MMWebCacheUpdater *_pushUpdater;
    CDUnknownBlockType _endEventBlock;
    MMWCResCleanupMgr *_cleanupManager;
}

@property(retain, nonatomic) MMWCResCleanupMgr *cleanupManager; // @synthesize cleanupManager=_cleanupManager;
@property(copy, nonatomic) CDUnknownBlockType endEventBlock; // @synthesize endEventBlock=_endEventBlock;
@property(retain, nonatomic) MMWebCacheUpdater *pushUpdater; // @synthesize pushUpdater=_pushUpdater;
@property(retain, nonatomic) MMWebCacheDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (_Bool)abtestBranPrePushEnable;
- (_Bool)abtestWebCacheEnable;
- (void)forceToDeleteAll;
- (void)addBatchDownloadTask:(id)arg1;
- (void)addSingleDownloadTask:(id)arg1;
- (id)getResInfoCacheForMainUrlInSession:(id)arg1 resUrl:(id)arg2;
- (void)addNoneResInfoInSessionForMainUrl:(id)arg1 resUrl:(id)arg2;
- (void)addResInfoInSession:(id)arg1 forMainUrl:(id)arg2 resUrl:(id)arg3;
- (id)getAsyncConfigResListCacheInSession:(id)arg1;
- (void)addConfigResListInSession:(id)arg1 configId:(id)arg2;
- (void)addPackageIdInSession:(id)arg1 resInfo:(id)arg2;
- (void)forceUpdateCacheDataIfNeed;
- (void)clearTmpResCacheWhenChangePage;
- (void)handleWebViewGoBack;
- (void)onBatchSaveHandler:(id)arg1 finish:(_Bool)arg2 failedUrlInfoList:(id)arg3 errMsgList:(id)arg4 handlerId:(unsigned int)arg5 configInfo:(id)arg6;
- (void)saveSyncBatchDownloadTask:(id)arg1;
- (void)onBatchDownloadFinish:(_Bool)arg1 errMsgList:(id)arg2 batchTask:(id)arg3;
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (void)deleteWebCacheForAppId:(id)arg1 domain:(id)arg2 packageId:(id)arg3;
- (void)disableWebCacheForAppId:(id)arg1 domain:(id)arg2 packageId:(id)arg3;
- (_Bool)hasWebCacheFeatureForDomain:(id)arg1;
- (void)saveWebcacheDomainList;
- (void)removeDomainFromDomainList:(id)arg1;
- (void)addDomainToDomainList:(id)arg1;
- (void)loadWebcacheDomainList;
- (void)saveNewSyncResData:(id)arg1 mainDocumentUrl:(id)arg2 resUrl:(id)arg3 appId:(id)arg4;
- (void)processSyncResCacheRequest:(id)arg1 appId:(id)arg2 page:(id)arg3 resUrlList:(id)arg4;
- (void)updateConfigInfoForPublicResWithPackageId:(id)arg1 downloadTask:(id)arg2;
- (void)parseUpdatePublicResCacheConfigJson:(id)arg1 data:(id)arg2;
- (void)processUpdatePublicResCacheRequestConfigUrl:(id)arg1;
- (void)parseAsyncCacheConfigJson:(id)arg1 data:(id)arg2;
- (void)downloadAsyncCacheConfigUrl:(id)arg1 appId:(id)arg2 mainUrl:(id)arg3;
- (void)processAsyncResCacheRequest:(id)arg1 appId:(id)arg2 configUrl:(id)arg3;
- (void)updatePublicResData:(id)arg1 task:(id)arg2;
- (void)savePublicResDataIfNeed:(id)arg1 mainDocumentUrl:(id)arg2 resUrl:(id)arg3;
- (_Bool)savePageResourceIfNeed:(id)arg1 resUrl:(id)arg2 resData:(id)arg3;
- (_Bool)updateAccessTimeForResInfo:(id)arg1;
- (void)updateSyncMainPage:(id)arg1;
- (id)getResDataForResInfo:(id)arg1;
- (id)getSyncResInfoForResourceUrl:(id)arg1 mainUrlDomain:(id)arg2;
- (id)getAsyncResInfoForResourceUrl:(id)arg1 mainUrlDomain:(id)arg2 packageId:(id)arg3 version:(id)arg4;
- (id)getPageResInfoForPageUrl:(id)arg1;
- (id)getPublicResInfoForPublicResUrl:(id)arg1;
- (id)getAsyncConfigForConfigId:(id)arg1;
- (id)getAsyncConfigResListFromDBForPageResInfo:(id)arg1;
- (id)getVersionOfAsyncResUrl:(id)arg1 configResDict:(id)arg2;
- (_Bool)isPageForResUrl:(id)arg1 mainUrl:(id)arg2;
- (_Bool)isPublicResUrl:(id)arg1;
- (void)callbackJSEvent:(id)arg1;
- (_Bool)isSameCrc32:(unsigned int)arg1 ofConfigId:(id)arg2;
- (id)parseJSONData:(id)arg1;
- (void)makeUrlInfoFrom:(id)arg1 to:(id)arg2 withPrefix:(id)arg3 isPage:(_Bool)arg4;
- (id)getUrlPrefixWithMainUrl:(id)arg1 base:(id)arg2;
- (id)dictFromConfigResString:(id)arg1;
- (void)onMemoryWarning;
- (id)fileDataWithPath:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

