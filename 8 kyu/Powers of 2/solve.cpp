#include <vector>
#include <cstdint>

uint64_t stepOfTwo(uint64_t step)
{
  uint64_t res;
  uint64_t x=2;
  if(step==0){
    res=1;
  }
  else if(step==1){
    res=2;
  }
  else{
   for(uint64_t s=1; s<step; s++)
   {
     x*=2;
     res=x;
   }
  }
  return res;
}

std::vector<uint64_t> powers_of_two(uint64_t n) {
  std::vector<uint64_t> result;
  for ( uint64_t i = 0; i<=n; ++i)
  {
    uint64_t res = stepOfTwo(i);
    result.push_back(res);
  }
  
  return result;
}