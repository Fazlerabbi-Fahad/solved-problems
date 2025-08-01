#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> newQ;
        int last;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();

            if (q.empty())
            {
                last = k;
                break;
            }

            newQ.push(k);
        }
        q = newQ;
        return last;
    }

    int top()
    {
        queue<int> newQ;
        int last;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            if (q.empty())
            {
                last = k;
            }
            newQ.push(k);
        }
        q=newQ;
        return last;
    }

    bool empty()
    {
        return q.empty();
    };
};

int main()
{
    MyStack st;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }

    cout << "Top: " << st.top() << endl;  
    cout << "Pop: " << st.pop() << endl;  
    cout << "Top after pop: " << st.top() << endl; 

    cout << "Empty: " << (st.empty() ? "Yes" : "No") << endl;

    st.pop(); 
    st.pop(); 

    cout << "Empty after removing all: " << (st.empty() ? "Yes" : "No") << endl; 
    return 0;
}
