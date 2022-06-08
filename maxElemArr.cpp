#include <iostream>
using namespace std;

int main() {
int n = 4;
int m = 4;
int arr[n][m] = { { 1, 2, 3, 4 },
                  { 25, 6, 7, 8 },
                  { 9, 10, 11, 12 },
                  { 13, 14, 15, 16 } };

for (int i = 0; i < n; i++) {
   for (int j = 0; j < m; j++) {
      std::cout << arr[i][j] << " ";
    }
}

int maxElement = arr[0][0];
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (arr[i][j] > maxElement) {
            maxElement = arr[i][j];
        } 
    }
    int j;
    int temp = arr[n][m];
    arr[n][m] = arr[i][j];
    arr[i][j] = temp;
}
 

cout << "\nMax Element array is: " << maxElement << endl;
int a = (**arr);
arr[0][0]=maxElement;
int b = maxElement;
for (int i = 0; i < n; i++) {
   for (int j = 0; j < m; j++) {
      std::cout << arr[i][j] << " ";
    }
}

cout << "\nNow First Element array is: " << maxElement << endl;

return 0;
}