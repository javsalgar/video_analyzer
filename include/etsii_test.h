#ifndef ETSII_TEST_H
#define ETSII_TEST_H

#include "roi.h"

namespace etsii {

    const struct video_analyzer::ROI test_1_frame_roi(403,260, 40, 15);
    const struct video_analyzer::ROI test_1_end_frame_roi(352, 598, 88, 15);

    const int test_1_begin = 9985;
    const int test_1_end   = 21500;
    const struct video_analyzer::ROI test_1_roi(342, 256, 573, 397);

    const struct video_analyzer::ROI test_2_frame_roi(1024,381, 13, 20);
    const int test_2_frame = 25000;
    const int test_2_characters = 23499;
    const struct video_analyzer::ROI test_2_roi(7, 289, 161, 41);

    const struct video_analyzer::ROI test_3_frame_roi(94, 101, 1135, 55);
    const int test_3_begin = 44215;
    const int test_3_end = 48127;
    const struct video_analyzer::ROI test_3_roi(7, 242, 85, 34);

    const struct video_analyzer::ROI test_4_frame_roi(145, 179, 69, 16);
    const int test_4_frame = 48227;
    const int test_4_clicks = 1000;
    const struct video_analyzer::ROI test_4_roi(2, 242, 84, 16);

    const struct video_analyzer::ROI test_5_frame_roi(202, 273, 130, 19);
    const int test_5_begin = 55227;
    const int test_5_end = 66244;
    const struct video_analyzer::ROI test_5_roi(500, 548, 368, 48);


    const struct video_analyzer::ROI test_5_roi_2(49, 119, 73, 17);
    const struct video_analyzer::ROI test_5_roi_3(146, 300, 200, 50);

}

#endif // ETSII_TEST_H

