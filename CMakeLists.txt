cmake_minimum_required(VERSION 3.20)
project(book-learning VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ====== C++ ======

# C++_Primer_Plus
add_subdirectory(src/C++/C++_Primer_Plus)

# ====== Net ======

# HyperText_Transfer_Protocol
add_subdirectory(src/Net/HyperText_Transfer_Protocol)