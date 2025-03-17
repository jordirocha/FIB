#include <iostream>
using namespace std;
int main()
{
  int l, w, seg;
  while(cin >> l >> w >> seg)
    {
      int blank = 0;
      bool turnBack = false;
      for(int i = 0; i < l; i++)
        {
          for(int j = 0; j < blank; j++) cout << ' ';
          for(int k = 0; k < w; k++) cout << '*';
          cout << endl;
          if(not turnBack and blank < seg)
            blank += 1;
          else
            {
              blank -= 1;
              turnBack = blank != 0;
            }
        }
      cout << endl;
    }
}
