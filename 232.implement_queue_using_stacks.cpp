#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    // int pop()
    // {
    //     stack<int> newSt;
    //     int last;
    //     while(!st.empty())
    //     {
    //         int k=st.top();
    //         st.pop();
    //         if(st.empty())
    //         {
    //             last=k;
    //             break;
    //         }
    //         newSt.push(k);
    //     }
    //     st=newSt;
    //     return last;
    // }

    // int peek()
    // {
    //     stack<int> newSt;
    //     int last;
    //     while(!st.empty()){
    //         int k=st.top();
    //         st.pop();
    //         if(st.empty()){
    //             last=k;
    //         }
    //         newSt.push(k);
    //     }
    //     while(!newSt.empty()){
    //         st.push(newSt.top());
    //         newSt.pop();
    //     }
    //     return last;
    // }

    int pop()
    {
        if (st.empty())
            return -1;

        int x = st.top();
        st.pop();

        if (st.empty())
        {
            return x; 
        }

        int res = pop(); 
        st.push(x);      
        return res;
    }

    int peek()
    {
        if (st.empty())
            return -1;

        int x = st.top();
        st.pop();

        if (st.empty())
        {
            st.push(x);
            return x;
        }

        int res = peek();
        st.push(x);
        return res;
    }

    bool empty()
    {
        return st.empty();
    }
};

int main()
{
    MyQueue q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "Pop: " << q.peek() << endl;

    cout << "Empty: " << (q.empty() ? "Yes" : "No") << endl;

    q.pop();
    q.pop();

    cout << "Empty after removing all: " << (q.empty() ? "Yes" : "No") << endl;
    return 0;
}
