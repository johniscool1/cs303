#pragma once
using namespace std;
#include<iostream>
#include <fstream>

void readFile(string txtFile, int array[], int sizeArray);



int findNum(int array[],int arraySize, int findMe);
//pre: Takes in a array
//post: Outputs the index of where the find me number is and returns 0 if it couldn't find it

void replaceNum(int array[], int x, int replaceWith);
//pre: Takes in an array, the index for the number they want to replace, and the number to replace
//post: Doens't return anything but will print out the new array and old array

void addNum(int array[], int arraySize, int numAdd);
//pre: Takes in an array, the size of the array, and a number to add to the end of the array
//post: 

void rmIndex(int array[], int arraySize, int delMe);
//pre: Takes in an array, the size of the array, and the index to delete 
//post:

