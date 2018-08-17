//program to execute simple stack program

#include<stdio.h>
void push();
void pop();
void display();
int stk[50];
int top=-1,i,j;

int main()
{
  int d, c;
do{
  printf("\nenter your choice\n");
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.display\n");
  scanf("%d",&d);
  switch(d)
  {
    case 1:push();
          break;
    case 2:pop();
          break;
    case 3:display();
           break;
    default:printf("\nwrong choice");

  };
printf("\n\ndo you want to enter again enter 0 to exit\n");
 scanf("%d",&c);

}while(c!=0);
return 0;
}

void push()
{
  printf("\nwe are in the push function\n");

  if(top1==49)
  {
    printf("\noverflow\n");
  }
   top1++;
    printf("\nenter for stack1\n");
    scanf("%d",&stk[top1]);
 }


void pop()
{

  printf("\nwe are in pop function\n");
  if(top==-1)
  printf("\nunderflow\n");
  else
  top--;


}

void display()
{

  printf("\nwe are in display function\n");
printf("\n");

    for(i=0;i<=top;i++)
      printf("%d\n",stk[i]);

}
