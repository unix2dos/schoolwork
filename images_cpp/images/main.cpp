//
//  main.c
//  images
//
//  Created by liuwei on 2019/3/13.
//  Copyright © 2019年 liuwei. All rights reserved.
//

#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("usage: ./images path angle\n");
        return -1;
    }
    
    Mat source = imread(argv[1], 1);
    if (!source.data)
    {
        printf("No image data \n");
        return -1;
    }
    
    double angle = atof(argv[2]);
    Point2f src_center(source.cols/2.0F, source.rows/2.0F);
    Mat rot_mat = getRotationMatrix2D(src_center, angle, 1.0);
    Mat dst;
    warpAffine(source, dst, rot_mat, source.size());
    

    imshow("Source", source);
    imshow("Rotate", dst);
    waitKey(0);
    
    return 0;
}
