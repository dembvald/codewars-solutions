#include <vector>

int findOdd(const std::vector<int>& numbers){
       for(auto i : numbers)
     {
         int t = count(numbers.begin(),numbers.end(),i);
         if(t % 2 != 0)
         {
            return i;
            break;
         }
     }
}