#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

class Class1
{
	private:
		
		int mass; int height;
		float bmi;
		
	public:
		
		void set(int h, int m);
		void setManupilate();
		float getBMI();
		string range();

	
};

