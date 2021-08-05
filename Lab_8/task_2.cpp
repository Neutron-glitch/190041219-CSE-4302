#include <iostream>
#include <cmath>

using namespace std;

class seat
{
protected:
    int pleasant, comfy;
    bool seat_warmer;

public:
    seat(int a = 0, int b = 0, bool c = false) : pleasant(a), comfy(b), seat_warmer(c)
    {
    }
    void get_seat() const
    {
        cout << "seat information :" << endl;
        cout << "pleasant :" << pleasant << endl;
        cout << "comfy :" << comfy << endl;
        cout << "seatwarmer :" << seat_warmer << endl;
    }

    void set_seat()
    {
        cout << "Please give seats information: ";
        cin >> pleasant >> comfy >> seat_warmer;
    }
};

class wheel
{
protected:
    float cir;

public:
    wheel(float a = 0) : cir(a)
    {
    }
    void get_wheel() const
    {
        cout << "Wheel information: " << endl;
        cout << "Circumference :" << cir << endl;
    }
    void set_wheel()
    {
        cout << "Please give wheel information :";
        cin >> cir;
    }
};

class engine
{
protected:
    float max_fuel_con, max_enr_pro, avg_rpm;

public:
    engine(float a = 0, float b = 0, float c = 0) : max_fuel_con(a), max_enr_pro(b), avg_rpm(c)
    {
    }
    void get_engine() const
    {
        cout << "Engine info :" << endl;
        cout << "Maximum Fuel Consumption Rate :" << max_fuel_con << endl;
        cout << "Maximum Energy Production Rate :" << max_enr_pro << endl;
        cout << "Average RPM :" << avg_rpm << endl;
    }
    void set_engine()
    {
        cout << "Please give engine information :";
        cin >> max_fuel_con >> max_enr_pro >> avg_rpm;
    }
};

class door
{
protected:
    bool open;

public:
    door(bool a = false) : open(a)
    {
    }
    void get_door() const
    {
        cout << "Showing door info:" << endl;
        if (open == false)
            cout << "Opening mode : Sideways" << endl;
        else
            cout << "Opening mode : Upwardways" << endl;
    }
    void set_door()
    {
        cout << "Please give door information :";
        cin >> open;
    }
};

//hasa
class car 
{
private:
    float max_acc, fuel_cap;

    seat s[4];
    wheel w[4];
public:
    car(float a = 0, float b = 0) : max_acc(a), fuel_cap(b)
    {
    }
    void get_car() const
    {
        cout<<"Showing  car details :"<<endl;
        cout<<"Max accelaraion :"<<max_acc<<endl;
        cout<<"Fuel Capacity :"<<fuel_cap<<endl;

        get_seat();
        get_wheel();
        get_engine();
        get_door();
    }
    void set_car()
    {
        cout<<"Please give car information :";
        cin>>max_acc>>fuel_cap;

        set_seat();
        set_wheel();
        set_engine();
        set_door();

    }
};

int main()
{
    car sample;

    sample.set_car();
    cout<<endl;
    sample.get_car();


    return 0;
}
