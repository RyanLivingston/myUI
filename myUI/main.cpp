//
//  main.cpp
//  myUI
//
//  Created by Ryan Livingston on 2/26/18.
//  Copyright © 2018 Ryan Livingston. All rights reserved.
//

#include <iostream>
#include "myUI.h"
using namespace std;

int main() {
    myUI menu;
    menu.setHeaderN(25);
    
    menu.addLine("Menu Line 1");
    menu.addLine("Menu Line 2");
    menu.addLine("Menu Line 3", 2);
    
    menu.printMenu();
    menu.runInput();
    
    menu.getInput();
    
    return 0;
}
