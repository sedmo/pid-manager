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
 * int allocate_map: Allocates and returns a pid;
 *
 * params:none
 *
 * return value :
*                   -1 if unsuccessful
*                    1 if successful
*/
int allocate_pid();

/**
 * void allocate_map: Creates and initializes a data structure for representing pids;
 *
 * params:none
 *
 * return value : none
 *
*/
void release_pid(int pid);