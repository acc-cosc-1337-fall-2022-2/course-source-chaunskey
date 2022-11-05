//write include statements
#include <iostream>
#include <decisions.h>

int main() 
{
    int choice, grade;
    std::cout << "        MAIN MENU\n"
                 "\n"
                 "1-Letter grade using if\n"
                 "2-Letter grade using switch\n"
                 "3-Exit\n";
    std::cin >> choice;
    if (choice == 1 or choice == 2) {
        std::cout << "Please enter number grade: ";
        std::cin >> grade;
        if (grade < 0 or grade > 100) {
            std::cout << "What? That's not a real grade. "
                         "Real grades are between 0 and 100!";
        } else {
            grade = grade / 10;
            switch (choice) {
                case 1:
                    std::cout << get_letter_grade_using_if(grade);
                    break;
                case 2:
                    std::cout << get_letter_grade_using_switch(grade);
                    break;
            }
        }
    }
	return 0;
}