/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPArtworkDataSource>, ML3MusicLibrary, MPMediaEntityCache, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
    <MPArtworkDataSource> *_artworkDataSource;
    unsigned int _backgroundTask;
    unsigned int _backgroundTaskCount;
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    MPMediaEntityCache *_entityCache;
    BOOL _hasScheduledEventPosting;
    ML3MusicLibrary *_library;
    int _refreshState;
    NSString *_uniqueIdentifier;
}

@property(readonly) <MPArtworkDataSource> * artworkDataSource;
@property(readonly) BOOL companionDeviceActiveStoreAccountIsDynamiteEligible;
@property(readonly) <MPArtworkDataSource> * completeMyCollectionArtworkDataSource;
@property(readonly) NSString * databasePath;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) MPMediaEntityCache * entityCache;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isGeniusEnabled;
@property(retain) ML3MusicLibrary * library;
@property(readonly) NSArray * localizedSectionIndexTitles;
@property(readonly) NSString * name;
@property(readonly) NSArray * preferredAudioLanguages;
@property(readonly) NSArray * preferredSubtitleLanguages;
@property(readonly) NSSet * propertiesToCache;
@property(readonly) BOOL requiresAuthentication;
@property(readonly) Class superclass;
@property(readonly) NSString * syncValidity;
@property(readonly) NSString * uniqueIdentifier;

+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)arg1;
+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;

- (void).cxx_destruct;
- (id)ML3SystemFilterPredicatesWithGroupingType:(int)arg1 cloudTrackFilteringType:(int)arg2 additionalFilterPredicates:(id)arg3;
- (id)_adjustedItemDateOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyRatingOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedItemTimeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)arg1 withDefaultValue:(id)arg2;
- (void)_coalesceEvents;
- (BOOL)_dataProviderSupportsEntityChangeTracking;
- (void)_displayValuesDidChange:(id)arg1;
- (void)_dynamicPropertiesDidChange:(id)arg1;
- (void)_invisiblePropertiesDidChange:(id)arg1;
- (void)_libraryContentsDidChange:(id)arg1;
- (void)_libraryUIDDidChange:(id)arg1;
- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(id)arg4;
- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(id)arg5;
- (void)_postEvents;
- (BOOL)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned int)arg2 entityClass:(Class)arg3;
- (void)_syncGenerationDidChange:(id)arg1;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)addItemsWithIdentifiers:(long long*)arg1 count:(unsigned int)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (long long)addPlaylistWithValuesForProperties:(id)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (id)artworkDataSource;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long)arg2 groupingType:(int)arg3 existentPID:(unsigned long long*)arg4;
- (BOOL)collectionExistsWithName:(id)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
- (id)collectionResultSetForQueryCriteria:(id)arg1;
- (BOOL)companionDeviceActiveStoreAccountIsDynamiteEligible;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (id)entityCache;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(id)arg3 usingBlock:(id)arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 itemBlock:(id)arg3 collectionBlock:(id)arg4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(id)arg3 usingBlock:(id)arg4;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(unsigned int)arg1;
- (BOOL)hasUbiquitousBookmarkableItems;
- (id)initWithLibrary:(id)arg1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (id)lastModifiedDate;
- (id)library;
- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(int)arg3 completionBlock:(id)arg4;
- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (void)performBackgroundTaskWithBlock:(id)arg1;
- (void)performReadTransactionWithBlock:(id)arg1;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long*)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned int)arg2 hideFromPurchaseHistory:(BOOL)arg3;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (void)setLibrary:(id)arg1;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(id)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(id)arg2;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(int)arg4 completionBlock:(id)arg5;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (unsigned long long)syncGenerationID;
- (id)syncValidity;
- (id)systemFilterPredicatesWithGroupingType:(int)arg1 cloudTrackFilteringType:(int)arg2;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)writable;

@end