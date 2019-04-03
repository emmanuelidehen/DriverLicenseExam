//
//  TestGrader.h
//  DriverLicenseExamEmmanuelIdehen
//
//  Created by Emmanuel Idehen on 4/2/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#ifndef TestGrader_h
#define TestGrader_h
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
class TestGrader
{
 
private:
    char answer[20];
    
public:
    TestGrader();
    void setKey(char[]);
    void grade(char[]);
    ~TestGrader();
};

#endif /* TestGrader_h */
