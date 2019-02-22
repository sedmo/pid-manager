#include "pidManager.h"

int allocate_map() {
	pid_map.fill(0);
	return 1;
}

int allocate_pid() {
	for(int i = 0; i < MAX_PID - MIN_PID; i++) {
		if(pid_map[i] == 0) {
			pid_map[i] = 1;
			return i + MIN_PID;
		}
	}
    //if exhausted all elements w. o. finding 0, all elements are 1 (being used)
	return -1;
}

void release_pid(int pid) {
	pid_map[MIN_PID + pid] = 0;
}