libcxx_cmake
============

This is an example project to embed libc++ in your project and build with clang

# How to build

Assume that you want to build the project in directory "build"

0. export CXX=/PATH/TO/CLANG
1. mkdir build
2. cd build
3. cmake ../
4. make  # or make -j$(nproc)  to build things in parallel

Now you can run the example program src/foo
