/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDataItem : NSObject <PKPaymentValidating> {
    PKPaymentAuthorizationDataModel * _model;
    int  _status;
    int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) PKPaymentAuthorizationDataModel *model;
@property (getter=isRejected, nonatomic, readonly) BOOL rejected;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (int)dataType;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (BOOL)isRejected;
- (BOOL)isValidWithError:(id*)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setType:(int)arg1;
- (int)status;
- (int)type;

@end
