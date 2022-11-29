#include <vector>

int positive_sum (const std::vector<int> arr){
  int g=0;
  for(size_t k=0;k < arr.size();k++ ){
    if(arr[k] > 0){
      g += arr[k];
      }
  }
  return g;
}