/*
²éÕÒÍ¼ÏñÂÖÀª
*/
#include "stdafx.h"
using namespace cv;

int main() {
	Mat src = imread("123.png", CV_LOAD_IMAGE_GRAYSCALE);
	imshow("origin", src);

	src = src < 200;	// ¹ýÂËÏñËØ

	vector<vector<Point>> contours;
	vector<Vec4i> hierachy;

	findContours(src, contours, hierachy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);
	Mat dst = Mat::zeros(src.rows, src.cols, CV_8UC3);
	drawContours(dst, contours, -1, Scalar(0, 0, 255), CV_FILLED, 8, hierachy);  // Scalar(0,0,255) ÑÕÉ«: B,G,R
	imshow("dst", dst);

	waitKey();
	return 0;
}
