/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBarcode : NSObject <NSSecureCoding> {
    NSString * _altText;
    int  _format;
    NSData * _messageData;
    NSDictionary * _options;
}

@property (nonatomic, copy) NSString *altText;
@property (nonatomic) int format;
@property (nonatomic, readonly) BOOL isTall;
@property (nonatomic, copy) NSData *messageData;
@property (nonatomic, copy) NSDictionary *options;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altText;
- (void)encodeWithCoder:(id)arg1;
- (int)format;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassDictionary:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTall;
- (id)messageData;
- (id)options;
- (void)setAltText:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setMessageData:(id)arg1;
- (void)setOptions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)_imageFromBarcodeMessage;
- (id)image;

@end
