#include "stdafx.h"
using namespace cv;

int main_AffineDemo() {
	Mat img = imread("fengjing.jpg");
	imshow("origin", img);

	Mat rotMat(2, 3, CV_32FC1);
	Mat dst;

	Point center = Point(img.cols / 2, img.rows / 2);
	double angle = -45;
	double scale = 0.6;

	// »ñµÃÐý×ª¾ØÕó
	rotMat = getRotationMatrix2D(center, angle, scale);

	warpAffine(img, dst, rotMat, img.size());
	imshow("result", dst);

	waitKey();
	return 0;
}