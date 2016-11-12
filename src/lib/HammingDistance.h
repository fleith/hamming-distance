#pragma once
#ifndef HAMMING_DISTANCE_HAMMINGDISTANCE_H
#define HAMMING_DISTANCE_HAMMINGDISTANCE_H


#include <cstdint>
#include <string>

class InvalidBinaryNumber: public std::runtime_error
{
public:
    InvalidBinaryNumber(const std::string& message);
};

class InvalidBinaryBlobSize: public std::runtime_error
{
public:
    InvalidBinaryBlobSize(const std::string& message);
};

class HammingDistance {
public:
    HammingDistance();
    ~HammingDistance();

    int32_t calculate(const std::string& blob_a, const std::string& blob_b) const;

};


#endif //HAMMING_DISTANCE_HAMMINGDISTANCE_H
