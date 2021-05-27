//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  int disp[100][200],i,j,m,n;

  printf("Enter the no. of rows:");
  scanf("%d",&m);

  printf("Enter the no. of columns:");
  scanf("%d",&n);
 
 for(i=1;i<m+1;i++)
 {
   for(j=1;j<n+1;j++)
   {
     printf("Enter the elements of disp[%d][%d]:",m,n);
     scanf("%d",&disp[i][j]);
   }
 }

  printf("The matrix is:\n");
  for(i=1;i<m+1;i++)
  {
    for(j=1;j<n+1;j++)
    {
      printf("%d ",disp[i][j]);
    }
    printf("\n");
  }

  //Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
  return 0;
}
