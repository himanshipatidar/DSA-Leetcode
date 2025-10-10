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

    void reverseList()
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        head = prev;
    }
};

int main()
{
    List list;

    // Add elements to the list
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);

    cout << "Original List: ";
    list.printList();

    // Reverse the list
    list.reverseList();

    cout << "Reversed List: ";
    list.printList();

    return 0;
}