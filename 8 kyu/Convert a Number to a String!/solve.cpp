#include <string>
#include <sstream>

std::string number_to_string(int num) {
  std::ostringstream x;
  x<<num;
  std::string sss = x.str();
  return sss;
}