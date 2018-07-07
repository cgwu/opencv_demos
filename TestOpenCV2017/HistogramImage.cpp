/*
÷±∑ΩÕºº∆À„
*/
#include "stdafx.h"

using namespace std;
using namespace cv;

int main_histogram_image()
{
	Mat src = imread("cg.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	imshow("origin", src);

	Mat dstHist;
	int dims = 1;
	float hrange[] = { 0,255 };
	const float *ranges[] = { hrange }; 
	int size = 256;
	int channels = 0;

	calcHist(&src, 1, &channels, Mat(), dstHist, dims, &size, ranges);

	double minvalue = 0, maxvalue = 0;
	minMaxLoc(dstHist, &minvalue, &maxvalue);

	Mat dstImage(size, size, CV_8U, Scalar(255));
	for (int i = 0; i < 256; i++)
	{
		float binvalue = dstHist.at<float>(i);
		int realvalue = cvRound(binvalue * 256 / (maxvalue - minvalue));  //?
		rectangle(dstImage, Point(i, size - 1), Point(i, size - realvalue), Scalar(0));	//?
	}
	imshow("Histogram", dstImage);

	waitKey();
	return 0;
}