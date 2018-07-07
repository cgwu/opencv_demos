#include "stdafx.h"

using namespace std;
using namespace cv;

int main_PrintImgArr()
{
	Mat img = imread("cg.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	uchar m = img.at<uchar>(1, 1);
	uchar *data = img.ptr<uchar>(1);
	uchar n = data[1];
	cout << (m == n) << endl;
	cout << "m=" << (int)m << endl;
	cout << "depth before convert:" << img.depth() << endl;

	img.convertTo(img, CV_32F);
	cout << "depth after convert:" << img.depth() << endl;
	float m1 = img.at<float>(1, 1);
	cout << "m1=" << m1 << endl;

	getchar();
	return 0;
}