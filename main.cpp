#include <iostream>

using namespace std;
/*5. Create a structure of type date that contains three members: the month, the day of the
month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have
the user enter a date in the format 01/01/2018, store it in a variable of type struct date,
then retrieve the values from the variable and print them out in the same format.*/
struct var {
    int year ;
    int month ;
    int day ;
	char dummy_slash;
      };
struct date {
    var user ;
    };
int main()
{

    date user1  ;

    cout << "Enter date in format 01/01/2018 " << endl;
	cin >> user1.user.day >> user1.user.dummy_slash >> user1.user.month >> user1.user.dummy_slash >> user1.user.year;
    cout << "The date is:"<<user1.user.day<<"/"<< user1.user.month<< "/" <<user1.user.year;

    return 0;
}
