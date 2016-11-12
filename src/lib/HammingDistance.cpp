#include "HammingDistance.h"


namespace {
    void validate_binary(char c)
    {
        if ((c != '0') && (c != '1'))
        {
            throw InvalidBinaryNumber("Accept only 0 or 1 in strings");
        }
    }
}

InvalidBinaryNumber::InvalidBinaryNumber(const std::string &message) : runtime_error(message) {
}
InvalidBinaryBlobSize::InvalidBinaryBlobSize(const std::string &message) : runtime_error(message) {

}

HammingDistance::HammingDistance() {
}
HammingDistance::~HammingDistance() {
}

int32_t HammingDistance::calculate(const std::string &blob_a, const std::string &blob_b) const {
    if (blob_a.size() != blob_b.size())
    {
        throw InvalidBinaryBlobSize("The blob sizes must be equal");
    }

    int32_t distance = 0;
    for (size_t i = 0; i < blob_a.size(); ++i) {
        validate_binary(blob_a[i]);
        validate_binary(blob_b[i]);
        distance += (blob_a[i] != blob_b[i]) ? 1 : 0;
    }

    return distance;
}



