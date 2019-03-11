# pid-manager
Simple process identifier (PID) manager written in c++. Responsible for allocating space for, generating, and releasing process identifiers within a certain range.

Inspired by github user @ganemone (https://github.com/ganemone/pid-manager)

#### Problem: 
In order for the OS to keep track of how many processes it has open at a given time, a program that manages this would help. In the assignment, create some program that would assist the OS in managing processes by assigning each process a unique process id (PID)

#### Assumptions: 
When all PIDs are used, the OS would know how to handle such a situation. In addition, there is maybe a higher threshold of processes the OS can handle than the pidManager says.

Issues that came about in creating program: Since there are no params given to allocate_map, I was not sure how I could know       
