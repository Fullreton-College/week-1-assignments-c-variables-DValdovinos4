#include <iostream>
#include <iomanip>
#include "test.h"
using namespace std;
int main()
{
    double mph = 6.5;
    // PACE calculation
    double pace = 60 / mph; // pace in minnutes per mile 

    //express pace in minutes and seconds
  int minutes = static_cast<int>(pace);

  //express your output in 1 decimal points
  return NewFunction(minutes, pace);
}
int NewFunction(int minutes, double pace)
{
  cout << fixed << setprecision(1);
  cout << "Your pace is:" << minutes << " minutes and " << (pace - minutes) * 60 << " seconds per mile." << endl;
  return 0;
}
