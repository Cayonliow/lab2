 #include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include"Class.h"
using namespace std;

int main()
{
	int mass,height;
	Class1 cls1;
	ifstream recordBMI("file.in",ios::in);
	if(!recordBMI)
	{
		cerr<<"Failed opening the file recordBMI"<<endl;
		exit(1);
	}
	
	ofstream printBMI("file.out",ios::out);
	if(!printBMI)
	{
		cerr<<"Failed opening the file printBMI"<<endl;
		exit(1);
	}
	
	while((recordBMI>>height>>mass)&&(height!=0&&mass!=0))
	{
		cls1.set(height,mass);
		cls1.setManupilate();
		printBMI<<fixed<<setprecision(2)<<cls1.getBMI()<<' ';
		printBMI<<cls1.range()<<endl;


	}
}
