#ifndef HOMEWORK_LAB04_STUDENT_H
#define HOMEWORK_LAB04_STUDENT_H
#include <iostream>
using namespace std;

class Student{
private:
    string name;
    string last_name;
    int album_number;
    int questions;
    int correct_answers;
public:
    Student(string, string, int, int, int);
    double correct_answers_ratio();
};

#endif //HOMEWORK_LAB04_STUDENT_H
