/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTWatchKitAppList : NSObject {
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}

- (void).cxx_destruct;
- (void)_fetchWatchKitInfo;
- (void)dealloc;
- (void)fetchWatchKitInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;

@end