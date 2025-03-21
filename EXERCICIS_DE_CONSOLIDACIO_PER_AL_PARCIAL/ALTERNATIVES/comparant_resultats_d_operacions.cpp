#include <iostream>
using namespace std;
int arit(int x, int y, string op)
{
  if(op == "+") return x + y;
  if(op == "-") return x - y;
  return x * y;
}
bool com(int x, int y, string op)
{
  if(op == "<") return x < y;
  if(op == ">") return x > y;
  if(op == "<=") return x <= y;
  if(op == ">=") return x >= y;
  if(op == "==") return x == y;
  return x != y;
}
int main()
{
  string num1, op, num2, comp, num3;
  while(cin >> num1 >> op >> num2 >> comp >> num3)
    {
      cout << (com(arit(stoi(num1), stoi(num2), op), stoi(num3), comp)
                 ? "true"
                 : "false")
           << endl;
    }
}
