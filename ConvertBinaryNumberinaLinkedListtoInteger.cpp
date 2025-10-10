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

    void setHead(ListNode *newHead)
    {
        head = newHead;
    }

    int getDecimalValue(ListNode *head)
    {
        int num = 0;
        while (head != NULL)
        {
            num = num * 2 + head->data;
            head = head->next;
        }
        return num;
    }
};

int main()
{
    List list;

    list.push_back(1);
    list.push_back(0);
    list.push_back(1);

    list.printList();

    cout << list.getDecimalValue(list.getHead());

    return 0;
}
