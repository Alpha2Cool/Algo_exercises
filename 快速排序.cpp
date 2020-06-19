#include<iostream>
#include<vector>

using namespace std;

/* 
最后一位做base
第一位为left
倒数第二位为right
left的值小于base时++，大于时停止
right的值大于base时--，小于时停止
left!=right时交换left和right的值
left==right时交换left或right与base的值
*/
void quicksort(int * arr, int head, int tail)
{
    int base = arr[tail];
    int left = head;
    int right = tail-1;
    while(left<right)
    {
        while (arr[left]<base && left<right)
        {
            left++;
        }
        while (arr[right]>base && left<right)
        {
            right--;
        }
        if (left != right)
        {
            int t = arr[left]; 
            arr[left] = arr[right];
            arr[right] = t;
        }
        if (left == right)
        {
            int tt = arr[left];
            arr[left] = base;
            arr[tail] = tt;
            quicksort(arr,head,right);
            quicksort(arr,left+1,tail);
        }
    }
}

int main()
{
    int arr[] = {4,6,1,5,7,2};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}