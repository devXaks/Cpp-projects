#include <iostream>

using namespace std;
int searchFirst(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int firstoccur = -1;

    while (start!=end)
    {

        if (arr[mid] == target )
        {
            firstoccur = mid;
            mid -=1;

        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
                int mid = start + ((end - start) / 2);

    }
    return firstoccur;
}

int main()
{
    int arr[5] ={0,1,2,2,3};
    int ans = searchFirst(arr,5,2);
    cout<<ans;

    return 0;
}