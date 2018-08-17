//program to execute simple multistack program

#include<stdio.h>
void push();
void pop();
void display();
char stk[50][50];
int top1=-1,top2=50,i,j;
int main()
{
  int c, ch;
do{
  printf("\nenter your choice\n");
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.display\n");
  scanf("%d",&c);
  switch(c)
  {
    case 1:push();
          break;
    case 2:pop();
          break;
    case 3:display();
           break;
     default:printf("wrong choice");

  };
printf("\n\ndo you want to enter again enter 0 to exit\n");
 scanf("%d",&ch);

}while(ch!=0);
return 0;
}

void push()
{ int c3;
  printf("\nwe are in the push function\n");
  if(top1==top2-1)
  {
   printf("\noverflow");
 }

  printf("\nenter choice\n");
  printf("1.push in stack 1\n");
  printf("2.push in stack 2\n");
  scanf("%d",&c3);

  if(c3==1)
  {  top1++;
    printf("enter for stack1\n");
    scanf("%s",&stk[top1]);

  }
  else
  { top2--;
    printf("enter for stack 2\n");
    scanf("%s",&stk[top2]);
  }

}

void pop()
{int c1;
  printf("we are in pop function\n");
  printf("enter choice\n");
  printf("1.pop in stack1\n");
  printf("2.pop in stack 2\n");
  scanf("%d",&c1);

  if(c1==1)
  {
    if(top1==-1)
    printf("underflow\n");
    else
    top1--;
  }
  else
  {
    if(top2==50)
    printf("underflow\n");
    else
    top2++;
  }

}

void display()
{
  int c2;
  printf("we are in display function\n");
  printf("enter choice\n");
  printf("1.display in stack 1\n");
  printf("2.display in stack 2\n");
  scanf("%d",&c2);
printf("\n\n");
  if(c2==1)
  {
    for(i=0;i<=top1;i++)
      printf("%s\n",stk[i]);
}

  else
  {
    for(i=49;i>=top2;i--)
      printf("%s\n",stk[i]);
  }

}
