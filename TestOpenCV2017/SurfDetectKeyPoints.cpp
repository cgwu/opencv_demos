/*
FASTÌØÕ÷µã¼ì²â
*/
#include "stdafx.h"
using namespace cv;

int main() {
	Mat img = imread("hough.jpg");
	imshow("src", img);

	vector<KeyPoint> keypoints;
	SurfFeatureDetector surf(40);
	surf.detect(img, keypoints);
	drawKeypoints(img, keypoints, img, Scalar(255, 0, 0), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);

	imshow("result", img);

	waitKey();
	return 0;
}