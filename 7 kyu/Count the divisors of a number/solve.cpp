int divisors(int n){ 
  double k=0;
  int c=0;
  for(int i=1;i<=n;i++){
  k = n % i ;
    if(k == 0){
      c++;
      }
  }
  return c;
}