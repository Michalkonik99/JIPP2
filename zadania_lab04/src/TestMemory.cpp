//
// Created by michal on 11/2/21.
//

#include "TestMemory.h"

TestMemory::TestMemory() {
    std::cout << "Konstruktor nie zostal wywolany" << std::endl;

    arr = new int [1024];
}

TestMemory::~TestMemory() {
    std::cout << "Destruktor: usuwanie tablicy." << std::endl;
    delete [] arr;
}

void TestMemory::pause(){
    std::cout << "Aby kontunuowac wcisnij dowolony przycisk ...";
    getchar();
    getchar();
}