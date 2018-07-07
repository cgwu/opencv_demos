#include "stdafx.h"

using namespace cv;

int main_ErodeDilateDemo() {
	Mat img = imread("finger_print.jpg");
	imshow("origin", img);

	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3));

	Mat dst1,dst2;

	erode(img, dst1, element);	// 腐蚀 (针对白色)
	dilate(img, dst2, element); // 膨胀 (针对白色)
	imshow("erode", dst1);
	imshow("dilate", dst2);

	Mat dst3, dst4;
	morphologyEx(img, dst3, MORPH_OPEN, element);	// 开操作：先腐蚀，后膨胀
	morphologyEx(img, dst4, MORPH_CLOSE, element);  // 闭操作：先膨胀，后腐蚀
	imshow("open", dst3);
	imshow("close", dst4);

	waitKey();
	return 0;
}