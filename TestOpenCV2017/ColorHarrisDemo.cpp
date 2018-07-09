/*
½Çµã¼ì²â
*/
#include "stdafx.h"
using namespace cv;

int main() {
	Mat src = imread("hough.jpg");
	Mat gray;
	cvtColor(src, gray, CV_BGR2GRAY);

	Mat corner;
	cornerHarris(gray, corner, 3, 3, 0.04);
	threshold(corner, corner, 0.0001, 255, THRESH_BINARY);

	imshow("src", src);
	imshow("gray", gray);
	imshow("corner", corner);

	waitKey();
	return 0;
}