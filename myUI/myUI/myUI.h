//
//  myUI.h
//  myUI
//
//  Created by Ryan Livingston on 2/26/18.
//  Copyright © 2018 Ryan Livingston. All rights reserved.
//

#ifndef myUI_h
#define myUI_h

#include <string>
#include <vector>
using namespace std;

class myUI
{
public:
    void addLine(string str);
    void addLine(string str, int index);
    void printMenu();
    void runInput();
    void setHeaderChar(char headerChar);
    void setHeaderN(int headerN);
    void setInputMsg(string inputMsg);
    void setErrorMsg(string errorMsg);
    void clear();
    int getInput();
    int getSize();
    myUI();
private:
    vector<string> line;
    int headerN;
    int input;
    string inputMsg;
    string errorMsg;
    char headerChar;
};

#endif /* myUI_h */
