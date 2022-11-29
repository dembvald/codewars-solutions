#include <vector>
#include <math.h>

int index(const std::vector<int> &vector, int n) {
  int f = vector.size();
  for(int i = 0;i < f;i++){
    if(f - n > 0 )
      return pow(vector[n],n);
    else
      return -1;
  }
}