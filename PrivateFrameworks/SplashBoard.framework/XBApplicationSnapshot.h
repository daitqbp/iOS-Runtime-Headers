/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshot : NSObject <BSDescriptionProviding, NSCoding> {
    XBApplicationIdentity *_appIdentity;
    int _backgroundStyle;
    UIImage *_cachedImage;
    int _classicMode;
    int _compatibilityMode;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentFrame;
    int _contentType;
    NSDate *_creationDate;
    NSDate *_expirationDate;
    NSDictionary *_extendedData;
    int _fileLocation;
    NSString *_filename;
    BOOL _fullScreen;
    XBApplicationSnapshotGenerationContext *_generationContext;
    NSString *_groupID;
    NSString *_identifier;
    unsigned int _imageAccessCount;
    BOOL _imageOpaque;
    int _imageOrientation;
    BSTimer *_imagePurgeTimer;
    float _imageScale;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _imageTransform;
    int _interfaceOrientation;
    BOOL _invalidated;
    NSDate *_lastUsedDate;
    NSString *_launchInterfaceIdentifier;
    NSString *_name;
    NSString *_path;
    struct CGSize { 
        float width; 
        float height; 
    } _referenceSize;
    NSString *_relativePath;
    NSString *_requiredOSVersion;
    NSString *_scheme;
    XBStatusBarSettings *_statusBarSettings;
    NSString *_variantID;
    NSMutableDictionary *_variantsByID;
}

@property (nonatomic, readonly) unsigned int _contentTypeMask;
@property (nonatomic, readonly) unsigned int _interfaceOrientationMask;
@property (nonatomic, readonly, copy) NSString *_sortableLaunchInterfaceIdentifier;
@property (nonatomic, readonly, copy) NSString *_sortableName;
@property (nonatomic, readonly, copy) NSString *_sortableRequiredOSVersion;
@property (nonatomic, readonly, copy) NSString *_sortableScheme;
@property (nonatomic, readonly, retain) XBStatusBarSettings *_sortableStatusBarSettings;
@property (copy) XBApplicationIdentity *appIdentity;
@property (nonatomic) int backgroundStyle;
@property (nonatomic) int classicMode;
@property (nonatomic) int compatibilityMode;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentFrame;
@property (nonatomic) int contentType;
@property (nonatomic, readonly, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (nonatomic, copy) NSDictionary *extendedData;
@property (nonatomic, readonly) BOOL fileExists;
@property (nonatomic) int fileLocation;
@property (nonatomic, readonly, copy) NSString *filename;
@property (getter=isFullScreen, nonatomic) BOOL fullScreen;
@property (nonatomic, readonly, retain) XBApplicationSnapshotGenerationContext *generationContext;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, readonly) BOOL hasFullSizedContent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isImageOpaque, nonatomic) BOOL imageOpaque;
@property (nonatomic) int imageOrientation;
@property (nonatomic) float imageScale;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } imageTransform;
@property (nonatomic) int interfaceOrientation;
@property (nonatomic, retain) NSDate *lastUsedDate;
@property (nonatomic, copy) NSString *launchInterfaceIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic) struct CGSize { float x1; float x2; } referenceSize;
@property (nonatomic, copy) NSString *requiredOSVersion;
@property (nonatomic, copy) NSString *scheme;
@property (nonatomic, copy) XBStatusBarSettings *statusBarSettings;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *variantID;

+ (id)normalizeSnapshotName:(id)arg1;

- (void)_cacheImage:(id)arg1;
- (id)_cachedImage;
- (void)_clearImagePurgeTimer;
- (void)_commonInit;
- (id)_configureDefaultPathWithinGroup;
- (void)_configureWithPath:(id)arg1;
- (unsigned int)_contentTypeMask;
- (id)_createVariantWithIdentifier:(id)arg1;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 includeVariants:(BOOL)arg2;
- (id)_determineRelativePathForPath:(id)arg1 location:(int*)arg2;
- (BOOL)_hasGenerationContext;
- (id)_initWithGroupID:(id)arg1 appIdentity:(id)arg2;
- (id)_initWithGroupID:(id)arg1 appIdentity:(id)arg2 generationContext:(id)arg3;
- (unsigned int)_interfaceOrientationMask;
- (void)_invalidate;
- (BOOL)_isInvalidated;
- (BOOL)_path:(id)arg1 isRelativeToPath:(id)arg2 outRelativePath:(id*)arg3;
- (void)_purgeCachedImageIfAppropriate:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_referenceBounds;
- (BOOL)_shouldDeleteFileOnPurge;
- (id)_sortableLaunchInterfaceIdentifier;
- (id)_sortableName;
- (id)_sortableRequiredOSVersion;
- (id)_sortableScheme;
- (id)_sortableStatusBarSettings;
- (BOOL)_validateWithAppIdentity:(id)arg1;
- (id)appIdentity;
- (int)backgroundStyle;
- (void)beginImageAccess;
- (id)cachedImageForInterfaceOrientation:(int)arg1;
- (int)classicMode;
- (int)compatibilityMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (int)contentType;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionWithoutVariants;
- (void)encodeWithCoder:(id)arg1;
- (void)endImageAccess;
- (id)expirationDate;
- (id)extendedData;
- (BOOL)fileExists;
- (int)fileLocation;
- (id)filename;
- (id)generationContext;
- (id)groupID;
- (BOOL)hasCachedImage;
- (BOOL)hasFullSizedContent;
- (unsigned int)hash;
- (id)identifier;
- (id)imageForInterfaceOrientation:(int)arg1;
- (int)imageOrientation;
- (float)imageScale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })imageTransform;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)interfaceOrientation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExpired;
- (BOOL)isFullScreen;
- (BOOL)isImageOpaque;
- (BOOL)isValid;
- (id)lastUsedDate;
- (id)launchInterfaceIdentifier;
- (void)loadImage;
- (id)name;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)path;
- (void)purgeCachedImageAfterInterval:(double)arg1;
- (void)purgeImage;
- (struct CGSize { float x1; float x2; })referenceSize;
- (id)requiredOSVersion;
- (id)scheme;
- (void)setAppIdentity:(id)arg1;
- (void)setBackgroundStyle:(int)arg1;
- (void)setClassicMode:(int)arg1;
- (void)setCompatibilityMode:(int)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentType:(int)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExtendedData:(id)arg1;
- (void)setFileLocation:(int)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setImageOpaque:(BOOL)arg1;
- (void)setImageOrientation:(int)arg1;
- (void)setImageScale:(float)arg1;
- (void)setImageTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setLaunchInterfaceIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRequiredOSVersion:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setStatusBarSettings:(id)arg1;
- (void)setVariantID:(id)arg1;
- (id)statusBarSettings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)variantID;
- (id)variantWithIdentifier:(id)arg1;
- (id)variants;

@end
