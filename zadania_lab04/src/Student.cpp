#include "Student.h"

Student::Student(string name, string last_name, int album_number, int questions, int correct_answers){
    this->name = name;
    this->last_name = last_name;
    this->album_number = album_number;
    this->questions = questions;
    this->correct_answers = correct_answers;
}

double Student::correct_answers_ratio() {
    return (double)correct_answers / (double)questions;
}