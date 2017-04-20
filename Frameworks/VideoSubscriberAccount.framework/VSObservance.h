/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSObservance : NSObject {
    <VSObservanceDelegate> * _delegate;
    NSString * _keyPath;
    id  _object;
    BOOL  _observing;
    unsigned int  _options;
}

@property (nonatomic) <VSObservanceDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id object;
@property (getter=isObserving, nonatomic) BOOL observing;
@property (nonatomic, readonly) unsigned int options;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 options:(unsigned int)arg3;
- (BOOL)isObserving;
- (id)keyPath;
- (id)object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned int)options;
- (void)setDelegate:(id)arg1;
- (void)setObserving:(BOOL)arg1;
- (void)startObserving;
- (void)stopObserving;

@end