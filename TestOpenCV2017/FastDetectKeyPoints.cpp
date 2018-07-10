/*
FASTÌØÕ÷µã¼ì²â
*/
#include "stdafx.h"
using namespace cv;

int main_FastDetectKeyPoints() {
	Mat img = imread("hough.jpg");
	vector<KeyPoint> keypoints;

	FastFeatureDetector fast(40);
	fast.detect(img, keypoints);

	drawKeypoints(img, keypoints, img, Scalar(255, 0, 0), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

	imshow("img", img);
	
	waitKey();
	return 0;
}