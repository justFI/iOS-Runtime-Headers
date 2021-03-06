/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKBehaviorOptions : NSObject {
    NSMutableDictionary * _cachedPrefs;
    NSObject<OS_dispatch_queue> * _cachedPrefsQueue;
    int  _ckToken;
    int  _mcToken;
}

@property (nonatomic, retain) NSMutableDictionary *cachedPrefs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (nonatomic) int ckToken;
@property (nonatomic) int mcToken;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (BOOL)CFNetworkLogging;
- (const char *)CKCtlPrompt;
- (BOOL)CKTimeLogging;
- (BOOL)CKTimeLoggingDetailed;
- (double)PCSCacheMinTime;
- (unsigned int)PCSCacheSize;
- (int)PCSRetryCount;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (BOOL)_buildIsOverridden;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_init;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (unsigned int)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned int)arg1;
- (unsigned int)assetEvictionGracePeriodWithDefaultValue:(unsigned int)arg1;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (id)buildVersion;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (int)cachedRecordExpiryTime;
- (int)ckToken;
- (int)clientThrottleQueueWidth;
- (BOOL)compressRequests;
- (id)configBaseURL;
- (id)customCloudDBBaseURL;
- (id)customCodeServiceBaseURL;
- (id)customDeviceServiceBaseURL;
- (id)customShareServiceBaseURL;
- (void)dealloc;
- (double)defaultRequestTimeout;
- (double)defaultResourceTimeout;
- (int)defaultRetryAfter;
- (BOOL)disableCaching;
- (BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1;
- (BOOL)enableMescal;
- (BOOL)evictRecentAssets;
- (int)flowControlBudget;
- (int)flowControlBudgetOverride;
- (double)flowControlRegeneration;
- (double)flowControlRegenerationOverride;
- (BOOL)highPriorityURLDelegates;
- (BOOL)isAppleInternalInstall;
- (BOOL)logTraffic;
- (BOOL)logTrafficToTextFile;
- (int)longlivedOperationMaxRetryCount;
- (int)longlivedOperationThrottlingRetryCount;
- (unsigned int)maxBatchSize;
- (unsigned int)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned int)arg1;
- (unsigned int)maxPackageUploadsPerBatchWithDefaultValue:(unsigned int)arg1;
- (double)maxRecentProxyAge;
- (double)maximumFetchWaitTime;
- (double)maximumThrottleSeconds;
- (double)maximumWaitAfterFetchRequest;
- (int)mcToken;
- (double)operationTimeout;
- (BOOL)optimisticPCS;
- (id)otherAccountsWithDefaultValue:(id)arg1;
- (double)packageGCGracePeriod;
- (double)packageGCPeriod;
- (id)primaryAccountEmailOverride;
- (id)primaryAccountPasswordOverride;
- (id)productName;
- (id)productVersion;
- (double)publicIdentitiesExpirationTimeout;
- (unsigned int)recentProxiesToSave;
- (unsigned int)recordCacheSizeLimit;
- (BOOL)sandboxCloudD;
- (unsigned int)savedErrorCount;
- (BOOL)sendDebugHeader;
- (int)serverIDExpiryTime;
- (void)setBuildVersion:(id)arg1;
- (void)setCFNetworkLogging:(BOOL)arg1;
- (void)setCKCtlPrompt:(char *)arg1;
- (void)setCKTimeLogging:(BOOL)arg1;
- (void)setCKTimeLoggingDetailed:(BOOL)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (void)setCkToken:(int)arg1;
- (void)setCompressRequests:(BOOL)arg1;
- (void)setConfigBaseURL:(id)arg1;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (void)setCustomCodeServiceBaseURL:(id)arg1;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (void)setDefaultRequestTimeout:(double)arg1;
- (void)setDefaultResourceTimeout:(double)arg1;
- (void)setDisableCaching:(BOOL)arg1;
- (void)setEnableMescal:(BOOL)arg1;
- (void)setLogTraffic:(BOOL)arg1;
- (void)setLogTrafficToTextFile:(BOOL)arg1;
- (void)setMcToken:(int)arg1;
- (void)setModTimeInAssetCacheEviction:(BOOL)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOptimisticPCS:(BOOL)arg1;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setSendDebugHeader:(BOOL)arg1;
- (void)setServerIDExpiryTime:(int)arg1;
- (void)setSetupBaseURL:(id)arg1;
- (void)setShouldProfileSQL:(BOOL)arg1;
- (void)setSqlBatchCount:(int)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setTestRunIDHeader:(id)arg1;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (void)setUseBackgroundSessions:(BOOL)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (void)setUsePreauth:(BOOL)arg1;
- (void)setUseStingray:(BOOL)arg1;
- (id)setupBaseURL;
- (double)shareAcceptorRetrievingDialogDelay;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (BOOL)shouldDecryptRecordsBeforeSave;
- (BOOL)shouldLogProtobufBinary;
- (BOOL)shouldProfileSQL;
- (int)sqlBatchCount;
- (double)sqlBatchTime;
- (id)testRunIDHeader;
- (int)trafficLogMaximumDataSize;
- (int)trafficLogQueueWidth;
- (BOOL)useBackgroundSessions;
- (BOOL)useEncryption;
- (BOOL)useModTimeInAssetCacheEviction;
- (BOOL)usePreauth;
- (BOOL)useStingray;
- (BOOL)validateMescalResponses;
- (id)vettedEmailsTestFormat;

@end
