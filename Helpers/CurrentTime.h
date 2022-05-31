//
// Created by Razvan on 29.05.2022.
//

#ifndef PROIECTPROGRAMARE_CURRENTTIME_H
#define PROIECTPROGRAMARE_CURRENTTIME_H


#include <ctime>
#include <string>

using namespace std;

class CurrentTime {

    time_t ttime = time(0);

    tm *local_time = localtime(&ttime);

    string year = to_string(1900 + local_time->tm_year);

    string month = to_string(1 + local_time->tm_mon);

    string day = to_string(local_time->tm_mday);

public:

    string getCurrentDate() {
        return "Day: " + day + " | Month: " + month + "| Year: " + year;
    }

};


#endif //PROIECTPROGRAMARE_CURRENTTIME_H
