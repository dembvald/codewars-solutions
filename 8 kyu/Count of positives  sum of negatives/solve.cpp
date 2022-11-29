#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{ 
  int x=0;
  int y=0;
  int k=input.size();
  for(int i=0;i < k;i++)
    {
    if(input[i]*-1<0)
      {
      x++;
    }
    else if(input[i]*-1>0)
     {
      y += input[i];
    }
  }
  std::vector<int> expected {x,y};
  if(x == 0 && y == 0)
    {
    expected = input;
  }
  return expected;
}