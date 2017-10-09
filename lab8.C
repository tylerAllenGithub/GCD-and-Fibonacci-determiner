#include <iostream>
using namespace std;

int gcd(int x, int y)
{
  if(y==0)
    return x;
else
  return gcd(y, x%y);
}

bool fib(int a, int b=0, int c=1)
{
  if(a==c)
    return true;  
  else if(a<c)
    {
      return false;
    }
  else
    return fib(a, c, b+c);  
}

int main()
{
  int num1;
  int num2;
  cout<<"Enter a number: ";
  cin>>num1;
  cout<<"Enter a number: ";
  cin>>num2;

  cout<<"GCD is "<<gcd(num1, num2)<<endl;

  int input;
do 
  {
    cout<<"Enter a number (enter a negative number to quit): ";
      cin>>input;
    if(fib(input))
      cout<<"Yes, you got it, "<<input<<" is a Fibonacci number."<<endl;
    else
      cout<<"!!!!! Sorry "<<"input is not a Fibonacci Number"<<endl;
      }while(input>=0);
 cout<<"Thanks- Have a good Day"<<endl;

  return 0;
}
