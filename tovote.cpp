#include<iostream>
#include<cstring>
using namespace std;
void vote(char name[20],int age)
{
	if(age>=18)
	cout<<name<<" is eligible to vote";
	else
	cout<<name<<" is not eligible to vote";
}
int main()
{
	char name[20];
	int age;
	cout<<"Enter the name:";
	cin>>name;
	cout<<"Enter the age:";
	cin>>age;
	vote(name,age);
	return 0;
}
