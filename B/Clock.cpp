#include"Clock.h"

Clock::Clock(void){
	setStart(0);
}

Clock::Clock(clock_t input){
	setStart(input);
}

void Clock::start(void){
	setStart(clock());
}

double Clock::getElapsedTime(void){
	return static_cast<double>(clock()-getStart())/CLOCKS_PER_SEC;
}

clock_t Clock::getStart(void){
	return start_ts;
}

void Clock::setStart(clock_t in){
	start_ts = (in>0) ? in : clock() ;
}
