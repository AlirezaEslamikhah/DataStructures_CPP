#include<stdio.h>
#include <algorithm>   
#include <iostream>
using namespace std;
long max_left;
long max_right;
int max_cross_sub(int a[], int b, int c,int d)
{   
    long left = -10000;
    long answer = 0;
    for (int i = c;  i >= b;i--)
    {
        answer += a[i];
        if (answer > left)
        {
            left = answer;
            max_left = i;
        }
    }
    long right = -10000;
    answer = 0;
    for (int j = c+1; j <= d; j++)
    {
        answer += a[j];
        if (answer > right)
        {
            right = answer;
            max_right = j;
        }
    }
    return (left + right);
}
int max_sub(int a[], int l, int h)
{
    if (h==l)
    {
        return a[h];
    }
    long mid = (h + l)/2;
    int max_left = max_sub(a, l, mid);
    int max_right = max_sub(a, mid + 1, h);
    int max_cross = max_cross_sub(a, l, mid, h);
    int max = std::max(max_left, max_right);
    return std::max(max, max_cross);
}
int main()
{
    int a[] = { 3, -1, -1, 10, -3, -2, 4};
    cout << max_sub(a, 0, 4) << endl;
    cout <<"The longest substring starts from " << max_left <<" to "<< max_right << endl;

    return 0;
}