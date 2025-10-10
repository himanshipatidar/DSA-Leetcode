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

    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr)
        {
            ListNode *next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *curr = head;
        while (curr->next != NULL)
        {
            if (curr->data == curr->next->data)
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

    list.push_back(10);
    list.push_back(10);
    list.push_back(20);
    list.push_back(20);

    list.printList();

    list.deleteDuplicates(list.getHead());

    list.printList();

    return 0;
}