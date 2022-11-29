class Accumul
{
public:
    static std::string accum(const std::string &s){
       std::string a;
    int j=0;
    for(auto i : s){
        a += toupper(i);
        j++;
        for(int f=1;f<j;f++){
        a += tolower(i);
        }
        a += '-';
    }
    a.pop_back();
      return a;
    }
};