/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {
    NSMutableDictionary *_personMap;
}

@property(retain) NSMutableDictionary * _personMap;

+ (id)sharedInstance;

- (void)_dumpAllPersons;
- (id)_personMap;
- (void)dealloc;
- (id)personForUniqueID:(id)arg1;
- (void)registerPerson:(id)arg1;
- (void)set_personMap:(id)arg1;
- (void)unregisterPerson:(id)arg1;

@end