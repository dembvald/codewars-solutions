#include<vector>
#include <cmath>

bool isPrime(int num) {
  if(num < 0) num *= -1;
  if(num == 0 || num == 1) return false;
  if(num == 2 || num == 3 || num == 5 || num == 7 || num == 11)return true;
 for(int i = 2;i <= sqrt(num);i++){
      if(num % i == 0)return false;
  }
  return true;
 }

std::vector<int> prime_factors(long n){
  std::vector<int> res;  
  while(n > 1)
    {
        if (isPrime(n))
          {
          res.push_back(n);
          break;
          }
        for(long s = 2;;s++)
        {
            if(isPrime(s) && n % s == 0)
            {
                n /= s;
                res.push_back(s);
                break;
            }
        }
    }
  return res;
 }