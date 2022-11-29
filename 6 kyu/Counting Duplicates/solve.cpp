size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    std::string fff (in);
    std::string FF ("");
     std::string res ("");
    int x = 0;
    for(auto i : fff)
    {
       FF += std::tolower(i);
    }
    for(auto g : FF)
    {
        int int_FF = count(res.begin(),res.end(),g);
              if(int_FF == 0)
              {
                 res += g;
                 std::cout<<res<<std::endl;
              }
    }
    for(auto s : res)
    {
        int int_res = count(FF.begin(),FF.end(),s);
        if(int_res >= 2)
        {
            x++;
        }
    }
  return x;
}