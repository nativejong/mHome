//
//  CPhoto.h
//  Quantum
//
//  Created by John Blaine on 4/28/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CPhoto : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>
    @property (nonatomic, retain) UIButton *status;

    @property (nonatomic, retain) UICollectionView *cview;
    @property (nonatomic, retain) UIPageControl *page;

    @property (strong, nonatomic) NSMutableArray *myData;

    @property (strong, nonatomic) UIColor *filterColor;
    @property (nonatomic) float filterAlpha;

- (void) addPhoto:(NSMutableArray*)u;
- (void) addPhoto:(NSString*)u date:(NSString*)d;
- (void) refresh;
- (void) clear;

@end

//float filterAlpha;

NS_ASSUME_NONNULL_END
