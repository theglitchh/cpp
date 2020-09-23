#include <iostream>

using namespace std;


string getDayOfWeek(int dayNum)
{
    string dayName;


switch (dayNum){

    case 0:
    dayName = "sunday";
    break;

    case 1:
    dayName = "Monday";
    break;
     case 2:
    dayName = "Monday";
    break;
     case 3:
    dayName = "Monday";
    break;
     case 4:
    dayName = "Monday";
    break;
     case 5:
    dayName = "Monday";
    break;
         case 6:
    dayName = "Monday";
    break;
    default: 
    dayName = "invalid day number";

}

    return dayName;
}

int main ()
{ 


cout << getDayOfWeek(10);

return 0;

}