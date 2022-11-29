std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
  if(n<=3){
     for(int i=0;i<n;i++){
     result.push_back(signature[i]);
    }
    return result;
    }
    for(auto i : signature){
    result.push_back(i);
    }
    for(int i=0;i<n-3;i++){
     int sum = result[i]+result[i+1]+result[i+2];
     result.push_back(sum);
 }
    return result;
}