#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *tp1 = list1;
    ListNode *tp2 = list2;
    ListNode *tp3 = new ListNode(0);
    ListNode *head = tp3;

    while (tp1 != nullptr && tp2 != nullptr)
    {
        if (tp1->val < tp2->val)
        {

            tp3->next = new ListNode(tp1->val);
            tp3 = tp3->next;
            tp1 = tp1->next;
        }
        else
        {
            tp3->next = new ListNode(tp2->val);
            tp3 = tp3->next;
            tp2 = tp2->next;
        }
    }

    while (tp1 != nullptr)
    {
        tp3->next = new ListNode(tp1->val);
        tp1 = tp1->next;
        tp3 = tp3->next;
    }

    while (tp2 != nullptr)
    {
        tp3->next = new ListNode(tp2->val);
        tp2 = tp2->next;
        tp3 = tp3->next;
    }

    return head->next;
    
}

void displayList(ListNode *list)
{
    while (list != nullptr)
    {
        cout << list->val << " ";
        list = list->next;
    }
    cout << "\n";
}

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    l2->next->next->next = new ListNode(6);

    displayList(l1);
    displayList(l2);
    ListNode *l3 = mergeTwoLists(l1,l2);
    displayList(l3);
    
}