/*
»ô·ò±ä»»¼ì²âÖ±Ïß
*/
#include "stdafx.h"
using namespace cv;

int main_HoughLineDetect() {
	Mat src = imread("hough.jpg");
	imshow("origin", src);

	Mat mid, dst;
	Canny(src, mid, 50, 200, 3);	// Éú³ÉÍ¼Ïñ±ßÔµ£ººÚ°×
	imshow("after Canny", mid);
	cvtColor(mid, dst, CV_GRAY2BGR);

	vector<Vec4i> lines;
	HoughLinesP(mid, lines, 1, CV_PI / 180, 80, 50, 10);

	for (int i = 0; i < lines.size(); i++)
	{
		Vec4i l = lines[i];
		line(dst,Point(l[0],l[1]),Point(l[2],l[3]),Scalar(189,80,255));
	}
	imshow("dst", dst);

	waitKey();
	return 0;
}
