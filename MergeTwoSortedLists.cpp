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

    // Merge two sorted linked lists and return head of merged list
    static ListNode *mergeTwoLists(ListNode *head1, ListNode *head2)
    {
        if (head1 == NULL || head2 == NULL)
        {
            return head1 == NULL ? head2 : head1;
        }

        if (head1->data <= head2->data)
        {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        }
        else
        {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
};

int main()
{
    List list1;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);

    List list2;
    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);

    cout << "List 1: ";
    list1.printList();

    cout << "List 2: ";
    list2.printList();

    ListNode *mergedHead = List::mergeTwoLists(list1.getHead(), list2.getHead());

    cout << "Merged List: ";
    List tempList;
    tempList.setHead(mergedHead);
    tempList.printList();

    return 0;
}
