#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x)
{
    string a = to_string(x);
    string b = a;
    int i = 0;
    int j = a.length() - 1;

    while (i < j)
    {
        char temp = b[j];
        b[j] = a[i];
        a[i] = temp;

        i++;
        j--;
    }
    return a == b;
};

int main()
{
    int n;
    cin >> n;

    bool result = isPalindrome(n);

   cout << (result ? "true" : "false") << endl;

    return 0;
}