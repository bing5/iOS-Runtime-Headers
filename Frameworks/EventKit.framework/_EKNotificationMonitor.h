/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PCPersistentTimer, NSArray, NSObject<OS_dispatch_queue>, NSDate, EKEventStore, NSMutableArray;

@interface _EKNotificationMonitor : NSObject  {
    EKEventStore *_eventStore;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventStoreGetter;

    BOOL _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    int _lastCount;
    NSMutableArray *_notifications;
    BOOL _initialCheck;
    BOOL _shouldInstallPersistentTimer;
}

@property(readonly) unsigned int notificationCount;
@property(readonly) NSArray * notifications;


- (void)dealloc;
- (id)init;
- (void)stop;
- (void)start;
- (id)notifications;
- (unsigned int)notificationCount;
- (id)initForBulletinBoardWithEventStoreGetter:(id)arg1;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (unsigned int)_checkForNotifications:(id)arg1;
- (void)adjust;
- (void)_timerFired;
- (id)_eventStore;
- (void)killTimer;
- (void)_checkForUpdates;
- (void)_resetTimer;
- (id)initWithEventStore:(id)arg1;
- (void)_databaseChanged;

@end