#include "Stop.h"

Stop::Stop(long id, const string &name, double latitude, double longitude){
    this->id = id;
    this->name = name;
    this->latitude = latitude;
    this->longitude = longitude;
}