/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTiledLayoutGenerator : NSObject {
    int  _cacheHeadLocation;
    int  _cacheTailLocation;
    /* Warning: unhandled array encoding: '[20@]' */ id  _cachedBatchID;
    struct { 
        int index; 
        struct CGSize { 
            float width; 
            float height; 
        } imageSize; 
        struct CGSize { 
            float width; 
            float height; 
        } minimumSize; 
        BOOL hasCaption; 
        BOOL isBatchStart; 
    }  _cachedTileInfo;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _captionPadding;
    struct CGSize { 
        float width; 
        float height; 
    }  _interTileSpacing;
    struct CGSize { 
        float width; 
        float height; 
    }  _noCaptionSpacing;
    int  _numberOfMagneticGuidelines;
    id /* block */  _parsedFrameBlock;
    float  _roundingScale;
    int  _scanLocation;
    int  _scanSpecialSequenceCount;
    BOOL  _scannedBatchHasCaption;
    id  _scannedBatchID;
    BOOL  _shouldStop;
    id /* block */  _tileBatchIDBlock;
    id /* block */  _tileCaptionSizeBlock;
    int  _tileCount;
    id /* block */  _tileHasCaptionBlock;
    id /* block */  _tileImageSizeBlock;
    id /* block */  _tileMinimumSizeBlock;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } captionPadding;
@property (nonatomic) struct CGSize { float x1; float x2; } interTileSpacing;
@property (nonatomic, readonly) BOOL isAtEnd;
@property (nonatomic) struct CGSize { float x1; float x2; } noCaptionSpacing;
@property (nonatomic) int numberOfMagneticGuidelines;
@property (nonatomic) id /* block */ parsedFrameBlock;
@property (nonatomic) float roundingScale;
@property (nonatomic) int scanLocation;
@property (nonatomic) int scanSpecialSequenceCount;
@property (nonatomic) CKTiledLayoutGeneratorScanState *scanState;
@property (nonatomic) BOOL scannedBatchHasCaption;
@property (nonatomic, retain) id scannedBatchID;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic, copy) id /* block */ tileBatchIDBlock;
@property (nonatomic, copy) id /* block */ tileCaptionSizeBlock;
@property (nonatomic) int tileCount;
@property (nonatomic, copy) id /* block */ tileHasCaptionBlock;
@property (nonatomic, copy) id /* block */ tileImageSizeBlock;
@property (nonatomic, copy) id /* block */ tileMinimumSizeBlock;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })captionPadding;
- (struct CGSize { float x1; float x2; })captionSizeForTileAtIndex:(int)arg1 proposedSize:(struct CGSize { float x1; float x2; })arg2;
- (void)didParseTiles;
- (void)enumerateFramesWithBlock:(id /* block */)arg1;
- (id)init;
- (struct CGSize { float x1; float x2; })interTileSpacing;
- (BOOL)isAtEnd;
- (struct CGSize { float x1; float x2; })noCaptionSpacing;
- (int)numberOfMagneticGuidelines;
- (BOOL)parseNextTiles;
- (void)parseTiles;
- (void)parsedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 type:(int)arg2 forTileAtIndex:(int)arg3;
- (id /* block */)parsedFrameBlock;
- (float)roundingScale;
- (BOOL)scanAnyTile:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (int)scanLocation;
- (int)scanSpecialSequenceCount;
- (id)scanState;
- (BOOL)scanTile:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 ofType:(int)arg2;
- (BOOL)scanTile:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 passingTest:(id /* block */)arg2;
- (BOOL)scanTile:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 type:(int*)arg2;
- (BOOL)scanTileWithHorizontalPanorama:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)scanTileWithLandscapeImage:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)scanTileWithPortraitImage:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)scanTileWithSquareImage:(struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)scannedBatchHasCaption;
- (id)scannedBatchID;
- (void)setCaptionPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setInterTileSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setNoCaptionSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setNumberOfMagneticGuidelines:(int)arg1;
- (void)setParsedFrameBlock:(id /* block */)arg1;
- (void)setRoundingScale:(float)arg1;
- (void)setScanLocation:(int)arg1;
- (void)setScanSpecialSequenceCount:(int)arg1;
- (void)setScanState:(id)arg1;
- (void)setScannedBatchHasCaption:(BOOL)arg1;
- (void)setScannedBatchID:(id)arg1;
- (void)setShouldStop:(BOOL)arg1;
- (void)setTileBatchIDBlock:(id /* block */)arg1;
- (void)setTileCaptionSizeBlock:(id /* block */)arg1;
- (void)setTileCount:(int)arg1;
- (void)setTileHasCaptionBlock:(id /* block */)arg1;
- (void)setTileImageSizeBlock:(id /* block */)arg1;
- (void)setTileMinimumSizeBlock:(id /* block */)arg1;
- (BOOL)shouldStop;
- (id /* block */)tileBatchIDBlock;
- (id /* block */)tileCaptionSizeBlock;
- (int)tileCount;
- (id /* block */)tileHasCaptionBlock;
- (id /* block */)tileImageSizeBlock;
- (id /* block */)tileMinimumSizeBlock;
- (float)valueByRounding:(float)arg1 usingMagneticGuidelines:(BOOL)arg2;
- (void)willParseTiles;

@end
