#include <iostream>

using namespace std;

int main() {
   int z, copy_z_1, new_z;

   int multiply = 1;

   while (cin >> z) {
      copy_z_1 = z;

      int acum = 0, acum_2 = 0, copy_z_2 = z;
      int counter = 0;

      while (z > 0) {
         new_z = z % 10;
         if (new_z % 2 != 0) {
            for (int i = 0; i < counter; i++) {
               multiply *= 10;
            }
            if (counter == 0) {
               acum = new_z;
            } else {
               acum = new_z * multiply + acum;
            }

            multiply = 1;
            counter++;
         }
         z = z / 10;
      }

      counter = 0;
      multiply = 1;

      while (copy_z_1 > 0) {
         new_z = copy_z_1 % 10;

         if (new_z != 0 and new_z % 2 == 0) {
            for (int i = 0; i < counter; i++) {
               multiply *= 10;
            }
            if (counter == 0) {
               acum_2 = new_z;
            } else {
               acum_2 = new_z * multiply + acum_2;
            }
            multiply = 1;
            counter++;
         }

         copy_z_1 = copy_z_1 / 10;
      }


      if (acum >0 and acum_2 > 0) {
         cout << acum << acum_2;
      }else if (acum == 0) {
         cout << acum_2;
      }else {
         cout << acum;
      }

      cout << " " << copy_z_2*2 << endl;

   }
}
