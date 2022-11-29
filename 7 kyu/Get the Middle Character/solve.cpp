std::string get_middle(std::string input) 
{
  std::string inv;
 if(input.size()%2 == 0){
    inv += input[(input.size()/2)-1];
    inv += input[input.size()/2];
 }
 else{
  inv += input[(input.size()/2)];
 }
 return inv;
}