//
//  VideoReader.h
//  FaceProject
//
//  Created by HongQuan Do on 1/29/17.
//  Copyright © 2017 HongQuan Do. All rights reserved.
//


#ifdef __cplusplus
#import <opencv2/opencv.hpp>
#import <opencv2/videoio/cap_ios.h>

using namespace cv;
using namespace std;
#endif

#ifdef __OBJC__
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#endif

@interface VideoReader : NSObject{
    #ifdef __cplusplus
    CvVideoCamera* videoCamera;
    #endif
}

-(void) openVideoWithOpenCV:(UIImageView*)imageView;
-(void) startVieoCameraWithOpenCV;
//@property (nonatomic, retain) CvVideoCamera* videoCamera;
@end

