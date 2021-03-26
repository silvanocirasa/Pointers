#include <stdio.h>

int Double(int *A, int size) // "int * A " and "int A[]" is the same
{
  int i, sum = 0;
  for(i = 0; i < size;i++)
  {
    A[i] = 2*A[i];
}
}
int main(void)
{
  int A[] = {1,2,3,4,5};
  int size = sizeof(A)/sizeof(A[0]);
  int i;
  Double(A, size);
  for(i = 0; i < size; i++)
  {
    printf("%d \n", A[i]);
  }
}

