class GpsSpeed
{
public:
    static int gps(int s, std::vector<double> &x)
      {
      if(x.size() <= 1){
        return 0;
      }
       double I=1;
       std::vector<double> y;
       for(auto i : x){
         if(x.size() == I) break;
         double j = 3600 * ((x[I])-i) / s;
         I++;
         y.push_back(j);
        }
        int f = *std::max_element(std::begin(y), std::end(y));
        return f;
    }
};