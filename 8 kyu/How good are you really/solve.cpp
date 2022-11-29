#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  classPoints.push_back(yourPoints);
  int x = 0;
  for(int i=0;i<classPoints.size(); i++)
  {
   x += classPoints[i];  
  } 
  if(x/classPoints.size() < yourPoints)
    {
    return true;
  }
    else
      {
      return false;
    }
}