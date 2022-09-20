#include"class.h"
#include <iostream>
#include <iomanip>
#include<fstream>
#include <string>
#include<vector>


using namespace std;



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


void Numbers::ReplaceNum(int x, int replaceWith) {
    //replaces the old value with a new one
    cout << "The old value is " << arrayC[x] << ". The new value will be " << replaceWith << endl;
    arrayC[x] = replaceWith;
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
        cout << "  " << i;
    }


    //changes the size of the vector
    sizeC--;


}


void Numbers::addNum(int numToAdd) {
    //Had a lot of trouble with his one, i ended making a vector to put the original array in and then delete the dynamic array and set the values of
    //the vector to the array so that it is still stored in the array
    
    
    //a temp vector to store the old values in
    vector <int> temp;


    //go through the array and put the values in to the vector
    for (int i = 0; i < sizeC; i++) {
        temp.push_back(arrayC[i]);
    }
    //add the number to add to the end of the array
    temp.push_back(numToAdd);



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
    

    //everything below this is just from trying to make this work :)

    /*for (int i = 0; i < sizeC; i++) {
        temp_list[i] == arrayC[i];
        //cout << temp_list[i] << endl;
    }
    
    temp_list[sizeC + 1] = numToAdd;

    //copy(temp_list, temp_list, arrayC - 1);

    for (int i = 0; i < sizeC + 1; i++) {
        cout << " " << temp_list[i];
    }


    delete[] arrayC;

    
    int* arrayC = new int(sizeC + 1);
    
    
    
    arrayC = temp_list;

    

    //arrayC[sizeC + 1] == numToAdd;

    //cout << "Here" << temp_list[sizeC + 1];

    //arrayC[sizeC+1] = temp_list;
    //delete[] temp_list;

    cout << endl << arrayC[sizeC + 1] << endl;
    */
    

    
    //printC();
    
}

//t


