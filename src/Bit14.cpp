#include <stdio.h>
#include <iostream>
using namespace std;

int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

/* Program to test function countSetBits */
int main()
{
	int myvariable;

	printf("Enter a number:");
	scanf("%d",&myvariable);
    printf("output is %d \n", countSetBits(myvariable));

    return 0;
}
