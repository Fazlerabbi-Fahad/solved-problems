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
    void deleteNode(ListNode *node)
    {
        node->val = node->next->val;
        ListNode *deleteNode = node->next;
        node->next = node->next->next;
        delete deleteNode;
    }
};

void printList(ListNode *head)
{
    while (head != NULL)
    {
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

    if (head != NULL && head->next != NULL)
    {
        Solution sol;
        sol.deleteNode(head->next);
    }

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
