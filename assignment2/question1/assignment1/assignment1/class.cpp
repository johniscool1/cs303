#include"class.h"
#include <iostream>
#include <iomanip>
#include<fstream>
#include <string>
#include<vector>


using namespace std;

//function to see if a string is a number or not
bool isDigit(string str) {
    return str.find_first_not_of("0123456789.") == std::string::npos;
}

int Numbers::getsize() {
    //returns the size of the array
    return sizeC;
}


void Numbers::printC() {
    //prints the array
    for (int i = 0; i < sizeC; i++) {
        cout << " " << arrayC[i];
    }
    cout << endl << "size: " << arrayC[101];
}


void Numbers::ReadFileC(string txtFile) {
    
        
        
        ifstream inFile;
        inFile.open(txtFile);

        //makes sure the file is good
        if (!inFile.is_open()) {
            cout << "Error - your file is not good" << endl;
            return;
        }

        //create a counter to know how big the data is
        int counter = 0;

        //create temp vars to store the data in, then it is put into the array
        int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

        while (inFile.good()) {
            inFile >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
            //puts the data into the array
            arrayC[counter] = num1;
            counter++;
            arrayC[counter] = num2;
            counter++;
            arrayC[counter] = num3;
            counter++;
            arrayC[counter] = num4;
            counter++;
            arrayC[counter] = num5;
            counter++;
            arrayC[counter] = num6;
            counter++;
            arrayC[counter] = num7;
            counter++;
            arrayC[counter] = num8;
            counter++;
            arrayC[counter] = num9;
            counter++;
            arrayC[counter] = num10;
            counter++;

        }
        //close the file
        inFile.close();

        //tells user if it was succsesful
        cout << endl << "Read file succsesfully!" << endl;
    

}



int Numbers::findNum(int findMe) {
    int counter = 0;
    //create a counter
    while (counter < sizeC) {
        //when it finds the number, it will return the index
        if (arrayC[counter] == findMe) {
            return counter;
        }
        counter++;
    }
    //returns -1 if it couldn't be found
    return -1;
}


void Numbers::ReplaceNum(string x, string replaceWith) {

    //create integars for the numbers that are later converted
    int xnum;
    int replaceInt;
    try {

        //if x isnt a digit
        if (!isDigit(x)) {
            //throw an error
            throw std::invalid_argument("The index is not a number");
        }
        else {
            //if it is a digit, convert it to an integar
             xnum = stoi(x);
        }
        //if replaceWith isn't a digit
        if (!isDigit(replaceWith)) {
            //throw an error
            throw std::invalid_argument("The number to replace is not a number");
            
        }
        else {
            //if it is a digit, convert it to an int
            replaceInt = stoi(replaceWith);
        }

        //if the number entered is too big or too small for the index
        if (xnum > sizeC || xnum < sizeC) {
            //throw an error
            throw std::invalid_argument("Number is outside of index");

        }


    }
    //catch the error
    catch (std::invalid_argument& e) {
        //print out what is wrong
        cout << "ERROR:" << e.what() << endl;
        //stop the function
        return;
    }






    //replaces the old value with a new one
    cout << "The old value is " << arrayC[xnum] << ". The new value will be " << replaceInt << endl;
    arrayC[xnum] = replaceInt;
}

void Numbers::deleteNum(int x) {

    //this function is bassically the same as the add one but with one differnce 

    vector <int> temp;



    for (int i = 0; i < sizeC; i++) {
        //the one difference is that when it finds the index, it will not add it to the temp vector which gets changed into an array
        if (i != x) {
            temp.push_back(arrayC[i]);
        }
    }


    delete[] arrayC;




    int* arrayC = new int[temp.size()];


    for (int i = 0; i < temp.size(); i++) {
        arrayC[i] = temp[i];
        //cout << i << endl;
    }


    //changes the size of the vector
    sizeC--;


}


void Numbers::addNum(string numToAdd) {
    //Had a lot of trouble with his one, i ended making a vector to put the original array in and then delete the dynamic array and set the values of
    //the vector to the array so that it is still stored in the array



    int numberToAdd;



    try {
        //make sure the number we ant to add at the end is a number
        if (!isDigit(numToAdd)) {
            //throw an error
            throw std::invalid_argument("The number to add is not a number");

        }
        else {
            //if it is a digit, convert it to an int
            numberToAdd = stoi(numToAdd);
        }

    }
    //catch the error
    catch (std::invalid_argument& e) {
        //print out what is wrong
        cout << "ERROR:" << e.what() << endl;
        //stop the function
        return;
    }




    
    //a temp vector to store the old values in
    vector <int> temp;


 


    



    //go through the array and put the values in to the vector
    for (int i = 0; i < sizeC; i++) {
        temp.push_back(arrayC[i]);
    }
    //add the number to add to the end of the array
    temp.push_back(numberToAdd);



    //system("pause");

    //delete the array
    delete[] arrayC;

    


    //recreate the array with a different size
    int* arrayC = new int[temp.size()];


    //set the array values to what is in the vector
    for (int i = 0; i < sizeC + 1; i++) {
        arrayC[i] = temp[i];
        //cout << i << endl;
    }

    //change the size 
    sizeC++;
    

  
    
}

//t


