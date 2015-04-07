/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString;

@interface TwoPartTextLabel : UILabel {
    float _minPart2Width;
    struct CGSize { 
        float width; 
        float height; 
    } _part2Size;
    NSString *_secondTextPart;
    BOOL _strikethroughPart1;
    BOOL _strikethroughPart2;
}

@property BOOL strikethroughPart1;
@property BOOL strikethroughPart2;

- (void).cxx_destruct;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasTwoParts;
- (struct CGSize { float x1; float x2; })idealSize;
- (float)rightmostDisplayedPartWidth;
- (void)setMinimumPart2Width:(float)arg1;
- (void)setStrikethroughPart1:(BOOL)arg1;
- (void)setStrikethroughPart2:(BOOL)arg1;
- (void)setTextPart1:(id)arg1;
- (void)setTextPart1:(id)arg1 part2:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)strikethroughPart1;
- (BOOL)strikethroughPart2;
- (struct CGSize { float x1; float x2; })textPart2Size;

@end