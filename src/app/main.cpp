#include <iostream>
#include "HammingDistance.h"
#include <boost/program_options.hpp>

namespace po = boost::program_options;

int main(int argc, char *argv[]) {
    try {

        po::options_description desc("Hamming distance calculator - Version 1.0\n"
                                             "more information check https://en.wikipedia.org/wiki/Hamming_distance\n"
                                             "\nUsage: hdc blob1 blob2\n"
                                             "   or: hdc --blob1 arg --blob2 arg\n\n"
                                             "Examples: hdc 101 001 \n"
                                             "      or: hdc --blob1 101 --blob2 001\n"
                                             "\nArguments");
        desc.add_options()
                ("help", "produce help message")
                ("blob1", po::value<std::vector<std::string>>(), "binary blob one")
                ("blob2", po::value<std::vector<std::string>>(), "binary blob two");

        po::positional_options_description p;
        p.add("blob1", 1).add("blob2", 1);

        po::variables_map vm;
        po::store(po::command_line_parser(argc, argv).
                options(desc).positional(p).run(), vm);
        po::notify(vm);

        if (vm.count("help")) {
            std::cout << desc << "\n";
            return 0;
        }

        if (vm.count("blob1") && vm.count("blob2")) {
            auto blob1 = vm["blob1"].as<std::vector<std::string>>().front();
            auto blob2 = vm["blob2"].as<std::vector<std::string>>().front();

            HammingDistance hd;
            auto distance = hd.calculate(blob1, blob2);
            std::cout << "Hamming distance is " << distance << std::endl;
            return 0;
        } else {
            std::cout << "\nYou must specify two binary blobs!\n\n";
            std::cout << desc << "\n";
        }
    }
    catch (std::exception &e) {
        std::cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch (...) {
        std::cerr << "Exception of unknown type!\n";
        return 1;
    }

    return 0;
}
