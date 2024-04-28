#include <iostream>
using namespace std;

class Airship
{
    int passengers;
    int weight;

public:
    Airship(int p, int w)
    {
        passengers = p;
        weight = w;
    }
    void show_airship()
    {
        cout << "Passengers: " << passengers << "\n";
        cout << "Weight: " << weight << " tons\n";
    }
};

enum Engine
{
    screw,
    jet
};

class Airplane : public Airship
{
    Engine engine;
    int flight_range;

public:
    Airplane(int p, int w, Engine e, int f) : Airship(p, w)
    {
        engine = e;
        flight_range = f;
    }
    void show()
    {
        show_airship();
        if (engine == screw)
        {
            cout << "Engine: screw\n";
        }
        else
        {
            cout << "Engine: jet\n";
        }
        cout << "Flight range: " << flight_range << " km\n";
    }
};

enum Gas_type
{
    hydrogen,
    helium
};

class Balloon : public Airship
{
    Gas_type gas_type;
    int max_height;

public:
    Balloon(int p, int w, Gas_type g, int m) : Airship(p, w)
    {
        gas_type = g;
        max_height = m;
    }
    void show()
    {
        show_airship();
        if (gas_type == hydrogen)
        {
            cout << "Gas type: hydrogen\n";
        }
        else
        {
            cout << "Gas type: helium\n";
        }
        cout << "Max height: " << max_height << " m\n";
    }
};
int main()
{
    Airplane obja(36, 30, screw, 1000);
    Balloon objb(20, 2, helium, 5000);
    cout << "Airplane:\n";
    obja.show();
    cout << "Balloon:\n";
    objb.show();
    return 0;
}
