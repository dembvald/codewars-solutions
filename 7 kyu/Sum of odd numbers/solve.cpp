long long rowSumOddNumbers(unsigned n){
  unsigned g = 1;
  for(unsigned i=0;i<n;i++){
    for(unsigned s=0;s<i;s++){
        g+=2;
    }
  }
  unsigned j=0;
  for(unsigned i=0;i<n;i++,g+=2){
    j+=g;
  }
  return j;
}