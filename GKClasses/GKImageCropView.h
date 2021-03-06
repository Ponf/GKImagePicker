//
//  GKImageCropView.h
//  GKImagePicker
//
//  Created by Georg Kitz on 6/1/12.
//  Copyright (c) 2012 Aurora Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

#define TOOLBAR_HEIGHT      72.f
#define TOOLBAR_PADDING     10.f

@interface GKImageCropView : UIView

@property (nonatomic, strong) UIImage *imageToCrop;
@property (nonatomic, assign) CGSize normalizedCropSize;
@property (nonatomic, assign) CGSize originalCropSize;
@property (nonatomic, assign) BOOL resizableCropArea;

@property (nonatomic, assign) BOOL enforceRatioLimits;
@property (nonatomic, assign) float maxWidthRatio;
@property (nonatomic, assign) float minWidthRatio;

- (UIImage *)croppedImage;

@end
