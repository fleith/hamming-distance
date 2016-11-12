#pragma once
#ifndef HAMMING_DISTANCE_HAMMINGDISTANCE_H
#define HAMMING_DISTANCE_HAMMINGDISTANCE_H


#include <cstdint>
#include <string>

class HammingDistance {
public:
    HammingDistance();
    ~HammingDistance();

    int32_t calculate(const std::string& a, const std::string& b) const;
};


#endif //HAMMING_DISTANCE_HAMMINGDISTANCE_H
