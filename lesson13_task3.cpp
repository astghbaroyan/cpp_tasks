#include <iostream>
#include <string>

class Train
{
  private:
    std::string city1;
    std::string city2;
    std::string race;
  public:
    Train(std::string c1="" , std::string c2="", std::string r = "" ) : city1(c1), city2(c2), race(r)
    {}

    std::string get_city1()
    {
      return city1;
    }

    std::string get_city2()
    {
      return city2;
    }

    std::string get_race()
    {
      return race;
    }
};


int main()
{ 
  int N;
  int c = 0;
  std::string A, B, C;
  std::cin >> N;
  Train* t = new Train[N];
  for(int i = 0; i < N; ++i) {
    std::string c1;
    std::string c2;
    std::string r;
    std::cin >> c1 >> c2 >> r;
    t[i] = Train(c1, c2, r);
  }
  std::cin >> A>>B>>C;
  for(int i = 0; i < N; ++i) {
    if(A == t[i].get_city1()  &&  B == t[i].get_city2()) {
      std::cout  << t[i].get_race() << std::endl;
      c++;
    }   
  }
  for(int i = 0; i < N; ++i) {
    if(B == t[i].get_city1()  &&  C == t[i].get_city2()) {
      std::cout  << t[i].get_race() << std::endl;
      c++;
    }   
  }
  if(c == 0) {
    std::cout << "Unreachable city!";
  }
  return 0;
}
