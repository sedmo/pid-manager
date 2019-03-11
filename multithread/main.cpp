// Programming Assignment #2
// Author: Stephan Edmonson
// Role: created and implemented pidManager and main
// Problem : We must now have the pid manager run multiple threads concurrently.
// Issues that I had: not knowing I needed to add the -pthread option when attempting to compile

// Multithread.cpp
//REFER TO https://computing.llnl.gov/tutorials/pthreads/#Compiling for compiling (-pthread works for g++)

#include "../singlethread/pidManager.cpp"
#include <iostream>
#include <thread>
#include <chrono>   // std::chrono::seconds
#include <stdlib.h> // srand, rand
#include <time.h>   // time
#include <vector>

#define THREAD_COUNT 100

int main()
{
	allocate_map();
	std::vector<std::thread> threads;

	//seed for time
	srand(time(NULL));

	for (int i = 0; i < THREAD_COUNT; i++)
		threads.push_back(std::thread(request_sleep_release)); //threads at i starts running

	for (auto &th : threads)
		th.join(); // main thread stops and waits until all threads are done executing

	return 0;
}
