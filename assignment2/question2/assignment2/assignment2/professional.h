#pragma once
//#include"employee.h"
using namespace std;

class professional : public employee {

public:
	
	//setup a professional employee
	professional(int payrate) {
		//sets their pay type to salaried
		pay_type = 'S';
		//sets vacation days to 10
		vacation_days = 10;
		//their heathcare will be defaulted to zero
		total_health_care_contr = 0;
		//sets their payrate
		pay_rate = payrate;
	}
};