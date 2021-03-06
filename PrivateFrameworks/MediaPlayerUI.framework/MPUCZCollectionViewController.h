/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUCZCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    MPUCZCollectionView *_collectionView;
    int _coverCountPerColumn;
    MPUDataSource *_dataSource;
    <MPUCZCollectionViewControllerDelegate> *_delegate;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic) int coverCountPerColumn;
@property (nonatomic, retain) MPUDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUCZCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGSize { float x1; float x2; } itemSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginPreloadingAlbums;
- (id)_collectionViewLayoutForColumnCount:(unsigned int)arg1;
- (void)_dataSourceDidInvalidateNotification:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)coverCountPerColumn;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithDataSource:(id)arg1;
- (struct CGSize { float x1; float x2; })itemSize;
- (struct CGSize { float x1; float x2; })itemSizeForCoverCount:(unsigned int)arg1;
- (void)loadView;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)setCoverCountPerColumn:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
