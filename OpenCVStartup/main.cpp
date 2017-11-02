#include "opencv2/opencv.hpp"

using namespace cv;

int main(int, char**)
{
	namedWindow("demo", 1);
	VideoCapture cap(1);
	Mat frame;
	while (1)
	{
		cap >> frame;
		imshow("demo", frame);
		if (waitKey(30) >= 0) break;
	}
}