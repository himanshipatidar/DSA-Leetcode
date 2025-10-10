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

    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != NULL && head->data == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }

        ListNode *curr = head;
        while (curr != NULL && curr->next != NULL)
        {
            if (curr->next->data == val)
            {
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else
            {
                curr = curr->next;
            }
        }

        return head;
    }
};

int main()
{
    List list;

    list.push_back(1);
    list.push_back(2);
    list.push_back(6);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);

    list.printList();

    list.setHead(list.removeElements(list.getHead(), 6));

    list.printList();

    return 0;
}
