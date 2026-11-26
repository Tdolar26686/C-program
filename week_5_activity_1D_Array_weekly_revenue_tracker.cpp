#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double revenue[7];
    double totalRevenue = 0;
    double averageRevenue;

    // Input revenue for 7 days
    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for day "
             << i + 1 << ": ";
        cin >> revenue[i];

        totalRevenue += revenue[i];
    }

    // Calculate average
    averageRevenue = totalRevenue / 7;

    // Display results
    cout << fixed << setprecision(2);

    cout << "\nTotal weekly revenue: "
         << totalRevenue << endl;

    cout << "Average daily revenue: "
         << averageRevenue << endl;

    return 0;
}
