#include <iostream>
#include <string>

class TV 
{
  private:
    std::string name;
    std::string country1;
    std::string country2;
  public:
    TV(std::string n = "" , std::string c1 = "", std::string c2 = "") : name(n), country1(c1), country2(c2)
    {}

    std::string get_name()
    {
      return name;
    }

    std::string get_country1()
    {
      return country1;
    }

    std::string get_country2()
    {
      return country2;
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
  std::string A;
  std::string B;
  std::cin >> A >> B;
  for(int i = 0; i < N; ++i) {
    if(A == t[i].get_country1() && B== t[i].get_country2()) {
      c++;
      std::cout  << t[i].get_name() << std::endl;
      c++;
    }   
  }
  if(c == 0) {
    std::cout << "Not found!" << std::endl;
  }
  return 0;
}
