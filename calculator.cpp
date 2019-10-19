#include <iostream>
using namespace std;
float subtract(float a,float b)  //function to calculate subtraction
{
	float sub=a-b;
	return sub;
}
float multiply(float a,float b)  //function to calculate multiplication
{
	float mul=a*b;
	return mul;
}
int divide(int a,int b)   //function to calculate division
{
	int div= a/b;
	return div;
}
int max(int a,int b)    //function to calculate Maximum
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int square(int a)
{
	int result=a*a;
	return result;
}
int cube(int a)
{
	int result=a*a*a;
	return result;
}
int main()
{
	cout<<"_CHOOSE OPTION_"<<endl;
	cout<<"1.subraction"<<endl;
	cout<<"2.multipication"<<endl;
	cout<<"3.division"<<endl;
	cout<<"4.maximum of 2 numbers"<<endl;
	cout<<"5.minimum of 2 numbers"<<endl;
	cout<<"6.square"<<endl;
	cout<<"7.cube"<<endl;
	int a;
	cin>>a;
	cout<<"_ENTER NUMBERS TO OPERATE_"<<endl;
	int x,y;
	cin>>x>>y;
	if(a==1)
	{
	 cout<<"subraction= "<<subtract(x,y)<<endl;
	}	
	if(a==2)
	{
		cout<<"multipication= "<<multiply(x,y)<<endl;
	}
	if(a==3)
	{
		cout<<"division= "<<divide(x,y)<<endl;
	}
	if(a==4)
	{
		cout<<"maximum of 2 numbers= "<<max(x,y)<<endl;
	}
	if(a==5)
	{
		cout<<"minimum of 2 numbers= "<<min(x,y)<<endl;
	}
	if(a==6)
	{
		cout<<"square= "<<square(x)<<endl;
	}
	if(a==7)
	{
		cout<<"cube= "<<cube(x)<<endl;
	}
	return 0;
}

