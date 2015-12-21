//
//  main.cpp
//  Assignment 9
//
//  Created by Michael Bamesberger on 5/23/15.
//  Copyright (c) 2015 Michael Bamesberger. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

#include "StringList.hpp"
using namespace std;

int main() {

    StringList list;
    
    list.add("Hello");
    list.add("World");
    list.add("Goodbye");
    
    cout << "This is the position of Hello in the list: " << list.positionOf("Hello") << endl;
    
    if (list.setNodeVal(0, "Hi"))
        {
            cout << "setNodeVal has returned true" << endl;
        }
    if (list.setNodeVal(6, "Hi") == false)
    {
        cout << "setNodeVal has returned false" << endl;
    }
    
    cout << "I changed Hello to Hi at position: " << list.positionOf("Hi") << endl;
    
    StringList newlist = list;
    
    vector<string> veclist = newlist.getAsVector();
    
    for (int i = 0; i < 3; i++)
    {
        cout << veclist[i] << endl;
    }
    
    cout << "This is the position of something in the new list: "  << newlist.positionOf("Goodbye") << endl;
    
    return 0;
}
