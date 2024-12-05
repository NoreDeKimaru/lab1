#include <iostream>
#include <limits>  
#include <string>  
#include <sstream> 
using namespace std;

bool isValidInteger(const string &str, int &number)
{
  istringstream iss(str);
  // Перевірка на коректність введеного числа
  return (iss >> number) && (iss.eof());
}

int main()
{
  int a, b;
  string input;

  cout << "Enter first integer: ";
  while (true)
  {
    getline(cin, input); // Читаем строку
    if (isValidInteger(input, a))
    {
      break; // Все ок, виходим
    }
    cout << "Invalid input. Please enter an integer: ";
  }

  cout << "Enter second integer: ";
  while (true)
  {
    getline(cin, input);
    if (isValidInteger(input, b))
    {
      break;
    }
    cout << "Invalid input. Please enter an integer: ";
  }

  // Виведення результатів
  cout << "Sum: " << a + b << endl;
  cout << "Difference: " << a - b << endl;
  cout << "Product: " << a * b << endl;

  return 0; 
}
