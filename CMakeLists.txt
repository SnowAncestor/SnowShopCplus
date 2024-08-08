cmake_minimum_required(VERSION 3.28)
project(ShopInventory)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShopInventory main.cpp
        ITEMS.cpp
        ITEMS.h)
