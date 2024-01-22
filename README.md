# LittleDB

![license](https://img.shields.io/github/license/XilongYang/littledb?style=flat-square)
![cmake](https://img.shields.io/badge/CMake%20Version-%3E%3D3.16-green?style=flat-square)
![cpp](https://img.shields.io/badge/C%20Version-11-green?style=flat-square)
![unity](https://img.shields.io/badge/Unity-2.5.2-green?style=flat-square)

A simple C library provides an embedded K-V database.

## Build

Just do this, make sure you had installed the Googletest library:

```bash
git clone https://github.com/XilongYang/littledb.git
cd littledb
mkdir -p build && cd build
cmake .. .
make
```

To test the library, you can simply do this:

```bash
cd build/test
./all_test
```
