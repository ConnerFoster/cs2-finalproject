// Program name :FinalProject.cpp
// Author : Conner Foster
// Date last updated : 5 / 15 / 2020
// Purpose : Car Dealership program for managing automobiles, sales, employees


#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee //The employee class allows for the owner/manager to manage employees. For example, changing their salaries.
{
protected: //protected data members
    string lastName;
    string firstName;
    string employeeId;
    string ssn;
public:
    Employee(string last, string first, string id, string ss) 
    {
        lastName = last;
        firstName = first;
        employeeId = id;
        ssn = ss;
        cout << "Creating Employee " << first << " " << last << endl;
    }
    ~Employee()
    {
        cout << "Disposing of employee " << firstName << " " << lastName << endl;
    }
    string getName()  //employee class getter functions
    {
        return firstName + " " + lastName;
    }
    string getID()
    {
        return employeeId;
    }
    string getSSN()
    {
        return ssn;
    }
    void setFirstName(string newFName) //employee class setter functions
    {
        firstName = newFName;
    }
    void setLastName(string newLName)
    {
        lastName = newLName;
    }
    void setID(string newID)
    {
        employeeId= newID;
    }
    void setSSN(string newSSN)
    {
        ssn = newSSN;
    }

};

/*class Manager : public Employee {
private:
    double salary;

};*/

class Automobile //Automobile class is for entering cars in and editing their details. You can also sell them or get rid of them.
{
protected:
    string make;
    string model;
    string color;
    int year;
    double price;
public:
    Automobile(string mk, string md, string col, int yr, double p) 
    {
        make = mk;
        model = md;
        color = col;
        year = yr;
        price = p;
        cout << "Adding " << yr << " " << mk << " " << md << " to the lot.";
    }
    ~Automobile()
    {
        cout << "Destroying car " << endl;
    }
    string getMake()
    {
        return make;
    }
    string getModel()
    {
        return model;
    }
    string getColor()
    {
        return color;
    }
    int getYear()
    {
        return year;
    }
    double getPrice()
    {
        return price;
    }
    void setMake(string newMake)
    {
        make = newMake;
    }
    void setModel(string newModel)
    {
        model = newModel;
    }
    void setColor(string newColor)
    {
        color = newColor;
    }
    void setYear(int newYear)
    {
        if (year > 1900 && year < 2021)
        {
            year = newYear;
        }
        else
        {
            throw invalid_argument("Year should be between 1900 and 2021");
        }
        
        
    }
    void setPrice(double newPrice)
    {
        if (price > 0 && price < 1000000)
        {
            price = newPrice;
        }
        else
        {
            throw invalid_argument("price should be greater than zero and less than 1 million dollars.");
        }
        
        
    }
   
};

class SportsCar : public Automobile //sports car class
{ 
private:
    double maxSpeed;
    bool convertible;
    string transmissionType;
    int horsePower;
public:
    SportsCar(string mk, string md, string col, int yr, double p, double max, bool conv, string tt, int hp) :
        Automobile(mk, md, col, yr, p)
    {
        cout << "Adding " << yr << " " << mk << " " << md << " to the lot.";
        maxSpeed = max;
        convertible = conv;
        transmissionType = tt;
        horsePower = hp;
    }
    ~SportsCar()
    {
        cout << "deleting sports car" << endl;
    }
    double getMaxSpeed()
    {
        return maxSpeed;
    }
    bool getConvertible()
    {
        return convertible;
    }
    string getTransmission()
    {
        return transmissionType;
    }
    int getHorsePower()
    {
        return horsePower;
    }
    void setMaxSpeed(double newMax)
    {
        if (newMax < 120)
        {
            throw invalid_argument("Sports cars here at C-World must have a top speed of at least 120 mph.");
        }
        else if (newMax > 300)
        {
            throw invalid_argument("Not likely the car is that fast. Speak to the owner. ");
        }
        else {
            maxSpeed = newMax;
        }
    }
    void setConvertible()
    {
        if (convertible = true)
        {
            convertible = false;
        }
        else
        {
            convertible = true;
        }
    }
    void setTransmission(string newTrans)
    {
        transmissionType = newTrans;
    }
    void setHorsePower(int newHP)
    {
        if (newHP > 1500)
        {
            throw invalid_argument("Not likely the horsepower is that high. Speak to owner.");
        }
        else if (newHP < 1)
        {
            throw invalid_argument("Horsepower should be a nonzero, positive number.");
        }
        else 
        {
            horsePower = newHP;
        }
    }
};

