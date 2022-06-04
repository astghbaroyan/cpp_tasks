#include <iostream>
#include <cstring>

int main() 
{
  const int n = 21;
  char s1[n];
  char s2[n];
  std::cin >> s1 >> s2;
  int k = strlen(s1);
  if (k != strlen(s2)) {
    std::cout<<"NO\n";
    return 0;
  }
  
  int freq[52] = {0};

  int i = 0;
  while (s1[i] != '\0') {
    if (s1[i] >= 'a' && s1[i] <= 'z') {
      int c = s1[i] - 'a';
      freq[c] ++;
    } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
      int C = s1[i] - 'A';
      freq[C] ++;
    }
    i++;
  }
  i = 0;
  while (s2[i] != '\0') {
    if (s2[i] >= 'a' && s1[i] <= 'z') {
      int c = s2[i] - 'a';
      freq[c]--;
    } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
      int C = s2[i] - 'A' + 26;
      freq[C]--;
    }
    i++;
  }

  for (int i = 0; i < k; i++) {
    if (freq[i] != 0) {
      std::cout<<"NO\n";
      return 0;
    }
  }
  std::cout<<"YES\n";
}
