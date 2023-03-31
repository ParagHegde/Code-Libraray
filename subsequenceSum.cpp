#include <bits/stdc++.h>
using namespace std;

void generateSubsequence(int arr[], int n, int i, vector<int> v, int sum, int s)
{
    if (i >= n)
    {
        if (sum == s)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    v.push_back(arr[i]);
    sum += arr[i];
    generateSubsequence(arr, n, i + 1, v, sum, s);
    v.pop_back();
    sum -= arr[i];
    generateSubsequence(arr, n, i + 1, v, sum, s);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s;
    cin >> s;
    vector<int> v;
    generateSubsequence(arr, n, 0, v, 0, s);
    return 0;
}