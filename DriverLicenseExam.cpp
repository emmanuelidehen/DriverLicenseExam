//
//  DriverLicenseExam.cpp
//  DriverLicenseExamEmmanuelIdehen
//
//  Created by Emmanuel Idehen on 4/2/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//
#include "TestGrader.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>


TestGrader::TestGrader()
{
    
}
void TestGrader::setKey(char correct[])
{
    for (int x = 0; x < 20; x++)
    {
        answer[x] = correct[x];
    }
}
void TestGrader::grade(char test[])
{
    int rightanswer(0);
    int wronganswer(0);
    int count(0);
    
    for (int x = 0; x < 20; x++)
    {
        if (test[x] == answer[x])
        {
            rightanswer += 1;
            count += 1;
        }
        else if (test[x] != answer[x])
        {
            wronganswer += 1;
        }
    }
    
    if (count >= 15)
    {
        std::cout << " You passed the driving exam "<<std::endl;
       
    }
    else
    {
        std::cout<<" You failed the driving exam "<<std::endl;
      
    }
    std::cout<<" Your correct anwers where "<< rightanswer<<" in total while your wrong answers where "<< wronganswer<<" in total" <<std::endl;
 
    
    
    std::cout << "you got questions";
    for (int x = 0; x < 20; x++)
    {
        if (test[x] != answer[x])
        {
            std::cout << x + 1 << " ";
        }
    }
    std::cout << "wrong" << std::endl;
}
TestGrader::~TestGrader()
{
    
}
