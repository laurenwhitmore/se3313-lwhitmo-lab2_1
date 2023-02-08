#include <iostream>
#include "SharedObject.h"

struct MyShared{
	int threadId;
	int reportId;
	int timePassed;
};
int main(void)
{
	std::cout << "I am a reader" << std::endl;
	Shared<MyShared> sharedMemory("sharedMemory");//create shared memory object
	while(true){
		std::cout<<"Reader Thread: "<< sharedMemory -> threadId << " "<< sharedMemory->reportId <<" "<< sharedMemory->timePassed <<std::endl;
		sleep(3);
	}
}
