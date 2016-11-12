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
Call CMake to generate build configuration (we use folder ".." that indicate where is the root CMakeList.txt), 
```
$ cmake ..
```
And repeat

```
until finished
$ cmake -DBUILD_SHARED_LIBS=ON ../
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Suggestions

* Running on Continuous Integration (Travis-ci, Jenkins, etc)
* Improve generated documentation
* Add code coverage (gcov, etc)
* Performance tests
* Accept files as input (Try load small blocks)
* Create a RestAPI to use the library
* Implement a frontend to use RestAPI

## Acknowledgments

* Hat tip to anyone who's code was used
* Inspiration
* etc
