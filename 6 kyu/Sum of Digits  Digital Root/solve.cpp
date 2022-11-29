int digital_root(int n)
{
       std::vector<int> in {};
     std::string st ("");
     for(;;)
     {
         int sum = 0;
         st = std::to_string(n);
         for(auto s : st)
         {
           in.push_back(s-'0');
         }
         for(auto i : in)
         {
            sum += i;
            n = sum;
            in.clear();
            st.clear();
         }
         if(n < 10)break;
     }
    return n;
 }