#include<stdio.h>
#include<stdlib.h>
void create();
void insert_first();
void insert_last();
void insert_mid();
void delete_first();
void delete_last();
void delete_mid();
void display();
struct node
{
  int n;
  struct node *link;
}*first,*last,*newtemp,*temp,*temp1;
int count=0;
int main()
{
  int choice;

  printf("first of all you need to create the link list you need to create first node\n\n ");

  create();

  do{
  printf("\n\nenter your choice\n");
  printf("1.insert first\n");
  printf("2.insert last\n");
  printf("3.insert mid\n");
  printf("4.delete first\n");
  printf("5.delete last\n");
  printf("6.delete mid\n");
  printf("7.display\n");
  printf("8.exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1 : insert_first();
    break;
    case 2 : insert_last();
    break;
    case 3 : insert_mid();
    break;
    case 4 : delete_first();
    break;
    case 5 : delete_last();
    break;
    case 6 : delete_mid();
    break;
   case 7 : display();
   break;
   case 8:break;
  }
  printf("\n\nenter 0 to exit");
  scanf("%d",&choice);
}while(choice!=0);
  return 0;
}

void create()
{
  count++;
  printf("creating first node\n");
  newtemp=(struct node*)malloc(sizeof(struct node));
  newtemp->link=NULL;
  printf("enter the first element\n");
  scanf("%d",&newtemp->n);
  first=newtemp;
  last=newtemp;
}

void insert_first()
{
  temp=(struct node*)malloc(sizeof(struct node));
  count++;
  printf("inserting at first\n");
  temp->link=NULL;
  printf("enter the element\n");
  scanf("%d",&temp->n);
  temp->link=first;
  first=temp;
}

void insert_last()
{
  temp=(struct node*)malloc(sizeof(struct node));
  count++;
  printf("inserting at last\n");
  printf("enter the element\n");
  scanf("%d",&temp->n);
  temp->link=NULL;
  last->link=temp;
  last=temp;
}

void insert_mid()
{
  temp=(struct node*)malloc(sizeof(struct node));
  int pos;

  printf("inserting at mid\n");

  temp->link=NULL;
  printf("enter the position at which the element is to be inserted\n");
  scanf("%d",&pos);
  temp1=first;
  if(pos==1)
  {
    insert_first();
    goto l;
  }
  else if(pos==count+1)
    {
      insert_last();
      goto l;
    }
  printf("enter the element\n");
  scanf("%d",&temp->n);
  for(int i=2;i<pos;i++)
    temp1=temp1->link;
  temp->link=temp1->link;
  temp1->link=temp;
  count++;
  l:
  ;
}

void delete_first()
{

  count--;
  printf("deleting the first element %d ",first->n);
  temp=first;
  first=first->link;
  free(temp);
}

void delete_last()
{


  printf("deleting the last element %d",last->n);
  temp=first;
  for(int i=2;i<count;i++)
    temp=temp->link;
  temp1=temp->link;
  last=temp;
  free(temp1);
  count--;

}

void delete_mid()
{
  int num;


  printf("enter the position of the element to be deleted ",last->n);
  scanf("%d",&num);

  temp=first;

  for(int i=2;i<num;i++)
    temp=temp->link;
  temp1=temp->link;
  temp->link=temp1->link;
  free(temp1);
  count--;
}


void display()
{
  temp=first;
  for(int i=1;i<=count;i++)
  {
    printf(" %d ",temp->n);
    temp=temp->link;
  }

}
