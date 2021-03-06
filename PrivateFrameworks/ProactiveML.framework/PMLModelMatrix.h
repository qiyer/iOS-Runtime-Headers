/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelMatrix : NSObject {
    NSMutableData * _data;
    int  _height;
    int  _width;
}

@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int width;

+ (id)modelMatrixFromCovariates:(id)arg1;
+ (id)modelMatrixFromCovariates:(id)arg1 andOutcomes:(id)arg2;
+ (id)modelMatrixFromDoubles:(id)arg1 ofHeight:(int)arg2 andWidth:(int)arg3;

- (void).cxx_destruct;
- (int)height;
- (id)initModelMatrixFromCovariates:(id)arg1;
- (id)initModelMatrixFromCovariates:(id)arg1 andOutcomes:(id)arg2;
- (id)initModelMatrixFromDoubles:(id)arg1 ofHeight:(int)arg2 andWidth:(int)arg3;
- (const double*)values;
- (int)width;

@end
