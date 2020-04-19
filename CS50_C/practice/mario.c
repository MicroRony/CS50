#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n;
  do {
    // get height
    n = get_int("height: ");
  }
  while(n < 1 || n > 8);
  for (int i = 0; i < n; i++)
  {
    //space
    for (int j = n - 2; j >= i; j--)
    printf(" ");
    // hashes
    for (int j = 0; j <= i; j++)
    printf("#");

  printf("\n");
  }
}