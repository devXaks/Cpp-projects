#include <iostream>

using namespace std;
int searchFirst(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int firstoccur = -1;

    while (arr[mid] != key)
    {

        if (arr[mid] == target )
        {
            return firstoccur;

        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }

    if(arr[mid] = key)
}

int main()
{

    return 0;
}