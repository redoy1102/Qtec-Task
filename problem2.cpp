#include<bits/stdc++.h>
#define endl '\n'
#define long long int int
using namespace std;

int searching_target(int numbers[], int arraySize, int targetNumber)
{
    int l = 0, r = arraySize - 1;
    while(l<=r)
    {
        int mid = (l + r) / 2;
        if(targetNumber == numbers[mid])
        {
            return mid;
            break;
        }
        else if(targetNumber > numbers[mid])
        {
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return 0;
}
int close_index(int numbers[], int arraySize, int targetNumber)
{
    int smallNumberIndex = -1;
    for (int i = 0; i < arraySize; i++)
    {
        if(numbers[i] < targetNumber)
        {
            smallNumberIndex = i;
        }
        else{
            return smallNumberIndex + 1;
        }
    }
    return smallNumberIndex + 1;
}

void solve()
{
    // Taking input
    int arraySize;
    cin >> arraySize;
    int numbers[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cin >> numbers[i];
    }
    int targetNumber;
    cin >> targetNumber;

    // using selection sort algorithm
    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i+1; j < arraySize; j++)
        {
            if(numbers[i] > numbers[j])
            {
                swap(numbers[i], numbers[j]);
            }
        }
    }

    // using binary search to find the target number
    int indexNumber = searching_target(numbers, arraySize, targetNumber);

    if (indexNumber == 0)
    {
        int closeIndexNumber = close_index(numbers, arraySize, targetNumber);
        cout << closeIndexNumber << endl;
    }
    else{
        cout << indexNumber << endl;
    }
    
}
int main()
{
    int t;
    // cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }

    return 0;
}