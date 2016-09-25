/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {
    CDPDevice * _device;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    UIButton * _footerButton;
    BOOL  _remoteAccountRecovery;
    unsigned int  _remoteSecretType;
}

@property (nonatomic, retain) CDPDevice *device;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *escapeOffer;
@property BOOL remoteAccountRecovery;
@property (nonatomic) unsigned int remoteSecretType;

- (void).cxx_destruct;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;
- (id)device;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (id)escapeOffer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isSmallScreen;
- (BOOL)isVerySmallScreen;
- (BOOL)remoteAccountRecovery;
- (unsigned int)remoteSecretType;
- (void)setDevice:(id)arg1;
- (void)setEscapeOffer:(id)arg1;
- (void)setRemoteAccountRecovery:(BOOL)arg1;
- (void)setRemoteSecretType:(unsigned int)arg1;
- (void)setTitle:(id)arg1;

@end