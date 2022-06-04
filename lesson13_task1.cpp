#include <iostream>
#include <string>
#include <vector>

class Train
{
private:
  std::string city;
  std::string race;
public:
  Train(std::string c, std::string r)
   : city(c), race(r)
  {}
  
  std::string get_city()
  {
    return city;
  }
  std::string get_race()
  {
    return race;
  }
};

int main()
{
  int n;
  std::cin >> n;
  
  std::vector<Train> races;
  for (int i = 0; i < n; ++i) {
    std::string c, r;
    std::cin >> c >> r;
    Train t(c, r);
    races.push_back(t);
  }

  std::string cityToFind;
  std::cin >> cityToFind;

  bool found = false;
  for (int i = 0; i < races.size(); ++i)  {
    if (cityToFind == races[i].get_city())  {
      std::cout << races[i].get_race() << "\n";
      found = true;
    }
  }
  if (!found) {
    std::cout << "Unreachable city!\n";
  }
  return 0;
}