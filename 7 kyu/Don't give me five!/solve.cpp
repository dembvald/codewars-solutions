int dontGiveMeFive(int start, int end)
{
  int f=0;
 std::string masa;
 for(int i=start;i<=end;i++,f++){
   masa = std::to_string(i);
   for(auto s : masa){
    if(s == '5'){
      f--;
      break;
    }
   }
 }
  return f;
}