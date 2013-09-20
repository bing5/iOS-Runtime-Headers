/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDictionary, NSString;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver> {
    NSString *_countryCode;
    BOOL _currentCountrySupportsDirections;
    BOOL _currentCountrySupportsTraffic;
    BOOL _isObservingReachability;
    BOOL _isUpdating;
    NSString *_oldCountryCode;
    NSDictionary *_oldProvidersInfo;
}

@property(copy) NSString * countryCode;
@property(readonly) BOOL currentCountrySupportsDirections;
@property(readonly) BOOL currentCountrySupportsNavigation;
@property(readonly) BOOL currentCountrySupportsTraffic;

+ (id)sharedConfiguration;

- (void)_checkCountryCode;
- (void)_checkCountryProviders;
- (void)_reachabilityChanged:(id)arg1;
- (void)_registerNetworkDefaults;
- (void)_updatedSupportedFeatures;
- (void)_useCountryCodeProvider:(id)arg1;
- (id)countryCode;
- (id)countryDefaultForKey:(id)arg1 sourcePtr:(int*)arg2;
- (id)countryDefaultForKey:(id)arg1;
- (BOOL)currentCountrySupportsDirections;
- (BOOL)currentCountrySupportsNavigation;
- (BOOL)currentCountrySupportsTraffic;
- (void)dealloc;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int*)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)updateProvidersForCurrentCountry;

@end