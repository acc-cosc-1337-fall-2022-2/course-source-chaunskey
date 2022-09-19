//write include statement for decisions header
#include <string>
#include <decisions.h>
#include <iostream>
//Write code for function(s) code here
std::string get_letter_grade_using_if(int grade) {
    if (grade >= 9) {
        return "A";
    }
    if (grade >= 8 and grade < 9) {
        return "B";
    }
    if (grade >= 7 and grade < 8) {
        return "C";
    }
    if (grade >= 6 and grade < 7) {
        return "D";
    }
    if (grade < 6) {
        return "F";
    }
}

std::string get_letter_grade_using_switch(int grade) {
    switch (grade) {
        case 6:
            return "D";
            break;
        case 7:
            return "C";
            break;
        case 8:
            return "B";
            break;
        case 9:
            return "A";
            break;
        case 10:
            return "A";
            break;
        default:
            return "F";

    }
}