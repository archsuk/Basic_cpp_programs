#include <iostream>
using namespace std;

class LLNode
{
public:
    int data;
    LLNode *next;
    LLNode *random;
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
LLNode *copyOfLL(LLNode *head)
{
    LLNode *temp = head;
    while (temp != NULL)
    {
        LLNode *temp2 = new LLNode();
        temp2->data = temp->data;
        temp2->next = temp->next;
        temp->next = temp2;
        temp = temp->next->next;
    }
    temp = head;
    while (temp != NULL)
    {
        temp->next->random = temp->random->next;
        temp = temp->next->next;
    }
    LLNode *head2 = head->next;
    temp = head;
    LLNode *temp2 = head2;
    while (temp != NULL)
    {
        temp->next = temp->next->next;
        if (temp2->next != NULL)
        {
            temp2->next = temp2->next->next;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return head2;
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
    return 0;
}