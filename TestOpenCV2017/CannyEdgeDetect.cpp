/*
Canny±ßÔµ¼ì²â
*/
#include "stdafx.h"
using namespace cv;

int main_CannyEdgeDetect() {
	Mat src = imread("123.png");
	imshow("src", src);
	cvtColor(src, src, CV_BGR2GRAY);
	imshow("src gray", src);

	Mat dst;
	Canny(src, dst, 150, 100, 3);
	imshow("dst", dst);
	waitKey();
	return 0;
}