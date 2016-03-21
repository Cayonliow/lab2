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
		
		void set(int h, int m)
		{
			mass = m;
			height = h;	
		}
		
		void setManupilate()
		{
			bmi=mass/pow((float)height/100,2);
		}
		
		float getBMI()
		{
			return bmi;
		}
		
		
		string range()
		{
			
		
		if(bmi<15)
			return "Very severely underweight";
			
		if(bmi>=15&&bmi<16)
			return "Severely underweight";
		
		if(bmi>=16&&bmi<18.5)
			return "Underweight";
			
		if(bmi>=18.5&&bmi<25)
			return "Normal";
			
		if(bmi>=25&&bmi<30)
			return "Overweight";
		
		if(bmi>=30&&bmi<35)
			return "Obese Class I (Moderately obese)";
		
		if(bmi>=35&&bmi<40)
			return "Obese Class II (Severely obese)";
			
		if(bmi>=40)
			return "Obese Class III (Very severely obese)";	
	}
	
};

