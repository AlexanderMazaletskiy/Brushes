//
//  WDImageButton.h
//  Brushes
//
//  This Source Code Form is subject to the terms of the Mozilla Public
//  License, v. 2.0. If a copy of the MPL was not distributed with this
//  file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//  Copyright (c) 2012-2013 Steve Sprang
//

#import <Foundation/Foundation.h>

@interface WDImageButton : UIButton

+ (WDImageButton *) imageButtonWithImage:(UIImage *)image;

@property (nonatomic, assign) BOOL marked;
@property (nonatomic) UIImageView *markView;

@end
