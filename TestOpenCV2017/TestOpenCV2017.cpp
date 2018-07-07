// TestOpenCV2017.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
using namespace cv;

int main_TestOpenCV2017()
//int main()
{
	//Mat img = imread("cg.jpg");
	Mat img = imread("cg.jpg", CV_LOAD_IMAGE_GRAYSCALE);
	cout << img.depth() << endl;
	namedWindow("abc照片");
	imshow("abc照片", img);
	imwrite("cg_write.jpg", img);
	waitKey(0);

    return 0;
}

