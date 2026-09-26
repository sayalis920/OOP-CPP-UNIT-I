#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
private:
    string deviceID;
    string location;
    string status;
    string lastUpdated;

public:
    // Constructor
    SmartDevice(string id, string loc, string stat, string time)
    {
        deviceID = id;
        location = loc;
        status = stat;
        lastUpdated = time;
    }

    // Turn device ON
    void turnOn()
    {
        status = "ON";
        lastUpdated = "Updated Now";
        cout << deviceID << " is now ON." << endl;
    }

    // Turn device OFF
    void turnOff()
    {
        status = "OFF";
        lastUpdated = "Updated Now";
        cout << deviceID << " is now OFF." << endl;
    }

    // Change status
    void changeStatus(string newStatus)
    {
        status = newStatus;
        lastUpdated = "Updated Now";
        cout << deviceID << " status changed to " << status << "." << endl;
    }

    // Display device details
    void display()
    {
        cout << "Device ID     : " << deviceID << endl;
        cout << "Location      : " << location << endl;
        cout << "Status        : " << status << endl;
        cout << "Last Updated  : " << lastUpdated << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    // Creating smart devices
    SmartDevice light("L001", "Living Room", "OFF", "10:00 AM");
    SmartDevice thermostat("T001", "Bedroom", "ON", "10:05 AM");
    SmartDevice camera("C001", "Main Door", "ON", "10:10 AM");
    SmartDevice doorLock("D001", "Main Door", "LOCKED", "10:15 AM");

    cout << "===== SMART HOME DASHBOARD =====" << endl << endl;

    // Display all devices
    light.display();
    thermostat.display();
    camera.display();
    doorLock.display();

    // Perform operations
    cout << "\n===== DEVICE OPERATIONS =====" << endl;

    light.turnOn();
    camera.turnOff();
    thermostat.changeStatus("22 Degree Celsius");
    doorLock.changeStatus("UNLOCKED");

    // Display updated dashboard
    cout << "\n===== UPDATED HOME DASHBOARD =====" << endl << endl;

    light.display();
    thermostat.display();
    camera.display();
    doorLock.display();

    return 0;
}
