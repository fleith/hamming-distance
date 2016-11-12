[![Build Status](https://travis-ci.org/fleith/hamming-distance.svg?branch=master)](https://travis-ci.org/fleith/hamming-distance)

# Hamming distance calculator

Library that calculates the hamming distance for 2 binary input blobs and CLI to use it.

## Getting Started

These instructions will guide you to build the project, running and testing.

### Prerequisites

Before build the project you need to install on your machine the follow dependencies:

* boost c++ 1.62 [required]: used to validate program arguments
* cmake 3.6 [required]: build generator
* python 3.5 [required]: used to run acceptance tests (integration tests)
* c++11 compiler [required]
* doxygen [optional] : used to generate source documentation


### Build

A step by step series of examples that tell you how build the project.

First step you need to create a new directory on root project (hamming-distance folder).

```
$ mkdir bin
```
Enter inside the folder,
```
$ cd bin
```
Call CMake to generate build configuration (we use folder ".." that indicate where is the root CMakeLists.txt), 
```
$ cmake ..
```
Now you can call the make file
```
$ make
```

After build the project you can run tests and the CLI.

## Running the tests

After you call make to generate the binaries, follow:

Run unit tests and acceptance tests (using CTest)
```
$ make test
```

If you like to run detailed unit tests, follow:
```
$ ./src/test/hamming_distance_tests
```

If you like to run detailed acceptance tests, follow:
```
$ python3 ../src/test/test_acceptance.py src/app/hdc
```

## Running the CLI

For running the CLI, follow:

Try call the help command
```
$ ./src/app/hdc --help
```

Calculate the Hamming distance
```
$ ./src/app/hdc 11001011 00111001
```

Calculate the Hamming distance specifying the blobs
```
$ ./src/app/hdc --blob1 11001011 --blob2 00111001
```

In the examples above the result is 5.

## License

This project is licensed under the GNU GENERAL PUBLIC LICENSE - see the [LICENSE](LICENSE) file for details

## Suggestions

* Running on Continuous Integration (Travis-ci, Jenkins, etc)
* Improve generated documentation
* Add code coverage (gcov, etc)
* Performance tests
* Accept files as input on CLI (Try load small blocks)
* Create a RestAPI to use the library
* Implement a frontend to use RestAPI

