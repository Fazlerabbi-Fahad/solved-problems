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
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    };

    ListNode *middleNode(ListNode *head)
    {
        int sz = size(head);
        ListNode *tmp = head;
        for (int i = 1; i <= sz / 2; i++)
        {
            tmp = tmp->next;
        }
        return tmp;
    }
};

int main()
{
    int n;
    cin >> n; // Number of nodes

    ListNode *head = NULL;
    ListNode *tail = NULL;

    // Input values and create the list
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
    ListNode *mid = sol.middleNode(head);
    if (mid)
        cout << "Middle Node Value: " << mid->val << endl;
    else
        cout << "List is empty." << endl;

    return 0;
}
