#ifndef UNTITLED_MENU_H
#define UNTITLED_MENU_H

#include <iostream>
#include <set>
#include <string>
#include <fstream>
#include <sstream>
#include "Student.h"
#include "Slot.h"
#include "Schedule.h"
#include <list>
#include "Data.h"


using namespace std;
class Menu {
public:
    void mainMenu();
    void run();
    void MenuUC();
    void MenuStudents(Data &obj);
    void readStudents(Data &obj);
    void MenuTurmas();
    void readTurmas();
    void readUC();
    void UCcount();
    vector<pair<UC,Class>> classuc;
    vector<Student> student;
    set<UC> ucs;
    list<UC> ucs1;

};


#endif //UNTITLED_MENU_H
