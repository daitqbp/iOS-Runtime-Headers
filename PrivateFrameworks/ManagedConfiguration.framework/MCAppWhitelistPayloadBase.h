/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAppWhitelistPayloadBase : MCPayload {
    BOOL _allowAccessWithoutPasscode;
    BOOL _forceAllowSupervisorAccess;
    NSArray *_whitelistedAppsAndOptions;
}

@property (nonatomic) BOOL allowAccessWithoutPasscode;
@property (nonatomic) BOOL forceAllowSupervisorAccess;
@property (nonatomic, retain) NSArray *whitelistedAppsAndOptions;

+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;

- (void).cxx_destruct;
- (BOOL)allowAccessWithoutPasscode;
- (id)description;
- (BOOL)forceAllowSupervisorAccess;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (void)setAllowAccessWithoutPasscode:(BOOL)arg1;
- (void)setForceAllowSupervisorAccess:(BOOL)arg1;
- (void)setWhitelistedAppsAndOptions:(id)arg1;
- (id)stubDictionary;
- (id)whitelistedAppsAndOptions;

@end
