#include "syscalls.h"
using namespace std;
int main(){
  cpu_set_t affinityMask = 2;
  int err = sched_setaffinity( 0, sizeof(cpu_set_t), &affinityMask );
  for(;;){}

}