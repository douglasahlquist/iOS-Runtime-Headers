/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileReattachmentContext : NSObject {
    NSMapTable * __tileControllerVelocities;
    BOOL  _isTransitioningOverOneUp;
    BOOL  _isZoomingIn;
}

@property (nonatomic, readonly) NSMapTable *_tileControllerVelocities;
@property (setter=setTransitioningOverOneUp:, nonatomic) BOOL isTransitioningOverOneUp;
@property (setter=setZoomingIn:, nonatomic) BOOL isZoomingIn;

- (void).cxx_destruct;
- (id)_tileControllerVelocities;
- (BOOL)isTransitioningOverOneUp;
- (BOOL)isZoomingIn;
- (void)setTransitioningOverOneUp:(BOOL)arg1;
- (void)setVelocity:(struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })arg1 forTileController:(id)arg2;
- (void)setZoomingIn:(BOOL)arg1;
- (struct PUDisplayVelocity { double x1; double x2; double x3; double x4; })velocityForTileController:(id)arg1;

@end