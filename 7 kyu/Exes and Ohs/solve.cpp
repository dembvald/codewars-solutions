bool XO(const std::string& str)
{
  
  int x=0,y=0;
  for(char i : str){
    i = std::tolower(i);
    if(i == 'x'){
      x++;
  }
  else if(i == 'o'){
    y++;
  }
}
  if(x == y){
    return true;
    }
  else{
    return false;
  }

}