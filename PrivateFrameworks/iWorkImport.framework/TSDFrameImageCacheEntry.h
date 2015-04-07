/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject {
    float mAssetScale;
    TSDFrameSpec *mFrameSpec;
    struct CGImage {} *mImages[4];
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
    float mViewScale;
}

@property float assetScale;
@property TSDFrameSpec * frameSpec;
@property struct CGSize { float x1; float x2; } size;
@property float viewScale;

- (float)assetScale;
- (void)dealloc;
- (id)frameSpec;
- (struct CGImage { }*)newImageForCALayer:(BOOL)arg1 mask:(BOOL)arg2;
- (void)setAssetScale:(float)arg1;
- (void)setFrameSpec:(id)arg1;
- (void)setImage:(struct CGImage { }*)arg1 forCALayer:(BOOL)arg2 mask:(BOOL)arg3;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setViewScale:(float)arg1;
- (struct CGSize { float x1; float x2; })size;
- (float)viewScale;

@end