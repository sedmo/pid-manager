// Programming Assignment #1
// Author: Stephan Edmonson
// Role: created and implemented pidManager.h library
// Problem: In order for the OS to keep track of how many processes it has open at a given time, a program that manages this would help.
// Problem continued: In the assignment, create some program that would assist the OS in managing processes by assigning each 
// Problem continued: process a unique process id (PID)
// Assumptions: when all PIDs are used, the OS would know how to handle such a situation.
// Assumptions continued: In addition, there is maybe a higher threshold of processes the OS can handle than the pidManager says.
// Issues that came about in creating program: Since there are no params given to allocate_map, I was not sure how I could know 
//                                             when it is unsuccessful.

// Main.cpp


#include <iostream>
#include "pidManager.cpp"

int main()
{
	allocate_map();
	int current_pid = allocate_pid();
	std::cout<< "Allocated PID: "<< current_pid <<std::endl;
	release_pid(current_pid);

	return 0;
}