// assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"employee.h"
#include"nonprofessional.h"
#include"professional.h"

using namespace std;
int main()
{
    //instance of both classes and setting them up with their salary/hourly rate
    nonprofessional Bob(25);
    professional Joe(50000);



 
    cout << "Bob is a non professional while joe is a professional" << endl;
    cout << "Both bob and joe have worked 40 hours this week" << endl << endl;
    cout << "Bob's salary is " << Bob.calc_salary(40) << endl;
    cout << "Joe's salary is " << Joe.calc_salary(40) << endl;
    cout << "nonprofessionals get vacation days for 5% of the hours they worked(rounded)" << endl;
    cout << "Bob has " << Bob.calc_vacation_days(40) << " vacation days" << endl;
    cout << "Joe has " << Joe.calc_vacation_days(40) << " vacation days" << endl;
    cout << "nonprofessinals pay 8% of there salary towards health care while professionals pay 3%" << endl;
    cout << "Bob has paid " << Bob.calc_health_care(40) << " towards health care" << endl;
    cout << "Joe has paid " << Joe.calc_health_care(40) << " towards health care" << endl;
    cout << endl << endl;
    Bob.print();
    cout << endl;
    Joe.print();





    

    
}

