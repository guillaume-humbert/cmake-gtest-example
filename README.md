# CMake With GoogleTest Example

This toy project is to demonstrate how to use CMake with GoogleTest to implement
automated testing - which can be unit testing, integration testing...

It is useful as a quick reference when setting a new project.

## Requirements

* CMake (https://cmake.org/) - make sure the `cmake` executable is in the path. If you
  use an IDE, you may have it pre-packaged. In `vscode`, you can use the `CMake Tools`
  extension.
* A C++ compiler.

## Getting Started

Clone the `googletest` source repository in the workspace folder.

```
$ git clone git@github.com:google/googletest
```

Build the project:

```
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
```

Run the tests:

```
$ ctest -T test --output-on-failure
```