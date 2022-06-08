#include <iostream>
using namespace std;

int main() {
int n = 4;
int m = 4;
int arr[n][m] = { { 1, 2, 3, 4 },
                  { 25, 6, 7, 8 },
                  { 9, 10, 11, 12 },
                  { 13, 14, 15, 16 } };


int maxElement = arr[0][0];
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (arr[i][j] > maxElement) {
            maxElement = arr[i][j];
        }
    }
}
 

cout << "Max Element array is: " << maxElement << endl;
cout << "First Element array is: " << (**arr) << std::endl;
arr[0][0]=maxElement;
cout << "Now First Element array is: " << maxElement << std::endl;

return 0;
}