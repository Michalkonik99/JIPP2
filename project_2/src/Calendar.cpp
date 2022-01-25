#include "Calendar.h"

using namespace std;

Calendar::Calendar() {
    int year = currentDate.getYear();
    int month = currentDate.getMonth();
    int numberOfDays = currentDate.getDaysInMonth();

    for(int d = 1; d <= numberOfDays; ++d)
        days.emplace_back(d, month, year);
}

Calendar::~Calendar() {
    cout << "Closing the calendar!" << endl;

    for(vector<Note*>::iterator iter = notes.begin(); iter != notes.end(); ++iter)
        delete *iter;
}

void Calendar::print() {
    int numberOfDays = currentDate.getDaysInMonth();
    int year = currentDate.getYear();
    int month = currentDate.getMonth();
    int leadingDays[] = {0, 3, 2, 5, 0, 4, 5, 1, 4, 6, 2, 4};

    if(month < 3)
        year--;

    int firstDay = (year + year / 4 - year / 100 + year / 400 + leadingDays[month - 1] + 0) % 7;


    //for(int month = 1; month <= 12; ++month){
    //    int year = currentDate.getYear();
    //    if(month < 3)
    //        year--;

    //    int firstDay = (year + year / 4 - year / 100 + year / 400 + leadingDays[month - 1] + 0) % 7;
    //    cout << "Month: " << month << endl;
    //    cout << "first day: " << firstDay + 1 << endl;
    //}

    for (int i = 0; i < 7; ++i)
        cout << setw(5) << daysNamesShort[i];

    cout << endl;

    if(firstDay != 6){
        for(int i = 0; i <= firstDay; ++i)
            cout << setw(5) << "";
    }

    for(int i = 0; i < numberOfDays; ++i){
        cout << setw(5) << days[i].getDay();
        days[i].setName(daysNames[(i + firstDay) % 7]);

        if((i + firstDay + 2) % 7 == 0)
            cout << endl;
    }

    cout << endl;
    menu();
}

void Calendar::printDay(int dayID){
    dayID--;
    bool hasNote = false;
    int dayNumber = days[dayID].getDay();
    int monthNumber = days[dayID].getMonth();
    int yearNumber = days[dayID].getYear();

    cout << endl << "---------------------------" << endl << endl;
    cout << days[dayID].getName() << endl;
    cout << dayNumber << "." << monthNumber << "." << yearNumber << endl;

    for(auto iter: notes){
        if(iter->getYear() == yearNumber && iter->getMonth() == monthNumber && iter->getDay() == dayNumber){
            iter->print();
            hasNote = true;
        }
    }

    if(!hasNote)
        cout << "Brak notatki" << endl;

    cout << endl << "---------------------------";
}

void Calendar::menu(){
    cout << "---------- MENU ----------" << endl;
    cout << "1. Next month" << endl;
    cout << "2. Previous month" << endl;
    cout << "3. Add text note" << endl;
    cout << "4. Add list note" << endl;
    cout << "5. Print all notes" << endl;
    cout << "6. Print the calendar" << endl;
    cout << "7. Print a day" << endl;
    cout << "0. End programm" << endl;

    int option = -1;
    cout << "Choose option: " << endl;
    cin >> option;

    if(option == 1)
        nextMonth();

    else if(option == 2)
        previousMonth();

    else if(option == 3){
        Note* note =  new TextNote();
        note->setDate();
        note->setTitle();
        note->setContent();
        notes.push_back(note);
        menu();
    }

    else if(option == 4){
        Note* note =  new ListNote();
        note->setDate();
        note->setTitle();
        note->setContent();
        notes.push_back(note);
        menu();
    }

    else if(option == 5){
        for(auto iter: notes){
            iter->print();
            cout << iter->getDay() << endl;
        }
    }

    else if(option == 6)
        print();

    else if(option == 7){
        int userDay = 0;
        cout << "Enter day number: ";
        cin >> userDay;

        printDay(userDay);
        menu();
    }

    else if(option == 0) {}


//  switch(option){
//      case 1:
//          nextMonth();
//          break;
//
//      case 2:
//          previousMonth();
//          break;
//
//      case 3: {
//          Note* note =  new TextNote();
//          note->setDate(currentDate.getYear(), currentDate.getMonth(), currentDate.getDay());
//          note->setTitle();
//          note->setContent();
//          notes.push_back(note);
//          menu();
//      }
//          break;
//
//      case 4:{
//          Note* note =  new ListNote();
//          note->setDate(currentDate.getYear(), currentDate.getMonth(), currentDate.getDay());
//          note->setTitle();
//          note->setContent();
//          notes.push_back(note);
//          menu();
//      }
//          break;
//
//      case 5:
//          for(auto iter: notes){
//              iter->print();
//              cout << iter->getDay() << endl;
//          }
//          break;
//
//      case 6:
//          print();
//          break;
//
//      case 7:
//          int userDay = 0;
//          cout << "Enter day number: ";
//          cin >> userDay;
//
//          printDay(userDay);
//          break;
//
//      case 0:
//          break;
//  }

}

void Calendar::nextMonth() {
    currentDate.incrementMonth();
    print();
}

void Calendar::previousMonth() {
    currentDate.decrementMonth();
    print();
}