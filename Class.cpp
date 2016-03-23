#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
#include"Class.h"

using namespace std;

	void Class1::set(int h, int m)
	{
		mass = m;
		height = h;	
	}
		
	void Class1::setManupilate()
	{
		bmi=mass/pow((float)height/100,2);
	}
		
	float Class1::getBMI()
	{
		return bmi;
	}
		
	string Class1::range()
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
	};
