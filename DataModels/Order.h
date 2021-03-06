//
// Created by Razvan on 29.05.2022.
//

#ifndef PROIECTPROGRAMARE_ORDER_H
#define PROIECTPROGRAMARE_ORDER_H


#include <vector>
#include "Product.h"
#include "vector"
#include "ShoppingCart.h"
class Order {

    ShoppingCart shoppingCartProducts;

public:

    Order(ShoppingCart myShoppingCart) {
        this->shoppingCartProducts = myShoppingCart;
    }

    string getOrder() {
        return "Products: \n" + shoppingCartProducts.productsAsString() + "\n" + "Price: " + to_string(shoppingCartProducts.totalPrice());
    }

};


#endif //PROIECTPROGRAMARE_ORDER_H
