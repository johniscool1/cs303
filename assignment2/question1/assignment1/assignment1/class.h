#pragma once

#include <string>
using namespace std;

class Numbers {
private:
    //creates a default array from the txt file
    int sizeC = 100;
    int* arrayC = new int[sizeC];
public:
    

    int getsize();
    //Returns the size of the array

    void printC();
    //Prints the array

    void ReadFileC(string);
    //takes in a string which is the filename and reads it to put into the array

    void addNum(string);
    //takes a number in and adds it to the end of the array

    int findNum(int);
    //takes in a number and returns the index where it found it

    void ReplaceNum(string, string);
    //takes in an index and a number to replace it in the array

    void deleteNum(int);
    //takes in an index to delete from the array
};


bool isDigit(string str);