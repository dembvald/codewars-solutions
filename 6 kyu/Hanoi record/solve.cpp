#include <math.h>

unsigned long long hanoi(unsigned disks) {
  return pow(2,disks) - 1;
}