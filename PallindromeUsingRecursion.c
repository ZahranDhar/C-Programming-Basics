#include<stdio.h>
int checkPallindrome(char *str, int n, int i);
int main()
{
  char str[7]="mmmmm";

  if (checkPallindrome(str,5,0)) printf("Pallindrome");
  else printf("Not Pallindrome");

  return 0;
}

int checkPallindrome(char *str, int n, int i)
{
  if(i>=(n/2)) return 1;

  
  if(str[i]!=str[n-1-i]) return 0;

  i++;
  
  return checkPallindrome(str,n,i);

}