class LuxuryCar : public Automobile //Luxury car class. Luxury cars here are comfy and expensive.
{
private:
    int numDoors;
    string carType; //this is for Sedan, SUV, Hatchback, etc.
    string seatDetails; //heated, bucket seats would be an example
    string entertainmentSystems; //is there a big screen with games, tvs in the back, etc.
public:
    LuxuryCar(string mk, string md, string col, int yr, double p, int doors, string car, string seats, string e) :
        Automobile(mk, md, col, yr, p)
        {
            cout << "Adding " << yr << " " << mk << " " << md << " to the lot.";
            numDoors = doors;
            carType = car;
            seatDetails = seats;
            entertainmentSystems = e;
        }
    ~LuxuryCar()
    {
        cout << "Deleting luxury car" << endl;
    }
    int getNumDoors()
    {
        return numDoors;
    }
    string getCarType()
    {
        return carType;
    }
    string getSeats()
    {
        return seatDetails;
    }
    string getEntertainment()
    {
        return entertainmentSystems;
    }
    void setNumDoors(int newDoors)
    {
        if (newDoors == 2 || newDoors == 4)
        {
            numDoors = newDoors;
        }
        else
        {
            throw invalid_argument("Speak to higher-up before trying to add this to lot.");
        }
        
    }
    void setCarType(string newCar)
    {
        carType = newCar;
    }
    
    void setSeats(string newSeats)
    {
        seatDetails = newSeats;
    }
    
    void setEntertainment(string newE)
    {
        entertainmentSystems = newE;
    }

    void setPrice(double newPrice)
    {
        if (price > 30000 && price < 1000000)
        {
            price = newPrice;
        }
        else
        {
            throw invalid_argument("price should be greater than zero and less than 1 million dollars.");
        }
    }

};

class Truck : public Automobile
{
private:
    int numDoors;
    string engineType;
    double weight;
public:
    Truck(string mk, string md, string col, int yr, double p, int doors, string eng, double w) :
        Automobile(mk, md, col, yr, p)
        {
            cout << "Adding " << yr << " " << mk << " " << md << " to the lot.";
            numDoors = doors;
            engineType = eng;
            weight = w;
        }
    ~Truck()
    {
        cout << "deleting truck..." << endl;
    }
    int getNumDoors()
    {
        return numDoors;
    }
    string getEngine()
    {
        return engineType;
    }
    double getWeight()
    {
        return weight;
    }
    
    void setNumDoors(int newDoors)
    {
        if (newDoors == 2 || newDoors == 4)
        {
            numDoors = newDoors;
        }
        else
        {
            throw invalid_argument("Speak to higher-up before trying to add this to lot.");
        }
        
    }
    void setEngine(string newE)
    {
        engineType = newE;
    }
    void setWeight(double newW)
    {
        weight = newW;
    }
    
};

void employeeMenu()
{
    cout << " 1 - Add Employee  2 - Fire Employee  3 - Edit Employee Details" << endl;
}
int main()
{
    int choice;
    vector<Employee*> employeeList;
    vector<Automobile*> carList;
    
    cout << "Welcome to C-World Dealership Management Software" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Type the number corresponding to your choice and press Enter" << endl;
    cout << " 1 - Create / Manage Cars    2 - Add / Edit Employees " << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "1 - Create/Add Car  2 - Edit Car  3 - Sell Car" << endl;
        cin >> choice;
        if (choice = 1)
        {
            cout
        }
    }





    system("pause");
    return 0;

}









