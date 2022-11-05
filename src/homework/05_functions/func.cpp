//add include statements
#include "func.h"
//add function code here

double get_gc_content(string dna) {
    float gcc = 0;
    //    percent of string that is 'C' or 'G'
    for (int i = 0; i < dna.length(); i++) {
        if (dna[i] == 'C' || dna[i] == 'G') gcc++;
    }
    //    return % double
    return gcc/dna.length()*100;
}

string get_reverse_string(string dna) {
    //    reverse string using loop
    string reverseddna;
    for (int i = dna.length()-1; i >= 0; i--) {
        reverseddna+=dna[i];
    }
    //    return string
    return reverseddna;
}
string get_dna_complement(string dna) {
    //    swap 'A' and 'T', 'C' and 'G'
    dna = get_reverse_string(dna);
    for (int i = 0; i < dna.length(); i++) {
        if (dna[i] == 'A') dna[i] = 'T';
        else if (dna[i] == 'T') dna[i] = 'A';
        if (dna[i] == 'C') dna[i] = 'G';
        else if (dna[i] == 'G') dna[i] = 'C';
    }
    //    return string
    return dna;
}

void menu() {
    int choice;
    string dna;
    cout << "\n\nGC Content / DNA Complement Program!";
    do {
        cout << "\n\nYour Choices:\n"
             << "1 - Get GC Content\n"
             << "2 - Get DNA Complement\n"
             << "3 - Exit\n"
             << "Please enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Please enter a DNA sequence: ";
            cin >> dna;
            cout << "The GC content of " << dna
                 << " is " << get_gc_content(dna) << "%.";
        }
        if (choice == 2) {
            cout << "Please enter a DNA sequence: ";
            cin >> dna;
            cout << "The DNA complement of " << dna << " is: "
                 << get_dna_complement(dna);
        }
        if (choice <1 || choice > 3) {
            cout << "Please enter 1, 2, or 3 to use the menu.";
        }
    }
    while (choice != 3);
    cout<< "Goodbye!";
};