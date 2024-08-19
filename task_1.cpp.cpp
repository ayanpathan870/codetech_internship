//simple quiz game that presents multiple choice questions to the user.the game should keep track of the user's score and provide feedback on their answers..
#include<iostream>
using namespace std;
int main()
{
	string q[5]={"what is the capital of maharashtra.","what is the capital of india","what is the capital of gujrat","what is the capital of telangana","what is the capital of kanatka"};
	string op[5]={"(a)nagpur (b)mumbai (c)ahmednagar (d)pune","(a)up (b)maharashtra (c)manipur (d)delhi","(a)gandhinagar (b)rajkot (c)ahmedabad (d)kachchh","(a)nizamabad (b)hydrabad (c)adilabad (d)nalgonda","(a)bagalkoat (b)ballari (c)bengaluru (d)bidar"};
	char ans[5];
	char r_ans[5]={'b','d','a','b','c'};
	int marks=0;
	cout<<"every question contain 20 marks.\n"<<endl;
	cout<<"-----------------------------------------"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<q[i]<<endl<<endl;
		cout<<op[i]<<endl;
		cin>>ans[i];
		if(ans[i]==r_ans[i])
		{
			marks=marks+20;
		}
		
	}
	cout<<"your marks is "<<marks<<" out of 100 \n";
}
