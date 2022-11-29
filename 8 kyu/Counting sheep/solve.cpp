#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{ 
   int k=0,f = arr.size();
  for(int i=0;i<f;i++) 
    {
    if(arr[i] == true)
      {
      k++;
    }
  }
  return k;
} 
