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

    bool hasCycle()
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    List list;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);

    cout << "List: ";
    list.printList();

    bool cycleExists = list.hasCycle();
    if (cycleExists)
        cout << "Cycle detected in the list." << endl;
    else
        cout << "No cycle detected in the list." << endl;

    // Create a cycle manually for testing
    ListNode *temp = list.getHead();
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = list.getHead()->next;

    cycleExists = list.hasCycle();
    if (cycleExists)
        cout << "Cycle detected in the list after creating cycle." << endl;
    else
        cout << "No cycle detected in the list after creating cycle." << endl;

    return 0;
}
