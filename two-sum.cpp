#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> array, int t)
{
    unordered_map<int, int> nums_map;

    for (int i = 0; i < array.size(); i++)
    {
        int complement = t - array[i];

        if (nums_map.count(complement))
        {
            return {nums_map[complement], i};
        }

        nums_map[array[i]] = i;
    }

    return {};
}

int main()
{
    int n;
    cin >> n;

    std::vector<int> array(n);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    int t;
    cin >> t;

    vector<int> result = twoSum(array, t);

    if (!result.empty())
    {
        cout << "[" << result[0] << "," << result[1] << "]" << endl;
    }
    else
    {
        cout << "No two numbers sum to the target." << endl;
    }
    return 0;
}