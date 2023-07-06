#ifndef THREEM_H
#define THREEM_H

class ThreeM
{
	public:
		
		int n;
		int x[100];
		double mean;
		double meanSubTotal;
		double varSubTotal;
		double variance;
		double sD;
		
		
		
		
		
		ThreeM();
		getData();
		getMean();
		getVar();
		getsD();
		
	protected:
};

#endif
