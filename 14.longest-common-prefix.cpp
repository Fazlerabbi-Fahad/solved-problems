#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string prefix="";

    for(int i=0;i<strs[0].length();i++){
        char c=strs[0][i];

        for(int j=0;j<strs.size();j++){
            if(i>=strs[j].length()||strs[j][i]!=c){
                return prefix;
            }
        }

        prefix+=c;
    }

    return prefix;
}

int main()
{
    int n;
    cin >> n;

    vector<string> array(n);

    for (int i = 0; i < array.size(); i++)
    {
        cin >> array[i];
    }

    string result = longestCommonPrefix(array);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }

    return 0;
}