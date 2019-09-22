#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  Inverse (char str[],char ptr[]);

int main()
{
  char str[100];
  char ptr[100];
  printf("Input a string:");
  gets(str);
  Inverse(str,ptr);
  printf("Inversed results :%s\n",ptr);
}

void Inverse (char str[],char ptr[])
{
  int n = strlen (str);
  int i;
  for (i=0;i<=n;i++)
  {
   ptr[i]=str[n-i-1];
  }
 ptr[i-1]='\0';

}
