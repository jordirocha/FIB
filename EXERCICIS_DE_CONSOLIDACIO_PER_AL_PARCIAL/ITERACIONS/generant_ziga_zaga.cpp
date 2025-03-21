#include <iostream>
using namespace std;
int main()
{
  int h, w;
  while(cin >> h >> w)
    {
      int left = 0;
      int right = w / 2;
      bool turnBack = false;
      for(int i = 0; i < h; i++)
        {
          for(int j = 0; j < left; j++) cout << '*';
          for(int k = 0; k < w / 2; k++) cout << '#';
          for(int t = 0; t < right; t++) cout << '*';
          if(not turnBack and right > 0)
            {
              left++;
              right--;
            }
          else
            {
              left--;
              right++;
              turnBack = left != 0;
            }
          cout << endl;
        }
      cout << endl;
    }
}
