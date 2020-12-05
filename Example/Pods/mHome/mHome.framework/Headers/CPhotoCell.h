//
//  CPhotoCell.h
//  Quantum
//
//  Created by John Blaine on 4/28/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CPhotoCell : UICollectionViewCell
    @property (nonatomic, retain) UIButton *filter;
    @property (nonatomic, retain) UIImageView *img;
    @property (nonatomic, retain) UIActivityIndicatorView *indicator;

    - (void)set:(NSString *)pth  date:(NSString*)d  loca:(NSString*)fn;
    - (void)imgVisible:(Boolean) b;
    - (void)setPhoto:(UIImage *)im;

@end

NS_ASSUME_NONNULL_END
