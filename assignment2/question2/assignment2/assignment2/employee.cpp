#include"employee.h"
#include <iostream>
#include<cmath>
#include <iostream>
using namespace std;




int employee::calc_salary(int time_worked) {
	//if the employee is an hourly employee
	if (pay_type == 'H') {
		//multiply the hours worked by their payrate
		return time_worked * pay_rate;
	}
	//if the employee has a salary
	else if (pay_type == 'S') {
		//returns their weekly salary
		return pay_rate / 52;
	}
}

int employee::calc_health_care(int hours_woked) {
	//calculate the employees salary
	int salary = this->calc_salary(hours_woked);
	//if the employees is hourly...
	if (pay_type == 'H') {
		//hourly employess pay 8% of their salary for health care
		total_health_care_contr = (salary * .08) + total_health_care_contr;
		return salary * .08;
	}
	//if the employess is salaried
	else if (pay_type == 'S') {
		//hourly employess pay 3% of their salary for health care
		total_health_care_contr = (salary * .03) + total_health_care_contr;
		return salary *.03;
	}
}

int employee::calc_vacation_days(int days_worked) {
	//if the employee is hourly ...
	if (pay_type == 'H') {
		//hourly employess get a vacation day for 5% of hours worked, rounded
		vacation_days = round(days_worked * .05);
		return round(days_worked * .05);
	}
	else if (pay_type == 'S') {
		//salaried employees get a fixed vacation days of 10
		return 10;
	}
}

void employee::print() {
	//prints all the variables
	cout << endl << "Pay type: " << pay_type << " Payrate: " << pay_rate << " Number of vacation days: " << vacation_days << " Amount contributed to healthcare: " << total_health_care_contr << endl;
}