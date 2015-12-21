#ifndef STRING_LIST
#define STRING_LIST
#include <string>
#include <vector>

class StringList
{
private:
    struct ListNode
    {
        std::string parameter;
        ListNode *next;
        ListNode(std::string parameter1, ListNode *next1 = NULL)
        {
            parameter = parameter1;
            next = next1;
        }
    };
    
   ListNode *head;
    
public:
    StringList();
    ~StringList();
    StringList(const StringList &);
    void add(std::string);
    int positionOf(std::string);
    bool setNodeVal(int, std::string);
    std::vector<std::string>getAsVector();
    
};
#endif

