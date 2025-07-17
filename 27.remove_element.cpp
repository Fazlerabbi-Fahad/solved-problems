#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
    return nums.size();
}

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    int val;
    cin >> val;

    int result = removeElement(array,val);

    cout << result;

    return 0;
}