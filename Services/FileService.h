//
// Created by Razvan on 29.05.2022.
//

#ifndef PROIECTPROGRAMARE_FILESERVICE_H
#define PROIECTPROGRAMARE_FILESERVICE_H



#include "../DataModels/Product.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
class FileService {


public:

    void write(Product product) {
        ofstream file;
        file.open("/Users/razvan/CLionProjects/ProiectProgramare/Files/Stock.txt", ios::app);
        file << product.getId() << "\n";
        file << product.getName() << "\n";
        file << to_string(product.getType()) << "\n";
        file.close();

    }

    void read(){
        ifstream fin("/Users/razvan/CLionProjects/ProiectProgramare/Files/Stock.txt");
        string denumire;
        while (getline(fin,denumire)) {
            //fin.ignore();
            cout << denumire << endl;
            int cantitate;
            fin >> cantitate;
            cout << cantitate << endl;
            fin.ignore();
            double pret;
            fin >> pret;
            cout << pret << endl;
            fin.ignore();
//            produse.push_back(Produs(denumire, cantitate, pret));
//        }
        }
        fin.close();
    }
};


#endif //PROIECTPROGRAMARE_FILESERVICE_H
