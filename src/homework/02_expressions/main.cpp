﻿//write include statements
#include <iostream>
#include <hwexpressions.h>

//write namespace using statement for cout
//using namespace std;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
    std::cin >> meal_amount;
    tax_amount = get_sales_tax_amount(meal_amount);
    std::cin >> tip_rate;
    tip_amount = get_tip_amount(meal_amount, tip_rate);
    total = tip_amount + tax_amount + meal_amount;
    std::cout << "Meal Amount:  " << meal_amount;
    std::cout << "\nSales Tax:  " << tax_amount;
    std::cout << "\nTip Amount: " << tip_amount;
    std::cout << "\nTotal:      " << total;
	return 0;
}
