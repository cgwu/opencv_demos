#include "stdafx.h"

using namespace std;
using namespace cv;

int main_ThresholdImage()
{
	Mat img = imread("cg.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	imshow("origin", img);

	Mat img1;
	threshold(img, img1, 50, 255, CV_THRESH_BINARY);
	imshow("binary 50", img1);

	threshold(img, img1, 50, 255, CV_THRESH_BINARY_INV);
	imshow("binary 50 inv", img1);
	
	threshold(img, img1, 100, 255, CV_THRESH_BINARY);
	imshow("binary 100", img1);

	waitKey();
	return 0;
}