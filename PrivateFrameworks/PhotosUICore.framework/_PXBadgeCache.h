/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXBadgeCache : NSObject {
    NSDictionary * _thumbnailCache;
}

+ (id)sharedCacheForStyle:(int)arg1;
+ (id)sharedCacheForStyleBigShadowed;
+ (id)sharedCacheForStyleSmallShaded;

- (void).cxx_destruct;
- (id)_debugBadgeWithColors:(id)arg1;
- (id)_debugImageForBadgeType:(unsigned int)arg1;
- (id)imageForBadgeType:(unsigned int)arg1;
- (id)imageForCacheKey:(unsigned int)arg1;
- (struct UIOffset { double x1; double x2; })imageOffsetForBadgeType:(unsigned int)arg1;
- (id)initWithStyle:(int)arg1;

@end