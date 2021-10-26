#include <unistd.h>
#include <stdio.h>
void main()
{
  printf("Parent Process Id is %d\n", getppid());
  printf("Child Process Id is %d\n", getpid());
}
