/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {
    BOOL  _keyAssetDidChange;
    BOOL  _titleDidChange;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, retain) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly, retain) <PLAssetContainer> *container;
@property (nonatomic, readonly) BOOL keyAssetDidChange;
@property (nonatomic, readonly) BOOL titleDidChange;

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;

- (void)_calculateDiffs;
- (id)_contentRelationshipName;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (struct NSObject { Class x1; }*)album;
- (id)assetContainer;
- (id)container;
- (void)dealloc;
- (id)description;
- (BOOL)hasDeletes;
- (BOOL)keyAssetDidChange;
- (id)name;
- (BOOL)titleDidChange;
- (id)userInfo;

@end
