//
//  VideoReader.m
//  FaceProject
//
//  Created by HongQuan Do on 1/29/17.
//  Copyright © 2017 HongQuan Do. All rights reserved.
//

#import "VideoReader.h"
#import <UIKit/UIKit.h>
using namespace cv;
using namespace std;
@implementation VideoReader

-(void) openVideoWithOpenCV:(UIImageView*)imageView{
    self->videoCamera = [[CvVideoCamera alloc] initWithParentView:imageView];
    self->videoCamera.defaultAVCaptureDevicePosition = AVCaptureDevicePositionFront;
    self->videoCamera.defaultAVCaptureSessionPreset = AVCaptureSessionPreset352x288;
    self->videoCamera.defaultAVCaptureVideoOrientation = AVCaptureVideoOrientationPortrait;
    self->videoCamera.defaultFPS = 30;

}

-(void) startVieoCameraWithOpenCV{
    [self->videoCamera start];
}
@end
