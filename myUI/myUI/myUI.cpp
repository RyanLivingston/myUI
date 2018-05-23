//
//  myUI.cpp
//  myUI
//
//  Created by Ryan Livingston on 2/26/18.
//  Copyright © 2018 Ryan Livingston. All rights reserved.
//  FROM TEST - DELETE LATER

#include <iostream>
#include <stdio.h>
#include "myUI.h"

using namespace std;
myUI::myUI()
{
    inputMsg = "Menu selection: ";
    errorMsg = "Invalid! Re-enter: ";
    headerChar = '*';
}
void myUI::addLine(string str)
{
    line.push_back(str);
}
void myUI::addLine(string str, int index)
{
    line.insert(line.begin() + index, str);
}
void myUI::setHeaderChar(char headerChar)
{
    this->headerChar = headerChar;
}
void myUI::setHeaderN(int headerN)
{
    this->headerN = headerN;
}
void myUI::setInputMsg(string inputMsg)
{
    this->inputMsg = inputMsg;
}
void myUI::setErrorMsg(string errorMsg)
{
    this->errorMsg = errorMsg;
}
int myUI::getSize()
{
    return ((int)line.size());
}
int myUI::getInput()
{
    return input;
}
void myUI::clear()
{
    cout << string( 100, '\n' );
}
void myUI::printMenu()
{
    clear();
    cout << string(headerN, headerChar) << endl;
    for(int i = 0; i < line.size(); i++)
    {
        cout << '\t' << i+1 << ") " << line[i] << endl;
    }
    cout << string(headerN, headerChar) << endl<<endl;
}
void myUI::runInput()
{
    bool flag = false;
    string temp;
    cout << inputMsg;
    do{
        if(flag)
        {
            clear();
            printMenu();
            cout << errorMsg;
        }
        flag = false;
        cin >> temp;
        try
        {
            input = stoi(temp);
            if (input <= 0 || input > (int)line.size())
                flag = true;
        } catch (...) {
            flag = true;
        }
    }while(flag);
}










