#ifndef UTILS_H
#define UTILS_H

#include <inttypes.h>
namespace led {
    struct grb_s{
        uint32_t g:8;
        uint32_t r:8;
        uint32_t b:8;
    };

    struct rgb_s{
        uint32_t r:8;
        uint32_t g:8;
        uint32_t b:8;
    };

    uint32_t grb2rgb(uint32_t grb);
    uint32_t rgb2grb(uint32_t rgb);
}
#endif // UTILS_H
