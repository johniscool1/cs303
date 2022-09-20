// assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>


#include"class.h"


using namespace std;
int main()
{
    //make a member of the class Numbers
    Numbers operate;
    


    //read the text file
    operate.ReadFileC("numbers.txt");

    //sets a deafult menue selection
    char input = 't';

    //while loop to keep user in the menue
    while (input != 'q') {
        cout << endl << "Menue" << endl;
        cout << "type (c) to find the index of a number" << endl;
        cout << "type (m) to modify the index of a number" << endl;
        cout << "type (a) to add a number to the end of the array" << endl;
        cout << "type (r) to remove a number with the index" << endl;
        cout << "type (p) to print the array" << endl;
        cout << "type (q) to quit" << endl;
        cout << ">>";
        cin >> input;
        
        //find the index of a a number
        if (input == 'c') {
            int search;
            cout << endl << "Enter the number to search for >>";
            cin >> search;
            int result = operate.findNum(search);
            //if the result is -1, it does not exist
            if (result == -1) {
                cout << "Could not find your number" << endl;

            }
            else {
                cout << "Found your number at index " << result << endl;
            }
        }
        //if the user wants to replace a number by the index
        else if(input == 'm')
        {
            int indexM;
            int replaceM;
            cout << endl << "Enter the index >>";
            cin >> indexM;
            cout << endl << "Enter the number to replace it with >>";
            cin >> replaceM;
            operate.ReplaceNum(indexM, replaceM);
        }
        //if the user wants to add a nunebr to the end of the array
        if (input == 'a')
        {
           
            int numAdd;
            cout << "Enter a number you want to add to the array >>";
            cin >> numAdd;
            operate.addNum(numAdd);
        }
        //print the array
        else if (input == 'p') {
           
            operate.printC();
        }

        //remove a index/number from the array
        else if (input == 'r') {
            int numDel;
            cout << "Enter a index you want to delete from the array >>";
            cin >> numDel;
            operate.deleteNum(numDel);


        }
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
