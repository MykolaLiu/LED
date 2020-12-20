#include "utils.h"

namespace led {
    uint32_t grb2rgb(uint32_t grb) {
        grb_s *input = reinterpret_cast<grb_s*>(&grb);
        rgb_s output = {
            .r = input->r,
            .g = input->g,
            .b = input->b,
        };
        return *reinterpret_cast<uint32_t *>(&output);
    }

    uint32_t rgb2grb(uint32_t rgb) {
        rgb_s *input = reinterpret_cast<rgb_s*>(&rgb);
        grb_s output = {
            .g = input->g,
            .r = input->r,
            .b = input->b,
        };
        return *reinterpret_cast<uint32_t *>(&output);
    }
}
