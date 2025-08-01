#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *tmp = head;
        while (tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val)
            {
                tmp->next = tmp->next->next;
            }
            if (tmp->next == NULL)
                break;
            else if (tmp->val != tmp->next->val)
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};


void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main()
{
    int n;
    cin >> n;

    ListNode *head = NULL;
    ListNode *tail = NULL;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ListNode *newNode = new ListNode(x);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    Solution sol;
    ListNode* updatedHead = sol.deleteDuplicates(head);
    
    if (updatedHead) {
        cout << "List after removing duplicates: ";
        printList(updatedHead);
    } else {
        cout << "List is empty." << endl;
    }

    return 0;
}
