//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
  int a1[100],a2[100],i,n;

  printf("Enter the no. of elements in the first array:");
  scanf("%d",&n);

  printf("Enter the %d elements in the first array:",n);
  for(i=1;i<n+1;i++)
  {
    scanf("%d",&a1[i]);
  }

  for(i=1;i<n+1;i++)
  {
    a2[i]=a1[i];
  }

  printf("The first array is:\n");
  for(i=1;i<n+1;i++)
  {
    printf("%d  ",a1[i]);
  }
  printf("\n");

  printf("The elements copied into the second array are:\n");
  for(i=1;i<n+1;i++)
  {
    printf("%d ",a2[i]);
  }

  printf("\n");

 


   //Declare all the variables[N, array a & array b, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
   //Print the both array elements in using printf statement in the above specified format
   return 0; 
}
