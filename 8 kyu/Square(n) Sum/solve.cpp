#include <vector>
#include <math.h>

int square_sum(const std::vector<int>& numbers)
{
   if (numbers.size() > 0){
     int x=0;
     for(size_t i=0;i < numbers.size();i++){
       x += pow(numbers[i],2);
     }
     return x;
   }
  else{
    return 0;
  } 
}