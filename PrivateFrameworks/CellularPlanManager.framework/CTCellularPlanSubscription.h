/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@class NSArray, NSString;

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding> {
    int _accountStatus;
    NSString *_accountURL;
    double _billingEndDate;
    double _billingStartDate;
    NSString *_carrierName;
    NSArray *_dataUsage;
    NSString *_iccid;
    NSString *_planDescription;
    int _planStatus;
    int _planType;
    double _timestamp;
    bool_autoRenew;
}

@property(readonly) int accountStatus;
@property(readonly) NSString * accountURL;
@property(readonly) bool autoRenew;
@property(readonly) double billingEndDate;
@property(readonly) double billingStartDate;
@property(readonly) NSString * carrierName;
@property(readonly) NSArray * dataUsage;
@property(readonly) NSString * iccid;
@property(readonly) NSString * planDescription;
@property(readonly) int planStatus;
@property(readonly) int planType;
@property(readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (int)accountStatus;
- (id)accountURL;
- (bool)autoRenew;
- (double)billingEndDate;
- (double)billingStartDate;
- (id)carrierName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsage;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 autoRenew:(bool)arg2 billingStartDate:(double)arg3 billingEndDate:(double)arg4 carrierName:(id)arg5 planType:(int)arg6 planDescription:(id)arg7 planStatus:(int)arg8 accountStatus:(int)arg9 accountURL:(id)arg10 timestamp:(double)arg11 dataUsage:(id)arg12;
- (id)planDescription;
- (int)planStatus;
- (int)planType;
- (double)timestamp;

@end