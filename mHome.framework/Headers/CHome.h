//
//  CHome.h
//  Quantum
//
//  Created by John Blaine on 4/27/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPhoto.h"
#import "CPhotoLoad.h"
#import "CIcon.h"
//#import "GSKScene.h"
//#import "GSKView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CHome : UIView
    @property (nonatomic, retain) UIImageView *logo;
    @property (nonatomic, retain) UITextView *dscr;
    @property (nonatomic, retain) CPhoto *cimg;
    @property (nonatomic, retain) UIButton *editBtn;
    @property (nonatomic, retain) UIButton *filter;

//    @property (nonatomic, retain) GSKView *game;

    - (NSString*) fetchDscr;

    - (void) addDscr:(NSString*)d;
    - (void) addPhoto:(NSString*)u date:(NSString*)d loca:(nullable NSString*)f;
    - (void) addLogo:(NSString*)u date:(NSString*)d loca:(nullable NSString*)f;

    - (void) refresh;
    - (void) addFilter:(UIColor*) c alp:(float) a;

@end

NS_ASSUME_NONNULL_END
