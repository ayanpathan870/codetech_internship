//program that converts temperature between celcius,fahrenheit, and kelvin.the program should allow the user to input a temperature in one scale and output the converted temperature in another scale.
#include<iostream>
using namespace std;
int main()
{
	float kelvin;
	float celcius;
	float fahrenheit;
	string input;
	
	cout<<"write name of the scale that yo want to convert into others scale:\n"<<endl;
	cout<<"\n c for celcius \n k for kelvin \n f for fahrenheit \n  "<<endl;
	cin>>input;
	
	if(input=="c")
	{
		cout<<"enter the temperature in celcius: ";
		cin>>celcius;
		fahrenheit=celcius*9/5+32;
		kelvin=celcius+273.15;
	}else if(input=="k")
	{
		cout<<"enter the temperature in kelvin: ";
		cin>>kelvin;
		celcius=kelvin-273.15;
		fahrenheit=(kelvin-273.15)*9/5+32;
	}
	else if(input=="f")
	{
		cout<<"enter the temperature in fahrenheit: ";
		cin>>fahrenheit;
		celcius=(fahrenheit-32)*5/9;
		kelvin=(fahrenheit-32)*5/9+273.15;
	}
	else
	{
		cout<<" write correct option.\n";
	}
	
	
	if(input=="c")
	{
		cout<<"in fahrenheit  :"<<fahrenheit<<endl;
		cout<<"in kelvin      :"<<kelvin<<endl;	
	}
	else if(input=="f")
	{
		cout<<"in kelvin   :"<<kelvin<<endl;
		cout<<"in celcius  :"<<celcius<<endl;	
	}
	else if(input=="k")
	{
		cout<<"in fahrenheit  :"<<fahrenheit<<endl;
		cout<<"in celcius     :"<<celcius<<endl;	
	}
	
	
}
