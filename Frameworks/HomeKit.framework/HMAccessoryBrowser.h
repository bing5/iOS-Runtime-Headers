/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAccessoryBrowser : NSObject <HMMessageReceiver> {
    NSMutableArray *_accessories;
    BOOL _browsing;
    <HMAccessoryBrowserDelegate> *_delegate;
    unsigned int _generationCounter;
    HMMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMXpcClient *_xpcClient;
}

@property (nonatomic, retain) NSMutableArray *accessories;
@property (getter=isBrowsing, nonatomic) BOOL browsing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMAccessoryBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *discoveredAccessories;
@property (nonatomic) unsigned int generationCounter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) HMXpcClient *xpcClient;

- (void).cxx_destruct;
- (void)_fetchNewAccessories;
- (void)_fetchNewAccessoriesWithPrivacyCheck;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_start;
- (void)_updateNewAccessories:(id)arg1;
- (id)accessories;
- (void)dealloc;
- (id)delegate;
- (id)discoveredAccessories;
- (unsigned int)generationCounter;
- (id)init;
- (BOOL)isBrowsing;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)setAccessories:(id)arg1;
- (void)setBrowsing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (void)startSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;
- (id)uuid;
- (id)workQueue;
- (id)xpcClient;

@end
