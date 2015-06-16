#include <iostream>
#include "lagdetector.h"
#include "laginfo.h"
#include "roi.h"
#include "etsii_test.h"
#include "frameextractor.h"
#include "textextractor.h"
#include "videofpsmeasurer.h"

using namespace std;

int main()
{
//    std::shared_ptr<cv::VideoCapture> ptr(new cv::VideoCapture("/home/javsalgar/salidausuario1 06_15_2015_05_38_02.avi"));
    std::shared_ptr<cv::VideoCapture> ptr(new cv::VideoCapture("/home/javsalgar/Documents/Dropbox/ETSII/Doctorado/Proy cloud vitualización etsii/Videos Test/AA144pText.mpg"));

    video_analyzer::FrameExtractor f(ptr);

    video_analyzer::VideoFPSMeasurer v_measure(ptr);

    struct video_analyzer::FPSInfo fps_res;

    cv::namedWindow("test");
    cv::imshow("test", f.extractFrame(60, etsii::test_5_roi_3));

    cv::waitKey(0);


    //v_measure.measureFPS(1000,
    //                     1100,
    //                     fps_res, 25, etsii::test_5_roi_2, 180);


    //std::cout << fps_res << std::endl;

//    l.getLags(etsii::test_1_init, etsii::test_1_end,
//              etsii::test_1_roi, res);


//    std::cout << "results:" << std::endl << res << std::endl;

    video_analyzer::TextExtractor t_ext(f.extractFrame(60));

    std::string text_res;


    if (t_ext.getText(etsii::test_5_roi_3, text_res, 200))
    {
        std::replace(text_res.begin(), text_res.end(), 'O', '0');
        int characters;
        std::cout << "\"" << text_res << "\"" << std::endl;
        std::stringstream istr(text_res);
        istr >> characters;
        std::cout << characters << " clickos" << std::endl;
    }

    return 0;
}

