int persistence(long long n){
     long long namber = 1;
     long long res = 0;
     std::string nambers;
     while(n >= 10)
     {

         nambers += std::to_string(n);
         for(auto i : nambers)
         {
            namber *= i - '0';
            n = namber;
         }
         res++;
         nambers.erase();
         namber = 1;
     }
     return res;
}