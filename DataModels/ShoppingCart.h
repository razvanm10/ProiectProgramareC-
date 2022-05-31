//
// Created by Razvan on 29.05.2022.
//

#ifndef PROIECTPROGRAMARE_SHOPPINGCART_H
#define PROIECTPROGRAMARE_SHOPPINGCART_H

#include "iostream"
#include <vector>
#include "Product.h"
#include "../Services/ShoppingCartService.h"
#include "Stock.h"

class ShoppingCart {

    vector<Product> products = vector<Product>();

public:

    void addProduct(Product productToAdd, Stock productsInStock) {
        for (auto product : productsInStock.getStock()) {
            if (productToAdd.equals(product) == 1) {
                this->products.push_back(productToAdd);
            }
        }
    }

    void deleteProduct(long id) {

    }

    void updateQuantity() {

    }

    void display() {
        for (auto p : this->products) {
            cout << p.getName() << endl;
        }
    }

    double totalPrice() {
        double total = 0;
        for (auto p : this->products) {
            total += p.getPrice();
        }
        return total;
    }

    string productsAsString() {
        string asString = "";
        for (auto p: this->products) {
            asString += p.toString() + "\n";
        }
        return asString;
    }

};


#endif //PROIECTPROGRAMARE_SHOPPINGCART_H
