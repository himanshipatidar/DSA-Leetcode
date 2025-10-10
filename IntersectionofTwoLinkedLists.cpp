#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    ListNode *head;
    ListNode *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList()
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ListNode *getHead()
    {
        return head;
    }
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (headA == NULL || headB == NULL)
    {
        return NULL;
    }

    ListNode *temp1 = headA;
    ListNode *temp2 = headB;

    while (temp1 != temp2)
    {
        if (temp1 == NULL)
        {
            temp1 = headB;
        }
        else
        {
            temp1 = temp1->next;
        }

        if (temp2 == NULL)
        {
            temp2 = headA;
        }
        else
        {
            temp2 = temp2->next;
        }
    }

    return temp1;
}

int main()
{
    List listA;
    listA.push_back(4);
    listA.push_back(1);
    listA.push_back(8);
    listA.push_back(4);
    listA.push_back(5);

    List listB;
    listB.push_back(5);
    listB.push_back(6);
    listB.push_back(1);

    ListNode *tempA = listA.getHead();
    ListNode *tempB = listB.getHead();

    while (tempA != NULL && tempA->data != 8)
    {
        tempA = tempA->next;
    }

    while (tempB->next != NULL)
    {
        tempB = tempB->next;
    }

    tempB->next = tempA;

    cout << "List A: ";
    listA.printList();

    cout << "List B: ";
    listB.printList();

    ListNode *intersection = getIntersectionNode(listA.getHead(), listB.getHead());

    if (intersection != NULL)
        cout << "Intersected at node with value: " << intersection->data << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}
