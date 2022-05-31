//
// Created by Razvan on 29.05.2022.
//

#ifndef PROIECTPROGRAMARE_PRODUCT_H
#define PROIECTPROGRAMARE_PRODUCT_H

#include <string>
#include "BaseClass.h"
#include "../Helpers/ProductEnum.h"

using namespace std;

class Product {

    int id;

    ProductEnum productType;

    string productName;

    double productPrice;



public:

    static int counter;

    Product(ProductEnum productType, string productName, double productPrice) {
        this->id = counter++;
        this->productType = productType;
        this->productName = productName;
        this->productPrice = productPrice;
    }

    int getId() {
        return this->id;
    }

    void setPrice(double newValue) {
        this->productPrice = newValue;
    }

    void setId(long newValue) {
        this->id = newValue;
    }

    ProductEnum getType() {
        return this->productType;
    }

    string getName() {
        return this->productName;
    }

    double getPrice() {
        return this->productPrice;
    }

    bool equals(Product product) {
        return this->id == product.getId();
    }

    string toString() {
        return to_string(this->id) + " " + this->productName + " " + to_string(this->productType) + " " + to_string(this->productPrice) + "\n";
    }

};


#endif //PROIECTPROGRAMARE_PRODUCT_H
