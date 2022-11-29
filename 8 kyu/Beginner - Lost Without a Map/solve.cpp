std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> x;
  for(int k : values){
    x.push_back(k*2);
  }
  return x;
}