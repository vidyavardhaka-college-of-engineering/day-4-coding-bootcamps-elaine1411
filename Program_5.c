//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[100], n, i, largest,smallest;

    printf("Enter the no. of elements in the array:");
    scanf("%d", &n);

    for(i=1;i<n+1;i++)
    {
      printf("Enter element %d:",i);
      scanf("%d",&arr[i]);
    }
    
    smallest=arr[0];
    largest=arr[0];

    for(i=1;i<n+1;i++)
    {
      if(arr[i]<smallest)
      {
        smallest=arr[i];
      }
      if(arr[i]>largest)
      {
        largest=arr[i];
      }
    }
    
    printf("The smallest element pf the array is:%d\n ",smallest);
    printf("The largest element of the array is:%d\n",largest);

    //Write your code here
  
    return 0;
}
