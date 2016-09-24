/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionLayerReference : NSObject {
    int  _blendMode;
    BOOL  _fixedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    NSString * _layerName;
    BOOL  _makeOpaqueIfPossible;
    double  _opacity;
    CUIRenditionKey * _referenceKey;
}

@property (nonatomic) int blendMode;
@property (nonatomic) BOOL fixedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, copy) NSString *layerName;
@property (nonatomic) BOOL makeOpaqueIfPossible;
@property (nonatomic) double opacity;
@property (nonatomic, retain) CUIRenditionKey *referenceKey;

- (int)blendMode;
- (void)dealloc;
- (BOOL)fixedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)layerName;
- (BOOL)makeOpaqueIfPossible;
- (float)opacity;
- (id)referenceKey;
- (void)setBlendMode:(int)arg1;
- (void)setFixedFrame:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayerName:(id)arg1;
- (void)setMakeOpaqueIfPossible:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setReferenceKey:(id)arg1;

@end