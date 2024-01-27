#include <iostream>
using namespace std;

class LLNode
{
    int data;
    LLNode *next;

public:
    LLNode()
    {
        data = 0;
        next = NULL;
    }
    void traversal(LLNode *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    void setValue(int data)
    {
        this->data = data;
    }
    void setNext(LLNode *next)
    {
        this->next = next;
    }
    LLNode *insertAtBeg(LLNode *head, int data)
    {
        LLNode *ptr = new LLNode;
        ptr->data = data;
        ptr->setNext(head);
        return ptr;
    }
};

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

    head = head->insertAtBeg(head, 11);

    head->traversal(head);
    return 0;
}