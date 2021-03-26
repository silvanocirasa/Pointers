#include <stdio.h>

int SumOfElements(int *A, int size) // "int * A " and "int A[]" is the same
{
  int i, sum = 0;
  printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
  for(i = 0; i < size;i++)
  {
    sum+= A[i];
  }
  return sum;
}
int main(void)
{
  int A[] = {1,2,3,4,5};
  int size = sizeof(A)/sizeof(A[0]);
  int total = SumOfElements(A,size);
  printf("Sum of Elements = %d\n", total);
  printf("Main - Size of A = %d, size of A[0] = %d\n", sizeof(A),sizeof(A[0])); 
}

