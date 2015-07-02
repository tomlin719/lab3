#ifndef CLOCKH
#define CLOCKH
#include<ctime>
#include<iostream>

using namespace std;

class Clock{
	public:
		Clock(void);
		Clock(clock_t in);
		void start(void);
		double getElapsedTime(void);
	private:
		clock_t start_ts;
		clock_t getStart(void);
		void setStart(clock_t in);
};

#endif
