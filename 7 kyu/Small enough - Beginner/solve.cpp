#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  if(arr.size() == 0) return true;
  if(*std::max_element(std::begin(arr), std::end(arr)) > limit) return false;
    else return true;
}