#include <bits/stdc++.h>
using namespace std;

int generateSubsequence(int arr[], int n, int i, int sum, int s)
{
    if (i >= n)
    {
        if(sum == s){
            return 1;
        }
        return 0;
    }
    sum += arr[i];
    int l=generateSubsequence(arr, n, i + 1, sum, s);
    sum -= arr[i];
    int r=generateSubsequence(arr, n, i + 1, sum, s);
    return l+r;
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
    cout<<generateSubsequence(arr, n, 0, 0, s);
    return 0;
}