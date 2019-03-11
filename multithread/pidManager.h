#define MIN_PID 300
#define MAX_PID 5000

#include <array>

std::array<int, MAX_PID - MIN_PID> pid_map;

/**
 * int allocate_map: Creates and initializes a data structure for representing pids;
 *
 * params:none
 *
 * return value:
 *                      -1 if unsuccessful
 *                       1 if successful
*/
int allocate_map();

/**
 * int allocate_pid: Allocates and returns a pid;
 *
 * params:none
 *
 * return value :
*                   -1 if unsuccessful
*                    1 if successful
*/
int allocate_pid();

/**
 * void release_pid: Creates and initializes a data structure for representing pids;
 *
 * params:none
 *
 * return value : none
 *
*/
void release_pid(int pid);

/**
	 * void request_sleep_release: function that threads will execute. requests pid, sleeps for random time then releases pid.
	 * params: 
	 * return value: 
	 **/
void request_sleep_release();