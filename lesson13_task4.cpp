#include <iostream>
#include <string>

class TV 
{
  private:
    std::string name;
    std::string country;
    std::string diagonal;
  public:
    TV(std::string n = "" , std::string c = "", std::string d ="") : name(n),country(c), diagonal(d)
    {}

    std::string get_name()
    {
      return name;
    }

    std::string get_country()
    {
      return country;
    }

    std::string get_diagonal()
    {
      return diagonal;
    }
    
};

int main()
{ 
  int N;
  int c = 0;
  std::cin >> N;
  TV* t = new TV[N];
  for(int i = 0; i < N; ++i) {
    std::string n;
    std::string c;
    std::string d;
    std::cin >> n >> c >> d;
    t[i] = TV(n, c, d);
  }
  std::string M;
  std::cin >> M;
  for(int i = 0; i < N; ++i) {
    if(M == t[i].get_name()) {
      c++;
      std::cout  << t[i].get_country() << " " << t[i].get_diagonal() << std::endl;
      c++;
    }   
  }
  if(c == 0) {
    std::cout << "Not found!" << std::endl;
  }
  return 0;
}
