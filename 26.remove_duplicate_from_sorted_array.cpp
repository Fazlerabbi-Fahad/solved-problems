#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

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

    int result = removeDuplicates(array);

    cout << result;

    return 0;
}