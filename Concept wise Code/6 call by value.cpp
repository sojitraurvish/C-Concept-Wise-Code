/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

// call by value
#include<iostream>
using namespace std;

void myswap(int a,int b)
{
      int tmp=a;
      a=b;
      b=tmp;
      
      cout << "in function" << a << "and"<< b << endl;
}
int main()
{
	int x=10,y=20;
	
	cout << "before call" << x << "and"<< y << endl;
	
	myswap(x,y);
	
	cout << "after call" << x << "and"<< y << endl;
	return 0;
}
