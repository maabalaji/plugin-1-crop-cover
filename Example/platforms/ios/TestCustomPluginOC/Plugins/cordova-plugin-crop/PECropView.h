//
//  PECropView.h
//  PhotoCropEditor
//
//  Created by Terasol Tech - 2017

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <AVFoundation/AVFoundation.h>

@interface PECropView : UIView

@property (nonatomic) UIImage *image;

@property (nonatomic, readonly) UIImage *croppedImage;

@property (nonatomic, readonly) CGAffineTransform rotation;

@property (nonatomic, readonly) BOOL userHasModifiedCropArea;

@property (nonatomic) BOOL keepingCropAspectRatio;

@property (nonatomic) CGFloat cropAspectRatio;

@property (nonatomic) CGFloat customZoom;

@property (nonatomic) CGRect cropRect;

@property (nonatomic) CGRect imageCropRect;

@property (nonatomic) CGFloat rotationAngle;

@property (nonatomic, readonly) CGRect zoomedCropRect;
@property (nonatomic, weak, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;

- (void)resetCropRect;

- (void)resetCropRectAnimated:(BOOL)animated;

- (void)setRotationAngle:(CGFloat)rotationAngle snap:(BOOL)snap;

- (void)setAVar:(int)newAVar;

@end
