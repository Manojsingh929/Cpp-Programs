
#include <iostream>
using namespace std;

int main()
{
   int cel, far, step, end;

   cin >> far >> end >> step;

   while (far < end)
   {
      cel = (far - 32) * 5 / 9;
      cout << far << "\t" << cel << "\n";
      far = far + step;
   }
}
