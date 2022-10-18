#pragma once
#pragma once
//#include"employee.h"
using namespace std;


class nonprofessional : public employee {

public:

	

	nonprofessional(int payrate) {
		//sets their payrate to hourly
		pay_type = 'H';
		//set their vaction days to zero
		vacation_days = 0;
		total_health_care_contr = 0;
		pay_rate = payrate;
	}
};