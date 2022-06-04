#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class point
{
  public:
  int x;
  int y;

  point(int a=0, int b=0) : x(a), y(b) {}
};

class Queue 
{
 public:
  Queue(int n);
  ~Queue();
  bool empty() const;
  point front() const;
  void enqueue(point obj);
  void dequeue();

 private:
  int size;
  int front_index; 
  int rear_index;  
  int capacity;
  point* data_array;
};

Queue::Queue(int n)
  : size(0)
  , front_index(0)
  , rear_index(-1)
{
  if (n <= 0) {
    n = 100;
  }
  capacity = n;
  data_array = new point[capacity];
}

Queue::~Queue() 
{
  delete[] data_array;
}

bool Queue::empty() const
{
  return size == 0;
}

point Queue::front() const
{
  return data_array[front_index];
}

void Queue::enqueue(point obj) 
{
  if (size == capacity) {
    return;
  }
  ++rear_index;
  if (rear_index == capacity) {
    rear_index = 0;
  }
  data_array[rear_index] = obj;
  ++size;
} 

void Queue::dequeue() 
{
  if (empty()) {
    return;
  }
  --size;
  ++front_index;
  if (front_index == capacity) {
    front_index = 0;
  }
}

int main()
{
  const int n = 8;
  string arr[n][n] = {"A8", "B8", "C8", "D8", "E8", "F8", "G8", "H8",
                      "A7", "B7", "C7", "D8", "E7", "f7", "G7", "H7",
                      "A6", "B6", "C6", "D6", "E6", "F6", "G6", "H6",
                      "A5", "B5", "C5", "D5", "E5", "F5", "G5", "H5",
                      "A4", "B4", "C4", "D4", "E4", "F4", "G4", "H4",
                      "A3", "B3", "C3", "D3", "E3", "F3", "G3", "H3",
                      "A2", "B2", "C2", "D2", "E2", "F2", "G2", "H2",
                      "A1", "B1", "C1", "D1", "E1", "F1", "G1", "H1"};

  int arr1[n][n];

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      arr1[i][j] = 0;
    }
  }

  string white_king;
  string black_king;
  cin >> white_king >> black_king;

  const int N = n * n;
  Queue q(N);          
  point p[N];
  int point_black_i, point_black_j;  
  

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(arr[i][j] == black_king)
      {
        point_black_i = i; point_black_j = j;
      }
      if(arr[i][j] == white_king)
      {
        p[0].x = i, p[0].y = j;
        q.enqueue(p[0]);      
      }
    }
  }

  int size;
  cin>> size;

  string* input = new string[size];
  for(int i = 0; i < size; i++)
  {
    cin>> input[i];
  }

  int k = 0;
  for(int e = 0; e < n && k < size; e++)
  {
    for(int d = 0; d < n && k < size; d++)
    {
      if(arr[e][d] == input[k])
      {
        arr1[e][d] = 1;
        k++;
        e = 0;
        d = 0;
      }
    }
  }    
  
  bool t = false;
  int x = 0, y = 0, pindex = 1;
  while(!q.empty()) 
  { 
    point c = q.front();
    unsigned int i = c.x;
    unsigned int j = c.y;

    if(i < n-1 && arr1[i+1][j] == 0) 
    {
      p[pindex].x = i+1, p[pindex].y = j;
      q.enqueue(p[pindex++]);
      arr1[i+1][j] = 2;
      if(i+1 == point_black_i && j == point_black_j)
      {
        t = true;
      }
    }
    if(i > 0 && arr1[i-1][j] == 0)
    {
      p[pindex].x = i-1, p[pindex].y = j;
      q.enqueue(p[pindex++]);
      arr1[i-1][j] = 2;
      if(i-1 == point_black_i && j == point_black_j)
      {
        t = true;
      }
    }
    if(j < n-1 && arr1[i][j+1] == 0)
    {
      p[pindex].x = i, p[pindex].y = j+1;
      q.enqueue(p[pindex++]);
      arr1[i][j+1] = 2;
      if(i == point_black_i && j+1 == point_black_j)
      {
        t = true;
      }
    }
    if(j > 0 && arr1[i][j-1] == 0)
    {
      p[pindex].x = i, p[pindex].y = j-1;
      q.enqueue(p[pindex++]);
      arr1[i][j-1] = 2;
      if(i == point_black_i && j-1 == point_black_j)
      {
        t = true;
      }
    }
  
    q.dequeue();
  }
  if(t)
  {
    cout<< "YES" << "\n";
  }
  else 
  {
    cout<< "NO" << "\n";
  } 
  return 0;  
}