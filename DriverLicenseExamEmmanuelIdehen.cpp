//
//  main.cpp
//  DriverLicenseExamEmmanuelIdehen
//
//  Created by Emmanuel Idehen on 4/2/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "TestGrader.h"
using namespace std;


int main()
{
    //=====================================================
    char yourchoice='Q';
    const int SIZE = 20;
    char answers[SIZE] = { 'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A' };
    
    //======================================================
    
    
    
    //creating an instance object of TestGrader
    TestGrader test;
    //access setKey and pass the answers to it
    test.setKey(answers);
    
    
    //================================================
    char yourTest[SIZE];
   
        for (int i = 0; i < SIZE; i++)
        {
            cout << "Please enter your Characters in Upper case latter form A -> D " << i+1 << ": ";
            cin >> yourTest[i];
            
            //validating your choice of input
            while (yourTest[i] > 'D'  || yourTest[i] < 'A')
            {
                cout << "Your out of the range of characters, please enter from choices A through D: ";
                cin >> yourTest[i];
            }
        }
        //passing your test to gardes.
    test.grade(yourTest);
        
      //  cout << endl << " Enter -1 to quit, else enter any number to retake the exam: ";
        cin >> yourchoice;
        if (yourchoice == 'Q')
        {
            return 0;
        }
        else
        {
            main();
           // cout << " Thank you for taking this Exam"<< endl;
        }
    
    
    
    return 0;
}
