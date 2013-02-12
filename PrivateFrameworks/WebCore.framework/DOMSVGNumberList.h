/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMSVGNumberList : DOMObject {
}

@property(readonly) NSUInteger numberOfItems;

+ (id)_wrapSVGNumberList:(struct SVGNumberList { int (**x1)(); NSInteger x2; struct Vector<float,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<float,0ul> { float *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct QualifiedName {} *x4; }*)arg1;

- (struct SVGNumberList { int (**x1)(); NSInteger x2; struct Vector<float,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<float,0ul> { float *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct QualifiedName {} *x4; }*)_SVGNumberList;
- (id)_initWithSVGNumberList:(struct SVGNumberList { int (**x1)(); NSInteger x2; struct Vector<float,0ul> { NSUInteger x_3_1_1; struct VectorBuffer<float,0ul> { float *x_2_2_1; NSUInteger x_2_2_2; } x_3_1_2; } x3; struct QualifiedName {} *x4; }*)arg1;
- (id)appendItem:(id)arg1;
- (void)clear;
- (void)dealloc;
- (void)finalize;
- (id)getItem:(NSUInteger)arg1;
- (id)initialize:(id)arg1;
- (id)insertItemBefore:(id)arg1 index:(NSUInteger)arg2;
- (NSUInteger)numberOfItems;
- (id)removeItem:(NSUInteger)arg1;
- (id)replaceItem:(id)arg1 index:(NSUInteger)arg2;

@end