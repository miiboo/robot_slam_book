#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat img=cv::imread("1.jpg");
    cv::imshow("[img1]",img);
    cv::waitKey(0);

    return 0;
}
