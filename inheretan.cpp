#include <bits/stdc++.h>
using namespace std;


class employee
{
	private:
	string name;
    int number;
	public:
	void getdata(void);
	void printdata(void);
	employee()
	{cout<<"employee constructor\n";}
};


class manager : public employee
{
	public:
	string name;
    int club_dues;
	manager()
	{cout<<"manager constructor\n";}
};

class scientist : public employee
{
	public:
	string name;
    int club_dues;
	scientist()
	{cout<<"scientist constructor\n";}
};

class labour : public employee
{

};

void employee::getdata(void) {
   cin>>number;
   cin>>name;
}

void employee::printdata(void) {
   cout<<number<<"\n";
   cout<<name;
}

int main(void)
{
	
		employee e1;
		//manager e2;
		labour l1;
		l1.getdata();
		l1.printdata();
		return 0;
}
