#ifndef HOMEWORK_LAB08_STOP_H
#define HOMEWORK_LAB08_STOP_H

#include <string>
using namespace std;

class Stop {
private:
    long id;
    string name;
    double latitude;
    double longitude;

public:
    Stop(long, const string &, double, double);
};


#endif //HOMEWORK_LAB08_STOP_H
