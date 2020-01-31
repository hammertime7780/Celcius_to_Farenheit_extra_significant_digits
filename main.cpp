// Valdez and Hammer Celcius and Farenheit HVAC problem

#include <iostream>

using namespace std;

int main()

{

int decision = 0;
double cel = 0.0000, far = 0.0000;



  cout << "Input 1 for Celcius to Fahrenheit, or Input 2 for Fahrenheit to Celcius ";
  cin >> decision ; 


if (decision == 1)


{
  cout << "Input temperature in Celcius " ;
  cin >> cel;

  far = (1.8000 * cel + 32.0000);
  
  cout << "The temperature in Fahrenheit is " << far << endl;
}
else if (decision == 2)
{


  cout << "Input temperature in Fahrenheit " ;
  cin >> far;

  cel = ( (5.0000/9.0000) * (far - 32.0000));
  
  cout << "The temperature in Celcius is " << cel << endl;
}

else if (decision |= 1,2)
  cout << "\nError " << endl;

  return 0;

}
