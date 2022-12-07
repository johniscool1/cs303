// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include "functions.h"
#include <string>
#include <map>


using namespace std;



int main()
{
    //setting up a queue named names
    queue<string> Names;

    //add names to the queue
    Names.push("Bob");
    Names.push("joe");
    Names.push("Katie");


    cout << "Queue: ";
    //printing the queue
    printq(Names);

    //move a name to the rear using this function
    move_to_rear(Names);
    cout << "\nQueue with move to rear: ";
    printq(Names);


    //calls the palindrom function nad if it comes back true, its a palindrom
    if (palindrom("John", 0, 3)) {
        cout << "John is a palindrom" << endl;
    }
    else {
        
        cout << "John is not a palindrom" << endl;
    }
    


    if (palindrom("hannah", 0, 5)) {
        cout << "Hannah is a palindrom" << endl;
    }
    else {
        cout << "Hannah is not a palindrom" << endl;
    }


    //creating the map container
    map<string, string> states_capitals;

    //inserting the values
    states_capitals.insert(pair < string, string>("Nebraska", "Lincoln"));
    states_capitals.insert(pair < string, string>("New York", "Albany"));
    states_capitals.insert(pair < string, string>("Ohio", "Columbus"));
    states_capitals.insert(pair < string, string>("California", "Sacramento"));
    states_capitals.insert(pair < string, string>("Massachusetts", "Boston"));
    states_capitals.insert(pair < string, string>("Texas", "Austin"));


    
    //The following is modifeied from geeks for geeks at https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
    map<string, string>::iterator itr;
    for (itr = states_capitals.begin(); itr != states_capitals.end(); ++itr) {
        cout << itr->second << ","  << itr->first << endl;
    }
    //up to here


    //changing the capital of california to los angeles
    states_capitals["California"] = "Los Angeles";
         
   
    //reprinting the map
    cout << endl << "Changed californias capital: " << endl;
    for (itr = states_capitals.begin(); itr != states_capitals.end(); ++itr) {
        cout << itr->second << "," << itr->first << endl;
    }

    //creating a string to hold the value of what the user inputs
    string command;


    //if the command is exit, it will exit the program
    while (command != "exit") {
        cout << "\nEnter a state or type exit: ";
        cin >> command;
        
        //if the value is empty when the user searches for a state, it means it is not in the map.
        if (states_capitals[command] == "") {
            cout << "Could not find that state" << endl;
        }
        else {
            //print out the corresponding capital
            cout << "The capital of " << command << " is " << states_capitals[command];
        }
        
        
            
        

    }


}


