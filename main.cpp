//
//  main.cpp
//  CSCI 240 Program 4
//
//  Created by Salman Ahmed on 9/23/21.
//
/*************************************************************
CSCI 240         Program 4     Fall 2021

Programmer: Salman Ahmed

Section: 1

Date Due: 9/24/2021

Purpose: For this assignment, write a program that will generate three sets of random numbers.
***************************************************************/

#include <iostream>                     //Include all neccessary libraries
#include <iomanip>
#include <cstdlib>

using namespace std;

const int SIZE_1 = 25;                  //Assign all symbolic constants
const int SIZE_2 = 50;
const int SIZE_3 = 250;

const int LINE_COUNT_1 = 5;
const int LINE_COUNT_2 = 7;
const int LINE_COUNT_3 = 8;

const int MAX_RAND_NUM = 100;

int main(){
    
    srand(23);                  //Determine srand and seed value of 23
    int n;
    int zCnt = 0;
    int eCnt = 0;
    int oCnt = 0;
    
    //*********************************************************
    
    cout << "First set of random numbers:" << endl << endl;        //Initial statment printed
    
    for (int i = 0; i < SIZE_1; i++)                    //For loop with counter and size limit
    {
        
        n = rand();
        cout << setw(15) << n;//Setting space/format and printing random values
        
        if( n == 0)
        {
            zCnt++;
        }
        else if ( n % 2 == 0 )
        {
            eCnt++;
        }
        else
        {
            oCnt++;
        }
        
    
        if ((i+1) % LINE_COUNT_1==0)                    //Setting limit to the number of values per line
            cout << endl;
        //cout << "The amount of zeros " << zCnt << endl;
    }
    cout << "\nThe amount of zeros is " << zCnt << " ";
    cout << "The amount of evens is " << eCnt << " ";
    cout << "The amount of odds is " << oCnt << " " << endl;

    //*********************************************************
    
    cout << "\nSecond set of random numbers:" << endl << endl;      //Initial statement printed
    
    bool flag = false;                                      //Assigning variables
    int cnt = 0;
    
    while ( flag != true )                      //While loop with condition
    {
        if (cnt < SIZE_2)                       //Condition for the number of values
        {
            cout << setw(15) <<  rand();        //Setting space/format and printing random values
            cnt++;
            
            if ((cnt) % LINE_COUNT_2==0)        //Setting limit to the number of values per line
                cout << endl;
        }
        else
        {
            flag = true;                    //Exit condition for while loop
        }
    }
    
    //*********************************************************
    
    cout << "\n\nThird set of random numbers:"<< endl;          //Initial statement printed
    
    int num = LINE_COUNT_1 + (rand() % (SIZE_3 - LINE_COUNT_1 + 1));        //Formula for random number of values
   
    cout << "There are " << num << " numbers in the set." << endl << endl;  //Second statement printed
    
    bool flag2 = false;                                      //Assigning variables
    int cnt2 = 0;
        
    do                                                      //Do...While loop
    {
        if (cnt2 < num)
        {
            cout << setw(15) << rand() % MAX_RAND_NUM + 1;         //Printing of random values between 1 and 100
            cnt2++;
        
            if ((cnt2) % LINE_COUNT_3==0)
                cout << endl;
        }
        else
        {
            flag2 = true;
        }
    }
    while ( flag2 != true);
    
    cout << endl << endl << endl;
       
    //*********************************************************
    
    return 0;                                           //Program exit
}
