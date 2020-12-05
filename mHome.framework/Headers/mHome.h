//
//  mHome.h
//  mHome
//
//  Created by John Blaine on 12/5/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CPhoto.h"
#import "CPhotoLoad.h"
#import "CIcon.h"

//! Project version number for mHome.
FOUNDATION_EXPORT double mHomeVersionNumber;
FOUNDATION_EXPORT const unsigned char mHomeVersionString[];


@interface mHome : UIView

@property (nonatomic, retain) UIImageView *logo;
@property (nonatomic, retain) UITextView *dscr;
@property (nonatomic, retain) CPhoto *cimg;
@property (nonatomic, retain) UIButton *editBtn;
@property (nonatomic, retain) UIButton *filter;

- (NSString*) fetchDscr;

- (void) addDscr:(nullable NSString*)d;
- (void) addPhoto:(nullable NSString*)u date:(nullable NSString*)d;
- (void) addLogo:(nullable NSString*)u date:(nullable NSString*)d;
- (void) refresh;
- (void) addFilter:(nullable UIColor*) c alp:(float) a;

@end
