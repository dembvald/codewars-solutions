class Automaton
{
public:
  bool read_commands(const std::vector<char>& commands){
  int p = 1;
  for(auto i : commands){
  if(p == 1 && i == '1'){
     p=2;
     }
  else if(p == 2 && i == '0'){
     p=3;
     }
  else if(p == 3 && (i == '1' || i == '0')){
      p=2;
      }
  }
  if(p == 2) return true ;
  else return false ;
    }
};