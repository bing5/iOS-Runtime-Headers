/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLAccountingGroup : PLOperator <PLQLAccountingGroupProtocol> {
    NSString *_accountingGroupName;
    short _accountingGroupType;
    BOOL _closeAllAccountingEventsAtBoot;
    BOOL _eventCacheOn;
    NSArray *_eventCacheResults;
    struct _PLTimeIntervalRange { 
        double location; 
        double length; 
    } _eventCacheTimeRange;
}

@property (readonly, retain) NSString *accountingGroupName;
@property (readonly) short accountingGroupType;
@property BOOL closeAllAccountingEventsAtBoot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL eventCacheOn;
@property (retain) NSArray *eventCacheResults;
@property struct _PLTimeIntervalRange { double x1; double x2; } eventCacheTimeRange;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)accountingGroupFromAGName:(id)arg1;
+ (id)entryEventNoneDefinitionAccountingGroup;
+ (id)entryEventNoneDefinitions;
+ (id)getAccountingGroupEntryKey;

- (void).cxx_destruct;
- (id)accountingGroupName;
- (short)accountingGroupType;
- (void)addAccountingEvent:(id)arg1 withStartDate:(id)arg2 withStopDate:(id)arg3 withWeight:(double)arg4;
- (void)addEventToEvents:(id)arg1 withIdentifier:(id)arg2 withStartDate:(id)arg3 withStopDate:(id)arg4 withWeight:(double)arg5;
- (void)batchAddAccountingEvents:(id)arg1;
- (void)cacheEventsForTimeInterval:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (void)clearEventCache;
- (BOOL)closeAllAccountingEventsAtBoot;
- (void)closeAllOpenEventAtTime:(id)arg1 withForceClose:(BOOL)arg2;
- (void)closeLastOpenEventAtTime:(id)arg1;
- (BOOL)eventCacheOn;
- (id)eventCacheResults;
- (struct _PLTimeIntervalRange { double x1; double x2; })eventCacheTimeRange;
- (id)getEventsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)getLastOpenSnapshot;
- (id)getLastOpenSnapshotForIdentifier:(id)arg1 forEntryKey:(id)arg2;
- (id)getLastSnapshot;
- (void)initOperatorDependancies;
- (id)initWithName:(id)arg1 withAccountingGroupType:(short)arg2 withCloseAllAccountingEventsAtBoot:(BOOL)arg3;
- (void)logEventCacheStats:(id)arg1;
- (double)safeTimeForAccounting;
- (void)setCloseAllAccountingEventsAtBoot:(BOOL)arg1;
- (void)setEventCacheOn:(BOOL)arg1;
- (void)setEventCacheResults:(id)arg1;
- (void)setEventCacheTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (double)timeOfLastEndedSnapshot;
- (double)timeOfLastSnapshot;
- (BOOL)useCachedEventsForTimeInterval:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;

@end
