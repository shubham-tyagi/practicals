//program to execute simple circular queue program

#include<stdio.h>
void enque();
void deque();
void display();
int start=-1,end=-1,stk[5];
int main()
{
  int d, c;
do{
  printf("\nenter your choice\n");
  printf("1.enque\n");
  printf("2.deque\n");
  printf("3.display\n");
  printf("4.exit\n");
  scanf("%d",&d);
  switch(d)
  {
    case 1:enque();
          break;
    case 2:deque();
          break;
    case 3:display();
           break;
    case 4:
           break;
    default:printf("\nwrong choice");

  };
printf("\n\ndo you want to enter again enter 0 to exit\n");
 scanf("%d",&c);

}while(c!=0);
return 0;
}
void enque()
{
  printf("we are in the enque function");
if(end==4&&start==0)
printf("\noverflow\n");

 else if(start==-1)
 {
  start++;
  end++;
  printf("\nenter the value to enter in queue");
  scanf("%d",&stk[end]);

 }

 else if(end==4&&start!=0)
  {
    end=0;
    printf("\nenter the value to enter in queue");
    scanf("%d",&stk[end]);
  }

 else
 {
   end++;
   printf("\nenter the value to enter in queue");
   scanf("%d",&stk[end]);

 }
}

void deque()
{
  printf("we are in the deque function");

  if(end==-1&&end>start)
  {
    printf("underflow");
    end=-1;
    start=-1;
  }

 else if(start==4&&end>=0)
 start=0;

  else
  start++;

}

void display()
{
  printf("start= %d",start);
  printf("end= %d ",end);
    if(end<start)
  {
    for(int i=start;i<=4;i++)
    printf(" %d",stk[i]);
    for(int i=0;i<=end;i++)
    printf(" %d",stk[i]);
  }
  for(int i=start;i<=end;i++)
  printf(" %d",stk[i]);
}
