//program for executing summation of the simple polynomial after putting the value of x in it

#include<iostream>
#include<math.h>
using namespace std;
int main()
{ char ch;
  int h1,i,sum;
  do{     sum=0;    //sum=0 for the neglection of garbage value
  cout<<"\nenter the highest power of the equation ";
  cin>>h1;
  int *arr=new int[h1];           //dynamic memory allocation of number of array elements

  for(i=0;i<=h1;i++)
{
      cout<<"enter the coefficient for power "<<i<<" ";
      cin>>arr[i];                 // input of coefficients of polynomial
}
  cout<<endl<<arr[h1]<<"x^"<<h1;            //output of the polynomial
  for(i=h1-1;i>=0;i--)
    cout<<"+"<<arr[i]<<"x^"<<i;
    int x;
    cout<<"\n\nenter the value of x ";
    cin>>x;
    cout<<"\n\n";
    cout<<arr[h1]<<"("<<x<<")^"<<h1;   //output of the polynomial with the entered value of x
    for(i=h1-1;i>=0;i--)
      cout<<"+"<<arr[i]<<"("<<x<<")^"<<i;
      for(i=0;i<=h1;i++)
      {
        sum=sum+arr[i]*(pow(x,i));         //calculatiom of the summation of the polynomial
      }
      cout<<"\n";
      cout<<"\nsum = "<<sum;             //output of the summation;
    cout<<endl;
    cout<<"enter 0 to exit";
    cin>>ch;
  }while(ch!='0');
    return 0;
}
