#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int searchInsert(vector<int> &nums, int target)
{
    auto it=find(nums.begin(), nums.end(), target);

    return it-nums.begin();
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

    int target;
    cin >> target;

    int result = searchInsert(array, target);

    cout << result;

    return 0;
}