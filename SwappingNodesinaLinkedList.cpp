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

    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *first = head;
        for (int i = 1; i < k; i++)
        {
            first = first->next;
        }

        ListNode *fast = first;
        ListNode *second = head;

        while (fast->next != NULL)
        {
            fast = fast->next;
            second = second->next;
        }

        swap(first->data, second->data);
        return head;
    }
};

int main()
{
    List list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    list.printList();

    list.swapNodes(list.getHead(), 2);

    list.printList();

    return 0;
}
