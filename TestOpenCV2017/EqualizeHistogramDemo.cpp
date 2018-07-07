#include "stdafx.h"
using namespace cv;

int main_EqualizeHistogram() {
	Mat img = imread("fengjing.jpg");
	imshow("origin", img);

	vector<Mat> channels;
	split(img, channels);	// 分离通道
	imshow("0", channels[0]);
	imshow("1", channels[1]);
	imshow("2", channels[2]);

	for (int i = 0; i < channels.size(); i++)
	{
		equalizeHist(channels[0], channels[0]);	// 均衡化
	}

	merge(channels, img);	// 合并通道
	imshow("result", img);

	waitKey();
	return 0;
}