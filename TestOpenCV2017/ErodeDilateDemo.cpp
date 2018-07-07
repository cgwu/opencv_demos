#include "stdafx.h"

using namespace cv;

int main_ErodeDilateDemo() {
	Mat img = imread("finger_print.jpg");
	imshow("origin", img);

	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3));

	Mat dst1,dst2;

	erode(img, dst1, element);	// ��ʴ (��԰�ɫ)
	dilate(img, dst2, element); // ���� (��԰�ɫ)
	imshow("erode", dst1);
	imshow("dilate", dst2);

	Mat dst3, dst4;
	morphologyEx(img, dst3, MORPH_OPEN, element);	// ���������ȸ�ʴ��������
	morphologyEx(img, dst4, MORPH_CLOSE, element);  // �ղ����������ͣ���ʴ
	imshow("open", dst3);
	imshow("close", dst4);

	waitKey();
	return 0;
}