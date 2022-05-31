#include <iostream>

#include "DataModels/Product.h"
#include "DataModels/ShoppingCart.h"
#include "DataModels/Stock.h"

using namespace std;

int main() {

    ShoppingCart shoppingCart;

    Stock stock;

    auto product1 = Product(Monitor, "Monitor cool", 3000.0);
    auto product2 = Product(ProductEnum::Monitor, "Monitor cool", 3000.0);
    auto product3 = Product(ProductEnum::Monitor, "Monitor cool", 3000.0);
    auto product4 = Product(ProductEnum::Monitor, "Monitor cool", 3000.0);
//    stock.addProduct(product1);
//    stock.addProduct(product2);
//    stock.addProduct(product3);
//    shoppingCart.addProduct(product3, stock);
//    stock.addProduct(product2);
//    stock.addProduct(product4);

    FileService fileService;
    fileService.read();

//    shoppingCart.addProduct(product1);
//    shoppingCart.addProduct(product2);
//    shoppingCart.addProduct(product3);
//    shoppingCart.addProduct(product4);
//    shoppingCart.display();

    return 0;
}
