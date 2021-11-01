#include "../include/zadanie_01.h"

int get_brands_number(samochod cars[], int arr_len){
    int brands_sum = arr_len;

    for(int i = 0; i < arr_len - 1; ++i){
        for(int j = i + 1; j < arr_len; ++j){
            if(cars[i].brand == cars[j].brand) {
                brands_sum--;
                break;
            }
        }
    }

    return brands_sum;
}

int get_newest_car(samochod cars[], int arr_len){
    int id = 0;

    for(int i = 0; i < arr_len; i++){
        if(cars[id].year < cars[i].year)
            id = i;
    }

    return id;
}
