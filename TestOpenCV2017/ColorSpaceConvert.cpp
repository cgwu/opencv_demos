#include "stdafx.h"

using namespace std;
using namespace cv;

//int main()
int main_ColorSpaceConvert()
{
	Mat img = imread("cg.jpg");
	Mat img1 = img.clone();
	cvtColor(img, img1, CV_RGB2GRAY);
	imshow("origin", img);
	imshow("gray", img1);
	cvtColor(img, img1, CV_RGB2HSV);
	imshow("hsv", img1);

	Mat imgOrigin;
	cvtColor(img1, imgOrigin, CV_HSV2RGB);
	imshow("rgb", imgOrigin);
	waitKey(0);

	return 0;
}