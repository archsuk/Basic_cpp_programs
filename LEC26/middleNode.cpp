#include <iostream>
using namespace std;
// using tortoise hare approach

class LLNode
{
public:
    int data;
    LLNode *next;
    LLNode()
    {
        data = 0;
        next = NULL;
    }
    void setValue(int data)
    {
        this->data = data;
    }
    void setNext(LLNode *next)
    {
        this->next = next;
    }
};

int middleNode(LLNode *head)
{
    LLNode *fast = head;
    LLNode *slow = head;
    while (fast != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    int temp;
    temp = slow->data;
    return temp;
}

int main()
{
    LLNode *head = new LLNode;
    LLNode *second = new LLNode;
    LLNode *third = new LLNode;
    LLNode *fourth = new LLNode;
    LLNode *fifth = new LLNode;

    head->setValue(12);
    head->setNext(second);

    second->setValue(13);
    second->setNext(third);

    third->setValue(14);
    third->setNext(fourth);

    fourth->setValue(15);
    fourth->setNext(fifth);

    fifth->setValue(16);
    fifth->setNext(NULL);
    
    cout << middleNode(head);

    return 0;
}