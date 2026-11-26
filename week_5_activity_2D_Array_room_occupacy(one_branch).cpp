#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));

    // Generate occupancy data randomly
    for (int floor = 0; floor < 5; floor++)
    {
        for (int room = 0; room < 10; room++)
        {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display occupancy per floor
    cout << "------ ROOM OCCUPANCY REPORT ------"
         << endl;

    for (int floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacant = 0;

        for (int room = 0; room < 10; room++)
        {
            if (occupancy[floor][room] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        cout << "\nFloor " << floor + 1 << endl;
        cout << "Occupied rooms: " << occupied << endl;
        cout << "Vacant rooms: " << vacant << endl;
    }

    return 0;
}
