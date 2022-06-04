#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class Time
{
  private:
  int hours;
  int minute;
  int second;

  public:
  Time(int h=0, int m=0, int s=0) : hours(h), minute(m), second(s) {}
  
  int get_hours()
  {
    return hours;
  }

  int get_minute()
  {
    return minute;
  }

  int get_second()
  {
    return second;
  }
};

void noon(Time times[], int n)
{
  
  int index = 0;
  int x = 0;

 for(int i = 0; i < n; i++)
 {
   int y = 60 * ((times[i].get_hours() * 60 + times[i].get_minute() + times[i].get_second()));
   if(x < y)
   {
     x = y;
     index = i;
   }
 }
 cout<< times[index].get_hours() << " " << times[index].get_minute() << " " << times[index].get_second() << "\n";
}

int main() 
{
  int n;
  cin >> n;

  Time* times = new Time[n];

  for(int i = 0; i < n; i++)
  {
     unsigned int h, m, s;
     cin >> h >> m >> s;
     if(h <= 23 && m <= 59 && s <= 59)
     {
     times[i] = Time(h, m, s);
     }
  }

  noon(times, n);

  return 0;
}