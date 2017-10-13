#import <Cordova/CDVPlugin.h>
#import "PECropViewController.h"
#import "PECropView.h"

@interface CTCrop : CDVPlugin <PECropViewControllerDelegate>
- (void) cropImage:(CDVInvokedUrlCommand *) command;
@end
