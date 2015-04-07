/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataExporter, PLPhotoEditDataImporter> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (id)_knownFormatVersions;
+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (int)_supportLevelForSettings:(id)arg1 knownKeys:(id)arg2;
+ (id)_supportedAdjustments;
+ (BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 exifOrientation:(int)arg4;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (id)formatIdentifier;
+ (id)formatVersion;
+ (BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(int)arg5;

@end