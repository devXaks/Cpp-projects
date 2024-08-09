#include <iostream>

using namespace std;
int searchFirst(int arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int firstoccur = -1;

    while (arr[mid] != key)
    {
        int mid = start + ((end - start) / 2);

        if (start == end)
        {
            return firstoccur;

        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
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