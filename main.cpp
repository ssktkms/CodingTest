#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;

int main(int argc, char *argv[])
{

    std::cout << "Hello, World!!" << std::endl;
    int a = 100;
    int *pInt = &a;
    std::cout << *pInt << std::endl;

    int x { 3 };
    int b[] { 0, 1, 2, 3 };
    struct S1 { int a, b; } s { 0, 1 };
    std::vector<int> v { 0, 1, 2, 3 };

    std::vector<int> v2{1, 2, 3, 4, 5, 6, 7};
    for(auto& x : v2) {
        if(x == 2) x = 222;
        cout << x << endl;
    }

    cout << cv::getVersionRevision() << endl;

    return 0;
}
