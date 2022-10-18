#pragma once


class employee {
protected:
	char pay_type;
	//if pay type is s, that means they are salaried, if it is an h, it means they are hourly
	int pay_rate;
	//the pay rate for the employee
	int vacation_days;
	//variable tio hold the amount of vacation days
	int total_health_care_contr;
	//variable to hold how much the employee has contributed to healthcare

public:

	int calc_salary(int);
	//takes how many hours the employee has worked and return the employees salary

	int calc_health_care(int);
	//takes how many hours the employee has worked and adds on to how much the employee has contributed to their helath care and returns the amount

	int calc_vacation_days(int);
	//calculates and returns the employess the amount of vaction days empoyees have

	void print();
	//prints the employees info
};