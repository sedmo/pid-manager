// Programming Assignment #2
// Author: Stephan Edmonson
// Role: created and implemented pidManager.h library
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

//create function that threads will execute
/**
	 * void request_sleep_release:
	 * params: 
	 * return value: 
	 **/
void request_sleep_release()
{
	int process = allocate_pid();
	std::cout << "process number: " << process << " now allocated" << std::endl;
	/* generate secret number between 1 and 5: */
	int sec = rand() % 5 + 1;
	//sleep
	std::this_thread::sleep_for(std::chrono::seconds(sec));
	//release
	release_pid(process);
	//confirmation
	std::cout << "process number: " << process << " now released" << std::endl;
}

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
