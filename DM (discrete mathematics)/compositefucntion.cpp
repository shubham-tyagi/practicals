#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  char ch;
    int h1,i,sum,h2,x,j;
        sum=0;    //sum=0 for the neglection of garbage value

        //for equation 1
  cout<<"fog function starts :\n\n";
    cout<<"\nenter the highest power of the equation 1 ";
    cin>>h1;
    int *arr1=new int[h1];           //dynamic memory allocation of number of array elements

    for(i=0;i<=h1;i++)
  {
        cout<<"enter the coefficient for power "<<i<<" ";
        cin>>arr1[i];                 // input of coefficients of polynomial
  }
    cout<<endl<<arr1[h1]<<"x^"<<h1;            //output of the polynomial
    for(i=h1-1;i>=0;i--)
      cout<<"+"<<arr1[i]<<"x^"<<i;
int y=arr1[h1];

//for equation 2

      cout<<"\n\nenter the highest power of the equation 2 ";
      cin>>h2;
      int *arr2=new int[h2];           //dynamic memory allocation of number of array elements

      for(i=0;i<=h2;i++)
      {
          cout<<"enter the coefficient for power "<<i<<" ";
          cin>>arr2[i];                 // input of coefficients of polynomial
      }
      cout<<endl<<arr2[h2]<<"x^"<<h2;            //output of the polynomial
      for(i=h2-1;i>=0;i--)
        cout<<"+"<<arr2[i]<<"x^"<<i;

cout<<"\nenter the value of x for the equation\n";
cin>>x;

cout<<"\n\n";
cout<<arr2[h2]<<"("<<x<<")^"<<h2;   //output of the polynomial with the entered value of x
for(i=h2-1;i>=0;i--)
  cout<<"+"<<arr2[i]<<"("<<x<<")^"<<i;

  for(i=0;i<=h2;i++)
  {
    sum=sum+arr2[i]*(pow(x,i));         //calculatiom of the summation of the polynomial
  }

  cout<<"\n";
  cout<<"\nsum = "<<sum;

  cout<<"\n\n";
  cout<<y<<"( ";

  cout<<arr2[h2]<<"x^"<<h2;            //output of the polynomial
  for(i=h2-1;i>=0;i--)
      cout<<"+"<<arr2[i]<<"x^"<<i;

cout<<" )^"<<h1;   //output of the polynomial with the entered value of x
  for(j=h1-1;j>=0;j--)
  {
    cout<<"+"<<arr1[j]<<"( ";

    cout<<arr2[h2]<<"x^"<<h2;            //output of the polynomial
    for(i=h2-1;i>=0;i--)
        cout<<"+"<<arr2[i]<<"x^"<<i;

    cout<<" )^"<<j;
  }

cout<<"\n\n";
  cout<<y<<"("<<sum<<")^"<<h1;   //output of the polynomial with the entered value of x
  for(i=h1-1;i>=0;i--)
    cout<<"+"<<arr1[i]<<"("<<sum<<")^"<<i;


  int sum1=0;
  for(i=0;i<h1;i++)
  {
    sum1=sum1+arr1[i]*(pow(sum,i));         //calculatiom of the summation of the polynomial
  }
  sum1=sum1+y*(pow(sum,h1));
  cout<<"\n\nsum :"<<sum1;

cout<<"\n";





//now the gof function starts
cout<<"\ngof function starts :\n\n";
sum=0;
cout<<"\nenter the value of x for the equation 1 this time :\n";
cin>>x;

cout<<"\n\n";
cout<<y<<"("<<x<<")^"<<h1;   //output of the polynomial with the entered value of x
for(i=h1-1;i>=0;i--)
  cout<<"+"<<arr1[i]<<"("<<x<<")^"<<i;

  for(i=0;i<h1;i++)
  {
    sum=sum+arr1[i]*(pow(x,i));         //calculatiom of the summation of the polynomial
  }
  sum=sum+y*(pow(x,h1));

  cout<<"\n";
  cout<<"\nsum = "<<sum;

cout<<"\n\n";
cout<<arr2[h2]<<"( ";

cout<<y<<"x^"<<h1;            //output of the polynomial
for(i=h1-1;i>=0;i--)
    cout<<"+"<<arr1[i]<<"x^"<<i;

cout<<" )^"<<h2;   //output of the polynomial with the entered value of x
for(j=h2-1;j>=0;j--)
{
  cout<<"+"<<arr2[j]<<"( ";
  cout<<arr2[h2]<<"x^"<<h2;            //output of the polynomial
  for(i=h1-1;i>=0;i--)
      cout<<"+"<<arr1[i]<<"x^"<<i;

  cout<<" )^"<<j;
}

cout<<"\n\n";
cout<<arr2[h2]<<"("<<sum<<")^"<<h2;   //output of the polynomial with the entered value of x
for(i=h2-1;i>=0;i--)
  cout<<"+"<<arr2[i]<<"("<<sum<<")^"<<i;


sum1=0;
for(i=0;i<=h2;i++)
{
  sum1=sum1+arr2[i]*(pow(sum,i));         //calculatiom of the summation of the polynomial
}
// sum1=sum1+y*(pow(sum,h1));
cout<<"\n\nsum :"<<sum1;

cout<<"\n";
}
