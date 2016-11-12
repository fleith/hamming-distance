#pragma once
#ifndef HAMMING_DISTANCE_HAMMINGDISTANCE_H
#define HAMMING_DISTANCE_HAMMINGDISTANCE_H


#include <cstdint>
#include <string>

/**
 * InvalidBinaryNumber exception class
 */
class InvalidBinaryNumber : public std::runtime_error {
public:

    /**
     * Create a exception to indicate invalid binary number
     * @param message Message to inform the problem
     * @return Exception object
     */
    InvalidBinaryNumber(const std::string &message);
};

/**
 * InvalidBinaryBlobSize exception class
 */
class InvalidBinaryBlobSize : public std::runtime_error {
public:

    /**
     * Create a exception to indicate not equal sizes on blobs
     * @param message Message to inform the problem
     * @return Exception object
     */
    InvalidBinaryBlobSize(const std::string &message);
};

/**
 * HammingDistance class
 * @see https://en.wikipedia.org/wiki/Hamming_distance
 */
class HammingDistance {
public:
    /**
     * Create a HammingDistance object
     * @return
     */
    HammingDistance();

    /**
     * Clear and destroy the HammingDistance object
     */
    ~HammingDistance();

    /**
     * Calculate the Hamming distance of two binary blobs
     * @param blob_a String with 0 or 1 chars
     * @param blob_b String with 0 or 1 chars
     * @return The Hamming distance between blob_a and blob_b
     */
    int32_t calculate(const std::string &blob_a, const std::string &blob_b) const;

};


#endif //HAMMING_DISTANCE_HAMMINGDISTANCE_H
