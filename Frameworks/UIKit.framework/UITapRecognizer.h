/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableSet;

@interface UITapRecognizer : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _timerOn : 1;
    unsigned int _noNewTouches : 1;
    NSMutableSet *_activeTouches;
    float _allowableMovement;
    NSInteger _currentNumberOfTaps;
    NSInteger _currentNumberOfTouches;
    id _delegate;
    } _location;
    double _maximumIntervalBetweenSuccessiveTaps;
    double _maximumSingleTapDuration;
    NSUInteger _numberOfTapsRequired;
    NSUInteger _numberOfTouchesRequired;
    } _startPoint;
    NSMutableArray *_touches;
}

@property <UITapRecognizerDelegate> *delegate;
@property(readonly) NSArray *touches;
@property float allowableMovement;
@property double maximumIntervalBetweenSuccessiveTaps;
@property double maximumSingleTapDuration;
@property NSUInteger numberOfTapsRequired;
@property NSUInteger numberOfTouchesRequired;

- (struct CGPoint { float x1; float x2; })_locationOnScreen;
- (void)_reset;
- (float)allowableMovement;
- (void)clearTapTimer;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (NSUInteger)numberOfTapsRequired;
- (NSUInteger)numberOfTouchesRequired;
- (void)setAllowableMovement:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(NSUInteger)arg1;
- (void)setNumberOfTouchesRequired:(NSUInteger)arg1;
- (void)startTapTimer:(double)arg1;
- (void)tooSlow:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end