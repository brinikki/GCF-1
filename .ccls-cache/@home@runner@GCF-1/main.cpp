#include <iostream>
using namespace std;

int main()
{

  int num1;
  int num2;
  int divisor;
  int i;
  int divisor2;
  int gcf;

  cout << endl;
  cout << "What is the first number that you need the factors of? ";
  cin >> num1;
  cout << endl;
  cout << "\033[34mFactors of " << num1 << ": \033[0m";

    for (divisor = 1; divisor <= num1; divisor++)
    {
      if (num1 % divisor == 0)
      {
        if (divisor == num1)
        {
          cout << num1 << endl; break ;
        }
      cout <<  divisor << ", ";
      }
    }
 
  cout << endl;

  cout << "What is the second number that you need the factors of? ";
  cin >> num2;
  cout << endl;
  cout << "\033[34mFactors of " << num2 << ": \033[0m";

    for (divisor2 = 1; divisor2 <= num2; divisor2++)
    {
      if (num2 % divisor2 == 0)
      {
        if (divisor2 == num2)
        {
          cout << num2 << endl; break ;
        }
      cout <<  divisor2 << ", ";
      }
    }
 
  cout << endl;
 

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
      if (num1 % i == 0 && num2 % i == 0)
      {
        gcf = i;
      }
    }
 
  cout << "\033[92mGreatest Common Factor: \033[0m" << gcf << endl;
  cout << endl;
 
  return 0;
}