//
// Created by Razvan on 29.05.2022.
//

#ifndef PROIECTPROGRAMARE_STOCK_H
#define PROIECTPROGRAMARE_STOCK_H


#include <vector>
#include "Product.h"
#include "../Services/FileService.h"

class Stock {

    vector<Product> stockProducts = vector<Product>();

    FileService fileService;

public:

    Product findById(long id) {
        for (auto product: this->stockProducts) {
            if (product.getId() == id) {
                return product;
            }
        }
    }

    void addProduct(Product product) {
        fileService.write(product);
        this->stockProducts.push_back(product);
    }

    vector<Product> getStock() {
        return this->stockProducts;
    }

};


#endif //PROIECTPROGRAMARE_STOCK_H
