/*
Rebecca van der Lee
C++ Fall 2019
Lab 4 Temperature Output
Design and write a C++ program that inputs a series of hourly temperature from a file, and outputs a bar chart (using stars) of the temperatures. The temperature should be 
printed to the left of the corresponding bar, and there should be a heading that gives the scale of the chart. The range of temperatures should be from  -30 to 120. Because 
it is hard to display 150 characters on the screen, you should have each star represent a range of 3 degrees. That way, the bars will be at most 50 characters wide. Use
meaningful variable names, proper indentation, and appropriate comments. Thoroughly test the program using your own data sets. Make sure to vet the values from the input
file.

*/



#include <iostream>
#include <string>
#include <iomanip>
#include <fstream> //for file input
#include <vector>// inlcuded for the function
using namespace std;




void header();

void positivevalues(float);

void negativevalues(float);

int main()

{
	float tempvalues; //variable for the temperatures from the file

    ifstream infile; //input variable
	inFile.open(test.txt); //opens the file 
	
	
	float temp; 
	vector<float>tempData{};

		infile.open("test.txt");
		if(!infile)
		{
			cout << "Input file failed";
			return 1;
		}

	infile >> temp;

	cout << "Temperatures for 24 hours:\n";
	cout << setw(7) << "-30" << setw(8) << "0" << setw(10) << "30" << setw(10) << "60" << setw(10) << "90" << setw(10) << "120" << endl;

	while (infile)
	{
            tempData.push_back(temp);
			infile >> temp;
			


	

	
	


	

	for (float temp : tempData);
	{
		string stars;
		stars = "*";

		cout << temp << ":";
		for (int i = 1; i <= (abs(temp) / 3.0); ++i)
		{
			stars.append("*");
		}

		if (temp >= -30 && temp <= -10)
		{
			cout << setw(10) << stars << "|";
		}



		else if (temp > -10 && temp < 0)
		{
			cout << setw(11) << stars << "|";
		}

		else if (temp >= 0 && temp < 10)
		{
			cout << setw(13) << "|" << stars;
		}


		else if (temp >= 10 && temp < 100)
		{
			cout << setw(12) << "|" << stars;
		}

		else if (temp >= 100 && temp <= 120)
		{
			cout << setw(11) << "|" << stars;
		}
	    }
	
		

		cout << endl;


		
	}


	return 0;




}
