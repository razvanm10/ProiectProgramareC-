cmake_minimum_required(VERSION 3.22)
project(ProiectProgramare)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProiectProgramare main.cpp DataModels/Product.cpp DataModels/Product.h DataModels/ShoppingCart.cpp DataModels/ShoppingCart.h DataModels/Order.cpp DataModels/Order.h DataModels/Stock.cpp DataModels/Stock.h Helpers/CurrentTime.cpp Helpers/CurrentTime.h DataModels/BaseClass.cpp DataModels/BaseClass.h Helpers/ProductEnum.cpp Helpers/ProductEnum.h Services/ShoppingCartService.cpp Services/ShoppingCartService.h Services/FileService.cpp Services/FileService.h DataModels/Bid.cpp DataModels/Bid.h)
