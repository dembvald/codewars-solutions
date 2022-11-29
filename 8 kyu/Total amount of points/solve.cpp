int points(const std::array<std::string, 10>& games){
int r=0; 

  for(int i=0;i < 10;i++){
  
    if(games[i][0] - '0' > games[i][2] - '0'){
       r+=3;
      }
  else if(games[i][0] - '0' == games[i][2] - '0'){
    r+=1;
   }
}  
    return r;
}