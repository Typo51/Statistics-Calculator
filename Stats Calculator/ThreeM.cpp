#include <iostream>
#include "ThreeM.h"
#include <cmath>

using namespace std;

ThreeM::ThreeM()
{
	n=0;
	mean=0;	
	meanSubTotal=0;
	varSubTotal=0;
	variance=0;
	sD=0;

}


ThreeM::getData()
{
	cout << "How many Data are you going to input: ";
	cin >> n;
	
	cout << "Please enter the data: ";
	cout << endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>x[i];
	}
	
	for(int i=0; i<n; i++)
	{
		cout << x[i] << endl;
	}

}


ThreeM::getMean()
{
	for(int i=0; i<n; i++)
	{
		meanSubTotal += x[i];
	}
	
	mean = meanSubTotal / n;
	
	cout << endl;
	cout << "Mean: " << mean << endl;
}

ThreeM::getVar()
{
	
	for(int i=0; i<n; i++)
	{
		varSubTotal+= pow(x[i] - mean, 2);
	}
	

	variance = varSubTotal / (n - 1);
	
	cout << "Sum of Squares: " << varSubTotal << endl;
	cout << "Variance: " << variance << endl;
	
}

ThreeM::getsD()
{
	sD= sqrt(variance);
	
	cout << endl;
	cout << "Standard Deviation: " << sD << endl;
	
}

