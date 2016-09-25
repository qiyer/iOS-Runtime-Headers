/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsDestinationsWidget : PBCodable <NSCopying> {
    BOOL  _everExpanded;
    struct { 
        unsigned int tappedItemIndex : 1; 
        unsigned int everExpanded : 1; 
        unsigned int initiallyExpanded : 1; 
    }  _has;
    BOOL  _initiallyExpanded;
    NSMutableArray * _proactiveItems;
    int  _tappedItemIndex;
}

@property (nonatomic) BOOL everExpanded;
@property (nonatomic) BOOL hasEverExpanded;
@property (nonatomic) BOOL hasInitiallyExpanded;
@property (nonatomic) BOOL hasTappedItemIndex;
@property (nonatomic) BOOL initiallyExpanded;
@property (nonatomic, retain) NSMutableArray *proactiveItems;
@property (nonatomic) int tappedItemIndex;

+ (Class)proactiveItemType;

- (void)addProactiveItem:(id)arg1;
- (void)clearProactiveItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)everExpanded;
- (BOOL)hasEverExpanded;
- (BOOL)hasInitiallyExpanded;
- (BOOL)hasTappedItemIndex;
- (unsigned int)hash;
- (BOOL)initiallyExpanded;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proactiveItemAtIndex:(unsigned int)arg1;
- (id)proactiveItems;
- (unsigned int)proactiveItemsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setEverExpanded:(BOOL)arg1;
- (void)setHasEverExpanded:(BOOL)arg1;
- (void)setHasInitiallyExpanded:(BOOL)arg1;
- (void)setHasTappedItemIndex:(BOOL)arg1;
- (void)setInitiallyExpanded:(BOOL)arg1;
- (void)setProactiveItems:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end