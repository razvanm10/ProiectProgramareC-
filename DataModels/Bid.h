//
// Created by Razvan on 01.06.2022.
//

#ifndef PROIECTPROGRAMARE_BID_H
#define PROIECTPROGRAMARE_BID_H
#include "iostream"
#include "Product.h"
using namespace std;

class Bid {

    int discount;

public:

    Bid(int dicsount) {
        this->discount = discount;
    }

    void apply(Product product) {
        double newPrice = product.getPrice() - ((this->discount * 100) / product.getPrice());
        product.setPrice(newPrice);
    }

};


#endif //PROIECTPROGRAMARE_BID_H
