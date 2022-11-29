class RGBToHex
{
  public:
  static std::string parse(int col)
{
    if(col > 255)col = 255;
    if(col < 0)col = 0;
    std::stringstream sr;
    sr << std::hex << col;
    std::string resCol( sr.str() );
    if(col < 16)resCol = '0' + resCol;
    return resCol;
}
  static std::string rgb(int r, int g, int b){
    std::string RGB = parse(r) + parse(g) + parse(b);
    std::string res;
    for(auto i : RGB)
    {
        res += std::toupper(i);
    }
    return res;
  }
};