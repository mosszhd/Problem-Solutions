#include<iostream>
using namespace std;
class vehicle
    {
    private:
        int num_wheels,range;
    public:
        vehicle(int n,int w)
        {
            num_wheels=n;
            range=w;
        }
        int getNum_wheels()
        {
            return num_wheels;
        }
        int getRange()
        {
            return range;
        }
        void show()
        {
           cout<<"Wheel: "<<getNum_wheels()<<"\n"<<"Range: "<<getRange()<<endl;
        }

    };
class car:public vehicle
    {
    private:
        int passengers;
    public:
        car(int n, int w,int p):vehicle(n,w)
        {
            passengers=p;
        }
        int getpassengers()
        {
            return passengers;
        }
        void show()
        {
            vehicle::show();
            cout<<"PASS: "<<getpassengers()<<endl;
        }
    };
class truck:public vehicle
    {
    private:
        int loadlimit;
    public:
        truck (int n,int w,int i):vehicle(n,w)
        {
            loadlimit=i;
        }
        int getloadlimit()
        {
            return loadlimit;
        }
        void show()
        {
            vehicle::show();
            cout<<"LOAD: "<<getloadlimit()<<endl;
        }
    };
int main()
{
    vehicle ob1(4,180);
    cout<<"For vehicle: "<<endl;
    ob1.show();
    car ob2(4,230,62);
    cout<<" "<<"\n"<<"For car: "<<endl;
    ob2.show();
    truck ob3(6,120,670);
    cout<<" "<<"\n"<<"For truck: "<<endl;
    ob3.show();
}
