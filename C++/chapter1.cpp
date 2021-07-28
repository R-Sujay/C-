#include <opencv2/imgcodecs.hpp>
#include <opencv2/highui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// images

void main(){
    string path = "Resources/cards.jpg";
    Mat img = imread(path);
    imshow("Image", img);
    waitKey(0);
}