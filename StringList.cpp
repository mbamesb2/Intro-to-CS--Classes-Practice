
#include "StringList.hpp"
#include <string>
#include <vector>
#include <iostream>


StringList::StringList()    // default constructor
{
    head = NULL;
}


StringList::StringList(const StringList& source)    // copy constructor
{
    head = NULL;
    
    ListNode *p = source.head;
    while(p!=NULL)
    {
        add(p->parameter);
        p = p->next;
    }


}

void StringList::add(std::string para)
{
    
    if (head == NULL)
        head = new ListNode(para);
    else
    {
        ListNode *nodePtr = head;
        while (nodePtr->next != NULL)     // walks down the list until pointer equals NULL
            nodePtr = nodePtr->next;
        
        nodePtr->next = new ListNode(para);  // actually adds new node to end
        
    }
}

int StringList::positionOf(std::string value)
{
    
    ListNode *nodePtr = head;
    int length = 0;
    while (nodePtr != NULL)
    {
        if (nodePtr->parameter == value)
            return length;
        else
            nodePtr = nodePtr->next;
            length++;
    }
    
        return -1;
}

bool StringList::setNodeVal(int position, std::string value)
{
    
    ListNode *nodePtr = head;
    int count = 0;
        
    while (nodePtr != NULL)
    {
        if (count == position)
        {
            nodePtr->parameter = value;
            return true;
        }
        count++;
        nodePtr = nodePtr->next;
    }
   
        return false;
}


std::vector<std::string> StringList::getAsVector()
{
    std::vector<std::string> stringVec;
    StringList obj;
    
    ListNode *nodePtr = head;
    
    while (nodePtr != NULL)
    {
        stringVec.push_back(nodePtr->parameter);
        nodePtr = nodePtr->next;
      
    }
    return stringVec;
}

StringList::~StringList()
{
   
    
    ListNode *nodePtr = head;

    while(nodePtr !=  NULL)
    {
        ListNode *temp = nodePtr;
        nodePtr = nodePtr->next;
        delete temp;
       
    }

}