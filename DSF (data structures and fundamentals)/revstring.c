//this program is still not ready to be execute

#include<stdio.h>
void rev();
void pop();

char stk[50];
int top=0;
int main()
{
  char ch;
  printf("enter your string ");
  scanf("%s",&stk);
  for(int i=0;stk[i]!='\0';i++)
    top++;
    printf("do you want to pop somethng if yes enter y");
    scanf("%c",&ch);
    if(ch=='y')
    pop();
  printf("reversing a string");
  rev();
  return 0;
}
void pop()
{int n;
  start:
  printf("how many charachter do you want to pop ");
  scanf("%d",n);
  if(n>top+1)
  {
    printf("higher then the string ");
    goto start;
}
else
{
 for(int i=0;i<n;i++);
 top--;
}
}
void rev()
{
  for(int i=top;i>=0;i++)
  printf("%c",stk[i]);
}
