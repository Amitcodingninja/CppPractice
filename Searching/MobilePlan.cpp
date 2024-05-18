#include <iostream>
#include <iomanip>
using namespace std;
void printPlanDetails(int dayMinutes, int eveningMinutes, int weekendMinutes)
{
    double planA = 0.0;
    double planB = 0.0;
    if (dayMinutes > 100)
    {
        planA += (dayMinutes - 100) * 0.25;
    }
    planA += eveningMinutes * 0.15 + weekendMinutes * 0.20;
    if (dayMinutes > 250)
    {
        planB += (dayMinutes - 250) * 0.45;
    }
    planB += eveningMinutes * 0.35 + weekendMinutes * 0.25;
    cout << fixed << setprecision(2);
    cout << "Plan A costs " << planA << endl;
    cout << "Plan B costs " << planB << endl;
    if (planA < planB)
    {
        cout << "Plan A is cheapest." << endl;
    }
    else if (planB < planA)
    {
        cout << "Plan B is cheapest." << endl;
    }
    else
    {
        cout << "Plan A and B are the same price." << endl;
    }
}
int main()
{
    int dayMinutes, eveningMinutes, weekendMinutes;
    cin >> dayMinutes >> eveningMinutes >> weekendMinutes;
    printPlanDetails(dayMinutes, eveningMinutes, weekendMinutes);
    return 0;
}