#include <iostream>
#include <string>

class Train
{
  private:
    std::string city;
    std::string day;
    std::string race;
  public:
    Train(std::string c = "" , std::string r = "", std::string d = "") : city(c), day(d),race(r) 
    {}

    std::string get_city()
    {
      return city;
    }

    std::string get_day()
    {
      return day;
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
  int d = 0;
  std::string C;
  std::string D;
  std::cin >> N;
  Train* t = new Train[N];
  for(int i = 0; i < N; ++i) {
    std::string c;
    std::string r;
    std::string d;
    std::cin >> c >> r >> d;
    t[i] = Train(c, r, d);
  }
  std::cin >> C;
  std::cin>>D;
  for(int i = 0; i < N; ++i) {
    if(C == t[i].get_city() && D == t[i].get_day()) {
      std::cout  << t[i].get_race() << std::endl;
      c++;
      d++;
    }   
  }
  if(c == 0 && d == 0) {
    std::cout << "Unreachable city!" << std::endl;
  }
  delete [] t;
  return 0;
}