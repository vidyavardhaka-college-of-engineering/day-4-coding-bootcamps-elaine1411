//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
  int arr[10],i,n;

  printf("Enter the no. of elements of the array:");
  scanf("%d",&n);

  printf("enter the %d elements of the array: ",n);
  for(i=1;i<6;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("the elements of the array are:\n");
  for(i=1;i<6;i++)
  {
    printf("%d ",arr[i]);
  }


 


   //Declare all the variables[N, array a, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Print the array elements in using printf statement
   
   return 0; 
}
