/***********************************************
* Автор: Чеботников Александр                  *
* Задание: Циклы с предусловием и постусловием *
* Вариант: 33                                  *
***********************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double surfacePressure;
  double temperature;
  double molarMass;
  double gasConstant;
  double gravity;
  double height;
  double pressure;
  double density;

  int firstHeightCount;
  int secondHeightCount;
  int heightIndex;

  cout << "p0 (Pa) = ";
  cin >> surfacePressure;

  cout << "T (K) = ";
  cin >> temperature;

  cout << "M (kg/mol) = ";
  cin >> molarMass;

  cout << "R (J/(mol*K)) = ";
  cin >> gasConstant;

  cout << "g (m/s^2) = ";
  cin >> gravity;

  cout << "First height count = ";
  cin >> firstHeightCount;

  cout << "Second height count = ";
  cin >> secondHeightCount;

  cout << "h (m) p (Pa) rho (kg/m^3)" << endl;

  heightIndex = 0;

  do {
    cout << "h (m) = ";
    cin >> height;

    pressure = surfacePressure * exp(-molarMass * gravity * height / (gasConstant * temperature));
    density = molarMass * pressure / (gasConstant * temperature);

    cout << height << " "
         << pressure << " "
         << density << endl;

    ++heightIndex;
  } while (heightIndex < firstHeightCount);

  heightIndex = 0;

  while (heightIndex < secondHeightCount) {
    cout << "h (m) = ";
    cin >> height;

    pressure = surfacePressure * exp(-molarMass * gravity * height / (gasConstant * temperature));
    density = molarMass * pressure / (gasConstant * temperature);

    cout << height << " "
         << pressure << " "
         << density << endl;

    ++heightIndex;
  }

  return 0;
}