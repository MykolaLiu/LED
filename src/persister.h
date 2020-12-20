#ifndef PERSISTER_H
#define PERSISTER_H

#include <bitset>
#include <iostream>


#include "utils.h"

class IPersister {
public:
    IPersister() {}
    virtual ~IPersister() {}

};

template <int QUANTITY>
class Persister: public IPersister{
    std::bitset<24> m_leds[QUANTITY];
public:
    Persister() {};
    ~Persister() {};
    void set(size_t index, uint32_t rgb) {
        rgb = led::rgb2grb(rgb);
        m_leds[index] = rgb;
    }

    uint32_t get(size_t index) {
        return led::grb2rgb(m_leds[index].to_ulong());
    }

    void dump() {
        int i = 0;
        for(auto it: m_leds) {
            std::cout << i++ << " : ";
            std::cout << it ;
            std::cout << std::endl;
        }
    }
};

#endif // PERSISTER_H
