#include<vector>

bool isValidWalk(std::vector<char> walk) {
  int w_size = walk.size();
     int n_count = count(walk.begin(),walk.end(),'n');
     int s_count = count(walk.begin(),walk.end(),'s');
     int w_count = count(walk.begin(),walk.end(),'w');
     int e_count = count(walk.begin(),walk.end(),'e');
     if(w_size == 10 && (n_count == s_count && w_count == e_count))return true;
     else return false;
}