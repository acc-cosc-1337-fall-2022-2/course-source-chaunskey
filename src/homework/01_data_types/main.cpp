//write include statements
#include <iostream>
#include <data_types.h>

//write namespace using statement for cout
//int multiply_numbers(int num);

using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
    int num;
	cin >> num;
    int result = multiply_numbers(num);
    cout << result;
    int num1 = 4;
    result = multiply_numbers(num1);
    cout << result;
	return 0;
}