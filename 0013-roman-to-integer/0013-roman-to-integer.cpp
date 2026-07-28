class Solution {
public:
int romanToInt(std::string s) {
  int res = 0;
  char prev = 0;
  for (auto it = s.rbegin(); it < s.rend(); ++it) {
    char cur = *it;
    switch (cur) {
    case 'I':
      (prev == 'V' || prev == 'X') ? res -= 1 : res += 1;
      break;
    case 'V':
      res += 5;
      break;
    case 'X':
      (prev == 'L' || prev == 'C') ? res -= 10 : res += 10;
      break;
    case 'L':
      res += 50;
      break;
    case 'C':
      (prev == 'D' || prev == 'M') ? res -= 100 : res += 100;
      break;
    case 'D':
      res += 500;
      break;
    case 'M':
      res += 1000;
      break;
    }
    prev = cur;
  }

  return res;
}
};