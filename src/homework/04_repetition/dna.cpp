//add include statements
#include <dna.h>

//add function(s) code here
int factorial(int num) {
    int sum = num;
    while (num > 1) {
        num--;
        sum*=num;
    }
    return sum;
}

int gcd(int x, int y) {
//    if (x > y) {
//        return x-y;
//    }
//    if (x < y) {
//        return y-x;
//    }
//    else return x;
    int swap;
    while (x != y) {
        if (x < y) {
            swap = x;
            x = y;
            y = swap;
        }
        if (x > y) {
            x = x-y;
        }
    }
    return x;

}

void *menu() {
    int choice, num, x, y;
    do {
        cout << "\n\nYour Choices:\n"
        << "1 - Factorial\n"
        << "2 - Greatest Common Divisor\n"
        << "3 - Exit\n"
        << "Please enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Please choose a number to see its factorial: ";
            cin >> num;
            cout << "The factorial of " << num << " is " << factorial(num);
        }
        if (choice == 2) {
            cout << "Please choose two numbers to find out their g"
            << "reatest common divisor.\n First number: ";
            cin >> x;
            cout << "Second number: ";
            cin >> y;
            cout << "The GCD of " << x << " and " << y << " are: " << gcd(x,y);
        }
        if (choice <1 || choice > 3) {
            cout << "Please enter 1, 2, or 3 to use the menu.";
        }
    }
    while (choice != 3);
    cout<< "Goodbye!";
};