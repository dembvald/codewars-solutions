#include <vector>

int sum(std::vector<int> nums) {
   if(nums.size() == 0){
     return 0;
     }
  else {int n = 0;
    for(int i=0;i<nums.size();i++)
      n += nums[i];
      return n;    
  }
  
}
double sum(std::vector<double> nums) {
   if(nums.size() == 0){
     return 0;
     }
  else {double n = 0;
    for(double i=0;i<nums.size();i++)
      n+=nums[i];
      return n;    
  }
}