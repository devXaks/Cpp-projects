#include <iostream>

using namespace std;
int searchFirst(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int firstoccur = -1;

    while (start<=end)
    {

        if (arr[mid] == target )
        {
            firstoccur = mid;
            end = mid-1;

        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);

    }
    return firstoccur;
}

int lastSearch(int arr[],int size,int target){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int lastoccur = -1;

    while(start<=end){
        if(arr[mid]  == target){
            lastoccur = mid;
            start = mid+1;
        }
        else if(arr[mid] > target){
            end = mid -1;
        }
        else if(arr[mid]< target){
            start = mid +1; 
        }
        mid = start + (end-start)/2;


    }

    return lastoccur;




}

int main()
{
    int arr[7] ={3,7,15,20,100,100,230};
    int ans = searchFirst(arr,7,100);
    int ans1 = lastSearch(arr,7,100);
    cout<<ans<<endl;
    cout<<ans1;

    return 0;
}