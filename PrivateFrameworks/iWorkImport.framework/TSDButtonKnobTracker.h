/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDButtonKnobTracker : TSDKnobTracker {
    SEL mAction;
    id mTarget;
}

@property SEL action;
@property id target;

- (SEL)action;
- (BOOL)allowHUDToDisplay;
- (void)endMovingKnob;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (void)moveKnobToRepPosition:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)operationShouldBeDynamic;
- (BOOL)p_knobContainsCurrentPosition;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (BOOL)shouldHideOtherKnobs;
- (BOOL)shouldHideSelectionHighlight;
- (id)target;

@end