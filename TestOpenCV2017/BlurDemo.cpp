#include "stdafx.h"
using namespace cv;
/*
均值滤波
高斯滤波
中值滤波
双边滤波
*/
int main_BlurDemo() {
	Mat img = imread("fengjing.jpg");
	imshow("origin", img);

	Mat out;

	//blur(img, out, Size(2, 2));	// 均值滤波
	//imshow("result2", out);
	blur(img, out, Size(5, 5));	// 均值滤波
	imshow("result5", out);
	//blur(img, out, Size(10, 10));	// 均值滤波
	//imshow("result10", out);

	GaussianBlur(img, out, Size(5, 5), 0, 0);
	imshow("gaussian filter 5", out);

	//GaussianBlur(img, out, Size(9,9), 0, 0);
	//imshow("gaussian filter 9", out);

	medianBlur(img, out, 5);
	imshow("median filter 5", out);

	//medianBlur(img, out, 9);
	//imshow("median filter 9", out);

	bilateralFilter(img, out, 12, 20, 6);
	imshow("bilateralFilter", out);
	waitKey();
	return 0;
}