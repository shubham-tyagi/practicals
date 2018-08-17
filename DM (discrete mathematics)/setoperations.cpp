//program to perform set operations between two set

#include<iostream>
using namespace std;
int check(int m,int n,int arr2[],int arr1[]);
int main()
{
  int arr1[10]={0},arr2[10]={0},arr3[20]={0},arr4[10]={0};
  int n,m,i,j,ct=0,flag=0,ch,l;
  cout<<"enter the no of elements in set 1 and set 2 "; // input of number of elements in two sets
  cin>>n>>m;
  cout<<"enter the elements in array 1 ";               //this array will store the elements in array 1
  for(i=0;i<n;i++)
  {
    cin>>arr1[i];

  }
  cout<<"enter the elements in array 2 ";            //read the number of elemts in array 2
  for(i=0;i<m;i++)
  {
    cin>>arr2[i];                                     //this array stores the value in array2;
  }
  cout<<"1.union\n";
  cout<<"2.intersectiom\n";
  cout<<"3.complement\n";
  cout<<"enter your choice ";  //user needs to enter his choice of the action he wants to perform on the two sets
  cin>>ch;
  switch(ch)
  {
   case 1:                                 // this case will perform union of two sets;
   for(i=0;i<n;i++)
    arr3[i]=arr1[i];
   ct=i;

   for(i=0;i<m;i++)
   {flag=0;                         //flag determines whether the elemts is in the other array or not
   for(j=0;j<n;j++)
   {
     if(arr2[i]==arr1[j])
      {
        flag++;
        break;
      }

   }
  if(flag==0)                      // if flag does not change then enter the value
    {
   arr3[ct]=arr2[i];
   ct++;
    }
   }

  cout<<"\n";
  cout<<"{";
  for(i=0;i<ct;i++)                 //output of the union array;
  cout<<arr3[i]<<",";
  cout<<"0}";
 break;

case 2:                        // case for the intersection
 for(i=0;i<m;i++)
{flag=0;
 for(j=0;j<n;j++)                  // flag determines whether the element is in both the array or not
 {
   if(arr2[i]==arr1[j])
    {
      flag++;
      break;
    }
 }
 if(flag==1)                             // if element in both the array then copy it in the resultant
  {
   arr3[ct]=arr2[i];
   ct++;
  }
 }

cout<<"\n";
cout<<"{";
for(i=0;i<ct;i++)                        // output of the intersection array;
cout<<arr3[i]<<",";
cout<<"0}";
break;

case 3:                                          // case for printing complement
cout<<"\n enter the number of elements in the universal set ";
cin>>l;                      //read no of elements in the universal array;
cout<<"\nenter your universal set ";
for(i=0;i<l;i++)
{
  cin>>arr4[i];                         // input of the universal array;
}

cout<<"\n1.complement with respect to A";
cout<<"\n2.complement with respect to B";
cout<<"\nenter your choice ";                   // user needs to enter his choice
cin>>ch;
for(i=0;i<l;i++)
{flag=0;                   //nested for loop for checking a single element with all the elements in other set
  for(j=0;j<n;j++)
  {
    if(ch==1)
    {
     if(arr4[i]==arr1[j])
     { flag++;                //flag dtermines whether the element is in other array or not
      break;}
    }
    if(ch==2)
    {
      if(arr4[i]==arr2[j])               //if it is not present in array B then to flag++
      {
        flag++;
        break;
      }
    }
  }
  if(flag==0)
  {
    arr3[ct]=arr4[i];       //if the element is not prent in set a or set b then copy it to different array 3;
    ct++;
  }
}
cout<<"\n";
cout<<"{";
for(i=0;i<ct;i++)
cout<<arr3[i]<<",";           //printing of the complement array ;
cout<<"0}";
break;

default :"\n sorry wrong choice";
break;
}

return 0;
}
