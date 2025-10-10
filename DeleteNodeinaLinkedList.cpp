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

    void deleteNode(ListNode *node)
    {
        node->data = node->next->data;
        ListNode *temp = node->next;
        node->next = node->next->next;
        delete temp;
    }

    ListNode *findNode(int val)
    {
        ListNode *curr = head;
        while (curr != NULL)
        {
            if (curr->data == val)
                return curr;
            curr = curr->next;
        }
        return NULL;
    }
};

int main()
{
    List list;

    list.push_back(4);
    list.push_back(5);
    list.push_back(1);
    list.push_back(9);

    list.printList();

    ListNode *nodeToDelete = list.findNode(5);
    if (nodeToDelete != NULL)
    {
        list.deleteNode(nodeToDelete);
    }

    list.printList();

    return 0;
}
