//
//  UIImage+PECrop.h
//  PhotoCropEditor
//
//  Created by Terasol Tech - 2017

#import <UIKit/UIKit.h>

@interface UIImage (PECrop)

- (UIImage *)rotatedImageWithtransform:(CGAffineTransform)rotation
                         croppedToRect:(CGRect)rect;

@end
