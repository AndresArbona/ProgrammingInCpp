#include <iostream>
#include <memory>
#include <string>
#include <ctime>
#include <cstdlib>

#define COLUMN 2
#define ROWS 4

//This proyect is in git: Andres.trabajo90@gmail.com.
//
using namespace std;

//------------------Topic 5--------------------//
//Exercise 1: square meter
/*
int main(int argc, char* argv[])
{
    int SideSquare = 0, Result = 0;

    cout << "Load the side of the square: ";
    cin>>SideSquare;

    Result = SideSquare * 4;

    cout << "Perimeter: " << Result << "\n";

    return 0;
}
*/
//Exercise 2: 4 Numbers
/*
int main(int argc, char* argv[])
{
    int Number1, Number2, Number3, Number4, Plus, Multiply;

    cout<< "Load the first number: ";
    cin>>Number1;
    cout<< "Load the second number: ";
    cin>>Number2;
    cout<< "Load the third number: ";
    cin>>Number3;
    cout<< "Load the fourth number: ";
    cin>>Number4;

    Plus = Number1 + Number2;
    cout << "The result of " << Number1 << " + " << Number2 << " is: " << Plus << "\n";

    Multiply = Number3 * Number4;
    cout << "The result of " << Number3 << " * " << Number4 << " is: " << Multiply << "\n";


    return  0;
}
*/
//Exercise 3: addition and average
/*
int main(int argc, char* argv[])
{
    float n1, n2, n3, n4, plus, average;

    cout << "Load the first number: ";
    cin>>n1;
    cout << "Load the second number: ";
    cin>>n2;
    cout << "Load the third number: ";
    cin>>n3;
    cout << "Load the fourth number: ";
    cin>>n4;

    plus = n1 + n2 + n3 + n4;
    average = plus/4;
    cout << "The result of adding the four them is: " << plus << "\n";

    cout << "The average of that addition divided by four is " << average << endl;

    return 0;
}
*/
//Exercise 4: Buy Product
/*
int main(int argc, char* argv[])
{
    float Item, Amount, Const;

    cout << "Loading market..." << endl;

    cout << "Load the cost of the product: ";
    cin>>Item;
    cout << "How many products are buying?: ";
    cin>>Amount;

    Const = Item * Amount;

    cout << "The total cost for this products is: " << Const <<"\n";

    return 0;
}
*/
//-----------------Topic 5 End-----------------//

//------------------Topic 6--------------------//
//Exercise 1: Composite conditionals
/*
int main(int argc, char* argv[])
{
    float Number1, Number2, Add, Substract, Multiply, Divide;

    cout << "Load 2 numbers: ";
    cin>> Number1 >> Number2;

    if (Number1 > Number2)
    {
        Add = Number1 + Number2;
        cout << "The addition of " << Number1 << " + " << Number2 << " is: " << Add << "\n";
        Substract = Number1 - Number2;
        cout << "The substraction of " << Number1 << " - " << Number2 << " is: " << Substract << "\n";
    }
    if (Number1 <= Number2)
    {
        Multiply = Number1 * Number2;
        cout << "The multiplication of " << Number1 << " * " << Number2 << " is: " << Multiply << "\n";
        Divide = Number1 / Number2;
        cout << "The divition of " << Number1 << " / " << Number2 << " is: " << Divide << "\n";
    }
    return 0;
}
*/
//Exercise 2: Students notes
/*
int main(int argc, char* argv[])
{
    float Note1, Note2, Note3, Average = 0;

    cout << "Load the student notes: ";
    cin>>Note1 >> Note2 >> Note3;

    Average = (Note1 + Note2+ Note3) / 3;
    if(Average >= 7)
    {
        cout << "!PROMOTED!";
    }

    return 0;
}
*/
//Ejercicio 3: One or two digits
/*
int main(int argc, char* argv[])
{
    int number;
    cout << "Load a number with one or two digits: ";
    cin>> number;

    if (number >= 1 && number <= 99)
    {
        cout << "Perfect!";
    }

    return 0;
}
*/
//-----------------Topic 6 End-----------------//

//------------------Topic 7--------------------//
//Exercise 1: The largest number
/*
int main(int argc, char* argv[])
{
    float Number1, Number2, Number3;

    cout << "Load 3 numbers: ";
    cin>> Number1 >> Number2 >> Number3;

    if (Number1 > Number2 && Number1 > Number3)
    {
        cout << "The biggest number is: " << Number1;
    }
    if (Number2 > Number1 && Number2 > Number3)
    {
        cout << "The biggest number is: " << Number2;
    }
    if (Number3 > Number2 && Number3 > Number1)
    {
        cout << "The biggest number is: " << Number3;
    }
    
    return 0;
}
*/
//Exercise 2: Positive, negative or null
/*
int main(int argc, char* argv[])
{

    int Number;

    cout << "Load the number: ";
    cin >> Number;

    if(Number > 0)
    {
        cout << "Your number is positive";
    }
    if (Number == 0)
    {
        cout << " Your number is null";
    }
    if (Number < 0)
    {
        cout << "Your number is negative";
    }

    return 0;
}
*/
//Exercise 3: How many digits?
/*
int main(int argc, char* argv[])
{
    int Number;
    cout << "Load a number: ";
    cin >> Number;

    if (Number <= 999)
    {
        if (Number <= 99)
        {
            if (Number <=9)
            {
                cout << "The number has 1 digit";
            }
            else
            {
                cout << "The number has 2 digits";
            }
        }
        else
        {
            cout << "The number has 3 digits";
        }
    }
    else
    {
        cout << "The number is incorrect";
    }

    return 0;
}
*/
//Exercise 4: Exam note
/*
int main(int argc, char* argv[])
{

    int Quest, RightAnswer;
    float Porcent;

    cout << "Load the number of questions: ";
    cin >> Quest;

    cout << "Load the number of correct answers: ";
    cin >> RightAnswer;

    Porcent = RightAnswer * 100 / Quest;

    if (Porcent <= 90.0f)
    {
        if (Porcent <= 75 && Porcent < 90)
        {
            if (Porcent >= 50 && Porcent < 75)
            {
                if (Porcent < 50)
                {
                    cout << "Out";
                }
                else
                {
                    cout << "Regular level";
                }
            }
            else
            {
                cout << "Mid level";
            }
        }
        else
        {
            cout << "Max level";
        }
    }
    else
    {
        cout << "Max level";
    }

    return 0;
}
*/
//-----------------Topic 7 End-----------------//

//------------------Topic 13--------------------//
//Exercise 1:  Employee class
/*
class Employee
{
private:
    char Name[20];
    int Salary;
public:
    void Load();
    void Print();
    void Taxes();
};

void Employee::Load()
{
    cout << "Load the name: ";
    cin>>Name;
    cout << "Load the salary: ";
    cin>>Salary;
}

void Employee::Print()
{
    cout << "The employee " << Name << " has a salary of: " << Salary << "\n";
}

void Employee::Taxes()
{
    if (Salary > 3000)
    {
        cout << "The employee " << Name << " must pay taxs \n";
    }
    else
    {
        cout << "The employee dont must pay taxs";
    }
}


int main(int argc, char* argv[])
{
    Employee employee_1;
    employee_1.Load();
    employee_1.Print();
    employee_1.Taxes();

    return 0;
}
*/
//Exercise 2: Operations class
/*
class Operations
{
private:
    int Number1,Number2;
public:
    void Load();
    void Addition();
    void Substraction();
    void Multiplication();
    void Divition();
};

void Operations::Load()
{
    cout << "Load 2 numbers: ";
    cin>> Number1 >> Number2;
}


void Operations::Addition()
{
    cout << "The addition of " << Number1 << " and " << Number2 << " is: " << (Number1 + Number2) << "\n";
}

void Operations::Substraction()
{
    cout << "The substraction of " << Number1 << " and " << Number2 << " is: " << (Number1 - Number2) << "\n";
}

void Operations::Multiplication()
{
    cout << "The multiplication of " << Number1 << " and " << Number2 << " is: " << (Number1 * Number2) << "\n";
}

void Operations::Divition()
{
    cout << "The divition of " << Number1 << " and " << Number2 << " is: " << (Number1 / Number2) << "\n";
}

int main(int argc, char* argv[])
{
    Operations operations_1;
    operations_1.Load();
    operations_1.Addition();
    operations_1.Substraction();
    operations_1.Multiplication();
    operations_1.Divition();

    return 0;
}
*/
//-----------------Topic 13 End-----------------//

//------------------Topic 15--------------------//
//Exercise 1: Arrays
/*
class Numbers
{
private:
    int Vector[8];
public:
    void Load();
    void Value();
    void Over36();
    void Over50();
};

void Numbers::Load()
{
    for (int i = 0; i < 8; i++)
    {
        cout << "Load the " << i+1 << " number: ";
        cin>> Vector[i];
    }
}

void Numbers::Value()
{
    int value = 0;
    for (int i = 0; i < 8; i++)
    {
        value += Vector[i];
    }
    cout << "The total value of all numbers is: " << value << "\n";
}


void Numbers::Over36()
{
    int over36 = 0;

    for(int i = 0; i < 8; i++)
    {
        if(Vector[i] > 36)
        {
            over36++;
        }
    }
    cout << "The numbers over 36 are: " << over36 << "\n";
}

void Numbers::Over50()
{
    int over50 = 0;

    for(int i = 0; i < 8; i++)
    {
        if(Vector[i] > 50)
        {
            over50++;
        }
    }
    cout << "The numbers over 50 are: " << over50 << "\n";
}

int main(int argc, char* argv[])
{
    Numbers numbers_1;
    numbers_1.Load();
    numbers_1.Value();
    numbers_1.Over36();
    numbers_1.Over50();

    return 0;
}
*/
//Exercise 2: Operations with arrays
/*
class Addition
{
private:
    int Vector[4], Vector2[4], Result[4];
public:
    void Load();
    void Add();
    void Print();
};

void Addition::Load()
{
    cout << "Load the first vector: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Load the " << i+1 << " number: ";
        cin>> Vector[i];
    }

    cout << "Load the second vector: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Load the " << i+1 << " number: ";
        cin>> Vector2[i];
    }
}

void Addition::Add()
{
    for(int i = 0; i < 4; i++)
    {
        Result[i] = Vector[i] + Vector2[i];
    }
}

void Addition::Print()
{
    cout << "The result of the addition of this 2 vectors is: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << Result[i] << " ";
    }
    cout << ".\n";
}


int main(int argc, char* argv[])
{
    Addition add;
    add.Load();
    add.Add();
    add.Print();
    return 0;
}
*/
//Exercise 3: Curse notes
/*
class Puntaje
{
private:
    int CurseA[5];
    int CurseB[5];
public:
    void Load();
    void Average();
};

void Puntaje::Load()
{
    cout << "Load the notes of the curse A: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " note: ";
        cin >> CurseA[i];
    }
    cout << "\nLoad the notes of the curse B: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " note: ";
        cin >> CurseA[i];
    }
}

void Puntaje::Average()
{
    int Average1 = 0, Average2 = 0;

    for (int i = 0; i > 5; i++)
    {
        Average1 += CurseA[i];
    }
    for (int i = 0; i > 5; i++)
    {
        Average2 += CurseB[i];
    }

    Average1 /= 5;
    Average2 /= 5;

    if (Average1 > Average2)
    {
        cout << "Curse A is the winner.";
    }
    else
    {
        cout << "Curse B is the winner.";
    }
}

int main(int argc, char* argv)
{
    Puntaje curses;
    curses.Load();
    curses.Average();

    return 0;
}
*/
//Exercise 4: Sorted array
/*
class PruebaVector7 {
private:
    int Vector[10];
public:
    void Load();
    void VerifyOrden();
};

void PruebaVector7::Load()
{
    for(int f = 0; f < 10; f++)
    {
        cout <<"Ingrese elemento:";
        cin >> Vector[f];
    }
}

void PruebaVector7::VerifyOrden()
{
    int Order=1;
    for(int f = 0; f < 9; f++)
    {
        if (Vector[f+1] < Vector[f])
        {
            Order=0;
        }
    }
    if (Order==1)
    {
        cout <<"Esta ordenado de menor a mayor";
    }
    else
    {
        cout <<"No esta ordenado de menor a mayor";
    }
    cin.get();
    cin.get();
}

int main(int argc, char* argv)
{
    PruebaVector7 pv7;
    pv7.Load();
    pv7.VerifyOrden();
    return 0;
}
*/
//-----------------Topic 15 End-----------------//

//------------------Topic 18--------------------//
//Exercise 1: Sorted elements
/*
class SortedArray
{
private:
    int Numbers[5];
public:
    void Load();
    void OrderGreater();
    void OrderMinor();
    void Print();
};

void SortedArray::Load()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Load values:";
        cin >> Numbers[f];
    }
}

void SortedArray::OrderGreater()
{
    int Aux;

    for (int k = 0; k < 4; k++)
    {
        for (int i = 0; i < 4 - k; i++)
        {
            if (Numbers[i] < Numbers[i + 1])
            {
                Aux  = Numbers[i];
                Numbers[i] = Numbers[i + 1];
                Numbers[i+1] = Aux;
            }
        }
    }
}

void SortedArray::OrderMinor()
{
    int Aux;
    for (int k = 0; k < 4; k++)
        for (int i = 0; i < 5 - k; i++)
        {
            if (Numbers[i] > Numbers[i + 1])
            {
                Aux  = Numbers[i];
                Numbers[i] = Numbers[i + 1];
                Numbers[i+1] = Aux;
            }
        }
}

void SortedArray::Print()
{
    cout << "Showing array: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << Numbers[i] << "\n";
    }
}


int main(int argc, char* argv[])
{
    SortedArray  sorted;
    sorted.Load();
    sorted.OrderGreater();
    sorted.Print();
    cout << "-----------------------------------------------";
    sorted.OrderMinor();
    sorted.Print();

    return 0;
}
*/
//-----------------Topic 18 End-----------------//

//------------------Topic 19--------------------//
//Exercise 1: Vector ordering
/*
class Countries
{
private:
    char Name[5][40];
    int Habitants[5];
public:
    void Load();
    void Order();
    void Print();
};

void Countries::Load()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Load the name: ";
        cin.getline(Name[i], 40);
        cout << "Load the number of habitants: ";
        cin>>Habitants[i];
        cin.get();
    }
    cout << "\n";
}

void Countries::Order()
{
    for (int i = 0; i < 5; i++)
    {
        for (int  j = 0; j < 4 - i; i++)
        {
            if (Habitants[j] < Habitants[j + 1])
            {
                int AuxHabitants;
                AuxHabitants = Habitants[j];
                Habitants[j] = Habitants[j + 1];
                Habitants[j + 1] = AuxHabitants;
                char AuxName[40];
                strcpy_s(AuxName, 40, Name[j]);
                strcpy_s(Name[j], 40, Name[j + 1]);
                strcpy_s(Name[j + i], 40, AuxName);
            }
        }
    }
}

void Countries::Print()
{
    cout << "Name of the cuntries since bigger to minor: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << Name[i] << " - " << Habitants[i] << "\n";
    }
}


int main(int argc, char* argv[])
{
    Countries paises;
    paises.Load();
    paises.Order();
    paises.Print();

    return 0;
}
*/
//-----------------Topic 19 End-----------------//

//------------------Topic 20--------------------//
//Exercise 1: Matrices
/*
class Array
{
private:
    int Array [2][5] = {};
public:
    void Load();
    void Print();
};

void Array::Load()
{
    cout << "Load the array of 2x5: \n";

    for (int c = 0; c < 5; c++)
    {
        for (int f = 0; f < 2; f++)
        {
            cout << "Load the number of " << f + 1 << " x " << c + 1 << ": ";
            cin>>Array[f][c];
        }
        cin.get();
    }
}

void Array::Print()
{
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 5; c++)
        {
            cout <<Array[f][c] <<" ";
        }
        cout << "\n";
    }
    cin.get();
    cin.get();
}


int main(int argc, char* argv[])
{
    Array test;
    test.Load();
    test.Print();
    return 0;
}
*/
//-----------------Topic 20 End-----------------//

//------------------Topic 21--------------------//
//Exercise 1: Media temperature
/*
class TemperaturaMed
{
private:
    char Name[4][40] = {};
    float Temperature[4][3] = {};
    float MediaTemp[4] = {};
public:
    void Load ();
    void Print();
    void Media();
    void Mayor();
};

void TemperaturaMed::Load()
{
    for (int f = 0; f < 4; f++)
    {

        cout << "Name the country number " << f+1 << ": ";
        cin.get(Name[f],40);
        for (int c = 0; c < 3; c++)
        {
            cout << "Load the " << c+1 << " month temperature : ";
            cin >> Temperature[f][c];
        }
        cin.get();
    }
}

void TemperaturaMed::Media()
{
    float Add = 0;
    for (int f = 0; f < 4; f++)
    {
        for (int c = 0; c < 3; c++)
        {
             Add += Temperature[f][c];
        }
        Media[f] = Add / 3;
    }
}

void TemperaturaMed::Mayor()
{
    int Mayor = Media[0];
    char Country[40];

    strcpy_s(Country, 40, Name[0]);

    for (int f = 0; f < 4; f++)
    {
        if (Media[f] > Mayor)
        {
            Mayor = Media[f];
            strcpy_s(Country, 40, Name[f]);
        }
    }

    cout << "The country with the mayor temperature is " << Country << " with: " << Mayor;
}

void TemperaturaMed::Print()
{
    cout << "Showing the countries and their temperatures: \n";
    for (int f = 0; f < 4; f++)
    {
        cout << "The country " << Name[f] << " had " <<  Media[f] << " of temperature media in this last 3 months.\n";
    }
}


int main(int argc, char* argv[])
{
    TemperaturaMed test;
    test.Load();
    test.Media();
    test.Mayor();
    //test.Print();

    return 0;
}
*/
//-----------------Topic 21 End-----------------//

//------------------Topic 22--------------------//
//Exercise 1: Constructor
/*
class Employee
{
private:
    char Name[40] = {};
    int Salary = 0;
public:
    Employee();
    void Print();
    void Pay();
};

Employee::Employee()
{
    cout << "Load the name of the of the employee: ";
    cin.get(Name, 40);
    cout << "Load the salary: ";
    cin>>Salary;
}

void Employee::Print()
{
    cout << "\nThe employee " << Name << " has a salary of " << Salary;
}

void Employee::Pay()
{
    if (Salary >= 3000)
    {
        cout<< "\nAnd must pay taxs";
    }
}


int main(int argc, char* argv[])
{
    Employee test;
    test.Print();
    test.Pay();

    return 0;
}
*/
//-----------------Topic 22 End-----------------//

//------------------Topic 23--------------------//
//Exercise 1: Destructor
/*
class Sumario
{
private:
    int Number = 0;
public:
    void Load();
    ~Sumario();
};

void Sumario::Load()
{
    int Addition = 0;
    cout << "Welcome! this program will end when you load a 0.\n";
    do
    {
        cout << "Load a number: ";
        cin>>Number;
        Addition += Number;
    }while(Number != 0);
    cout << "Perfect! the addition of all numbers you load is: " << Addition << ".\n";
}

Sumario::~Sumario()
{
    cout << "Thanks for used this program! byeee.";
    cin.get();
    cin.get();
}


int main(int argc, char* argv[])
{
    Sumario test;
    test.Load();

    return 0;
}
*/
//-----------------Topic 23 End-----------------//

//------------------Topic 24--------------------//
//Exercise 1: Private and public
/*
class HigherAndLower
{
    int Numbers[5];
public:
    HigherAndLower();
    void Print();
};

HigherAndLower::HigherAndLower()
{
    srand(time (NULL));
    for (int i = 0; i < 5; i++)
    {
        Numbers[i] = rand() % 10;
    }
}

void HigherAndLower::Print()
{
    int Minimum = Numbers[0], Max = Numbers[0];
    for (int i = 0; i < 5; i++)
    {
        if (Numbers[i] < Minimum)
        {
            Minimum = Numbers[i];
        }
        if (Numbers[i] > Max)
        {
            Max = Numbers[i];
        }
        cout << Numbers[i] << "-";
    }
    cout << "\n";
    cout << "The bigger number is: " << Max << ".\n";
    cout << "The lowest number is: " << Minimum << ".\n";
}

int main(int argc, char* argv[])
{
    HigherAndLower test;
    test.Print();

    return 0;
}
*/
//-----------------Topic 24 End-----------------//

//------------------Topic 25--------------------//
//Exercise 1: Overload
/*
class Vector
{
private:
    int Array[5];
public:
    void Load();
    void Print();
    void Print(int to);
    void Print(int since, int to);
};

void Vector::Load()
{
    for(int  i = 0; i < 5; i++)
    {
        cout << "Load a number: ";
        cin >> Array[i];
    }
}

void Vector::Print()
{
    cout << "\n";
    for(int i = 0; i < 5; i++)
    {
        cout << Array[i] << " - ";
    }
}

void Vector::Print(int to)
{
    cout << "\n";
    for (int i  = 0; i < to; i++)
    {
        cout << Array[i] << " - ";
    }
}

void Vector::Print(int since, int to)
{
    cout << "\n";
    for(int i = since; i < to; i++)
    {
        cout << Array[i] << " - ";
    }
}

int main()
{
    Vector test;
    test.Load();
    test.Print();
    test.Print(3);
    test.Print(2,4);
    return 0;
}
*/
//Exercise 2: Point Class
/*
class Point
{
private:
    float AxisX, AxisY;
public:
    Point();
    Point(int XValue, int YValue);
};

Point::Point()
{
    AxisX = 0;
    AxisY = 0;

    cout << "X is: " << AxisX << " and Y is: " << AxisY << "\n";
}

Point::Point(int XValue, int YValue)
{
    AxisX = XValue;
    AxisY = YValue;

    cout << "X is: " << AxisX << " and Y is: " << AxisY << "\n";
}

int main()
{
    Point test;
    Point test2(5, 5);
}
*/
//----------------Topic 25 End-----------------//

//------------------Topic 26--------------------//
//Exercise 1: Class collaboration
/*
class Partner
{
private:
    char Name[40];
    int Years;
public:
    Partner();
    void Print();
    int ReturnLongevity();
};

class Club
{
    Partner Partner1, Partner2, Partner3;
public:
    void longevity();
};

Partner::Partner()
{
    cout << "Load the name: ";
    cin.get(Name, 40);
    cout << "Load the years in the club: ";
    cin>>Years;
    cin.get();
}

void Partner::Print()
{
    cout << "Name: " << Name << " years: " << Years << "\n";
}

int Partner::ReturnLongevity()
{
    return Years;
}

void Club::longevity()
{
    cout << "Member with the biggest longevity: \n";
    if (Partner1.ReturnLongevity() > Partner2.ReturnLongevity() && Partner1.ReturnLongevity() > Partner3.ReturnLongevity())
    {
        Partner1.Print();
    }
    else if(Partner2.ReturnLongevity() > Partner3.ReturnLongevity())
    {
        Partner2.Print();
    }
    else
    {
        Partner3.Print();
    }
}

int main()
{
    Club test;
    test.longevity();

    return 0;
}
*/
//-----------------Topic 26 End-----------------//

//------------------Topic 27--------------------//
//Exercise 1: heritage
/*
class Person
{
protected:
    char Name[20];
    int Age;
public:
    void Load();
    void Print();
};

class Employee : public Person
{
private:
    int Salary;
public:
    void LoadSalary();
    void PrintSalary();
};

void Person::Load()
{
    cout << "Load the name of the person: ";
    cin.get(Name , 20);
    cout << "Load the age of the persona: ";
    cin>>Age;
    cin.get();
}

void Person::Print()
{
    cout << Name << " is " << Age << " years old\n";
}

void Employee::LoadSalary()
{
    cout << "Load the salary of " << Name << ": ";
    cin>>Salary;
    cin.get();
}

void Employee::PrintSalary()
{
    cout << Name << " has a salary of " << Salary << "\n";
}


int main()
{
    Person TestPerson;
    Employee TestEmployee;

    TestPerson.Load();
    TestPerson.Print();

    TestEmployee.Load();
    TestEmployee.LoadSalary();
    TestEmployee.Print();
    TestEmployee.PrintSalary();

    return 0;
}
*/
//----------------Topic 27 End-----------------//

//------------------Topic 28--------------------//
//Exercise 1: Pointer
/*
int main()
{
    int Number1 = 50, Number2 = 100;
    int *Pointer1, *Pointer2;

    Pointer1 = &Number1;
    Pointer2 = Pointer1;

    *Pointer1 = 2000;

    cout << Number1;
    cout << "\n";

    cout << Number2;
    cout << "\n";

    cout << *Pointer1;
    cout << "\n";

    cout << *Pointer2;
    cout << "\n";

    Pointer2 = &Number2;

    Number1 = 1;
    Number2 = 2;

    cout << *Pointer1;
    cout << "\n";

    cout << *Pointer2;
    cout << "\n";

    *Pointer1 = 500;
    *Pointer2 = 600;

    cout << Number1;
    cout << "\n";
    cout << Number2;

    return 0;
}
*/
//Exercise 2: Pointer 2
/*
int main()
{
    int Number1 =5 ,Number2 = 10, Number3 = 15;
    int *Pointer;

    Pointer = &Number1;
    cout << Pointer << "\n";
    cout << *Pointer << "\n";

    Pointer = &Number2;
    cout << Pointer << "\n";
    cout << *Pointer << "\n";

    Pointer = &Number3;
    cout << Pointer << "\n";
    cout << *Pointer << "\n";

    return 0;
}
*/
//Exercise 3: Pointer 3
/*
int main()
{
    float Number1, Number2;
    float *Pointer;

    Number1 = 10.5;
    Number2 = 5.5;

    Pointer = &Number1;
    *Pointer = 5.5;

    cout << "Number1" << &Pointer;
    cout << *Pointer << endl;

    Pointer = &Number2;
    *Pointer = 10.5;

    cout << "Number2" << &Pointer;
    cout << *Pointer << endl;


    return 0;
}
*/
//-----------------Topic 28 End-----------------//

//------------------Topic 29--------------------//
//Exercise 1: Parameters of the Pointer method
/*
class Matris
{
    int Cube[3][3] = {};
public:
    void Load();
    void Print() const;
    void FindLowerLargest(int& LargestNumber, int& LowerNumber);
};

void Matris::Load()
{
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Load a number [" << r+1 << "][" << c+1 << "]: ";
            cin>>Cube[r][c];
        }
        cin.get();
    }
}

void Matris::Print() const
{
    cout << "Printing Matris: \n";
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << Cube[r][c] << " ";
        }
        cout << "\n";
    }
}

void Matris::FindLowerLargest(int& LargestNumber, int& LowerNumber)
{
     int Largest = Cube[0][0];
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if(Cube[r][c] > Largest)
            {
                Largest = Cube[r][c];
                LargestNumber = r;
                LowerNumber = c;
            }
        }
    }
}


int main()
{
    int LargestNumber, LowerNumber;
    Matris test;
    test.Load();
    test.Print();
    test.FindLowerLargest(LargestNumber, LowerNumber);

    cout << "The largest number is in the position: " << LargestNumber << ".\n";
    cout << "The lower number is in the position: " << LowerNumber << ".\n";
    return 0;
}
*/
//-----------------Topic 29 End-----------------//

//------------------Topic 31--------------------//
//Exercise 1: Operator ++ y -- on Pointers
/*
class Admin
{
    int Vector[5];
public:
    void Load();
    void Print();
};

void Admin::Load()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Load a number: ";
        cin>>Vector[i];
    }
}

void Admin::Print()
{
    int* Pointer = &Vector[0];
    for (int i = 0; i < 5; i++)
    {
        cout << *Pointer << " ";
        Pointer++;
    }
}


int main()
{
    Admin test;
    test.Load();
    test.Print();

    return 0;
}
*/
//-----------------Topic 31 End-----------------//

//------------------Topic 36--------------------//
//Exercise 1: Dinamic structures: Piles
/*
class Piles
  {
  private:
      class Nodo
      {
      public:
          int Value;
          Nodo *NextNodo;
      };
      Nodo* Root;
  public:
      Piles();
      ~Piles();
      void Insert(int x);
      void Print();
      int Remove();
      int Amount();
      bool Empty();
      void PrintFirst();
  };

Piles::Piles()
{
    Root = NULL;
}

void Piles::Insert(int NewValue)
{
    Nodo* nuevo;
    nuevo = new Nodo();
    nuevo->Value = NewValue;

    if (Root == NULL)
    {
        Root = nuevo;
        nuevo->NextNodo = NULL;
    }
    else
    {
        nuevo->NextNodo = Root;
        Root = nuevo;
    }
}

void Piles::Print()
{
    Nodo* ReadNodo = Root;
    cout << "List of elements in the stack: \n";
    while (ReadNodo != NULL)
    {
        cout << ReadNodo->Value << " - ";
        ReadNodo = ReadNodo->NextNodo;
    }
    cout << "\n";
}

int Piles::Remove()
{
    if (Root != NULL)
    {
        int ValueInformation = Root->Value;
        Nodo* ValueToDelete = Root;
        Root = Root->NextNodo;
        delete ValueToDelete;
        return ValueInformation;
    }
    else
    {
        return -1;
    }
}

Piles::~Piles()
{
    Nodo* ReadValue = Root;
    Nodo* ValueToDelete;
    while (ReadValue != NULL)
    {
        ValueToDelete = ReadValue;
        ReadValue = ReadValue->NextNodo;
        delete ValueToDelete;
    }
}

int Piles::Amount()
{
    Nodo* ReadValue = Root;
    int AmountOfNodes = 0;
    while (ReadValue != NULL)
    {
        AmountOfNodes++;
        ReadValue = ReadValue->NextNodo;
    }
    return AmountOfNodes;
}

bool Piles::Empty()
{
    if (Root == NULL)
    {
        return true;
    }
    else
    {
        return  false;
    }
}

void Piles::PrintFirst()
{
    if (Root != NULL)
    {
        Nodo* FirstValue = Root;
        cout << "The first element is: " << FirstValue->Value << ".\n";
    }
    else
    {
        cout << "Empty list.\n";
    }
}


int main()
{
    Piles *test;
    test = new Piles();

    test->Insert(10);
    test->Insert(5);
    test->Insert(15);
    test->Print();

    test->PrintFirst();

    cout << "the number of nodes is: " << test->Amount() << " \n";
    while (test->Empty() == false)
    {
        cout << "removing nodes: " << test->Remove() << "\n";
    }
    delete test;
    return 0;
}
*/
//-----------------Topic 36 End-----------------//

//------------------Topic 38--------------------//
//Exercise 1: Dinamic structures: Queue
/*
class Queue
{
private:
    class Node
    {
    public:
        int NodeValue;
        Node* NextNode;
    };
    Node* Root;
    Node* LastNode;
public:
    Queue();
    ~Queue();
    void Insert(int NewValue);
    void Print();
    int Extract();
    int Amount();
    bool Empty();
};

Queue::Queue()
{
    Root = NULL;
    LastNode = NULL;
}

Queue::~Queue()
{
    Node* ValueInformation = Root;
    Node* ValueToDelete;
    while (ValueInformation != NULL)
    {
        ValueToDelete = ValueInformation;
        ValueInformation = ValueInformation->NextNode;
        delete ValueToDelete;
    }
}

void Queue::Insert(int NewValue)
{
    Node* nuevo;
    nuevo = new Node();
    nuevo->NodeValue = NewValue;
    nuevo->NextNode = NULL;
    if (Empty())
    {
        Root = nuevo;
        LastNode = nuevo;
    }
    if (!Empty())
    {
        LastNode->NextNode = nuevo;
        LastNode = nuevo;
    }
}

int Queue::Extract()
{
    if (!Empty())
    {
        int ValueInformation = Root->NodeValue;
        Node* ValueToDelete = Root;
        if (Root == LastNode)
        {
            Root = NULL;
            LastNode = NULL;
        }
        if (Root != LastNode)
        {
            Root = Root->NextNode;
        }
        delete ValueToDelete;
        return ValueInformation;
    }
    else
    {
        return -1;
    }
}

int Queue::Amount()
{
    int AmountOfNodes = 0;
    Node* ValueInformation = Root;
    while (ValueInformation != NULL)
    {
        AmountOfNodes++;
        ValueInformation = ValueInformation->NextNode;
    }
    return AmountOfNodes;
}

void Queue::Print()
{
    Node* ValueInformation = Root;
    cout << "List of elements: \n";
    while (ValueInformation != NULL)
    {
        cout << ValueInformation->NodeValue << " - ";
        ValueInformation = ValueInformation->NextNode;
    }
    cout << "\n";
}

bool Queue::Empty()
{
    if(Root == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class SuperMarket
{
public:
    void Simulation();
};

void SuperMarket::Simulation()
{
    srand(time(NULL));
    int Cash1 = 0, Cash2 = 0 , Cash3 = 0;

    int FinishedBuying = 0, Arrive = 2 + rand() % 2;

    int Exit1 = -1, Exit2 = -1, Exit3 = -1;

    int PeolpeServed1 = 0, PeopleServed2 = 0, PeopleServed3 = 0;


    int QueueTime = 0;
    int Queuing = 0;

    Queue* Queue1 = new Queue();
    Queue* Queue2 = new Queue();
    Queue* Queue3 = new Queue();

    for (int Minute = 0; Minute < 600; Minute++)
    {
        if (Arrive == Minute)
        {
            if (Cash1 == 0)
            {
                Cash1 = 1;
                Exit1 = Minute + 7 + rand() % 5;
            }
            else
            {
                if (Cash2 == 0)
                {
                    Cash2 = 1;
                    Exit2 = Minute + 7 + rand() % 5;
                }
                else
                {
                    if (Cash3 == 0)
                    {
                        Cash3 = 1;
                        Exit3 = Minute + 7 + rand() % 5;
                    }
                    else
                    {
                        if (Queue1->Amount() == 6 && Queue2->Amount() == 6 && Queue3->Amount() == 6)
                        {
                            FinishedBuying++;
                        }
                        else
                        {
                            if (Queue1->Amount() <= Queue2->Amount() && Queue1->Amount() <= Queue3->Amount())
                            {
                                Queue1->Insert(Minute);
                            }
                            else
                            {
                                if (Queue2->Amount() <= Queue3->Amount())
                                {
                                    Queue2->Insert(Minute);
                                }
                                else
                                {
                                    Queue3->Insert(Minute);
                                }
                            }
                        }
                    }
                }
            }
            Arrive = Minute + 2 + rand() % 2;
        }
        if (Exit1 == Minute)
        {
            PeolpeServed1++;
            Cash1 = 0;
            if (!Queue1->Empty())
            {
                Cash1 = 1;
                int m = Queue1->Extract();
                Exit1 = Minute + 7 + rand() % 5;
                QueueTime = QueueTime + (Minute - m);
                Queuing++;
            }
        }
        if (Exit2 == Minute)
        {
            PeopleServed2++;
            Cash2 = 0;
            if (!Queue2->Empty())
            {
                Cash2 = 1;
                int m = Queue2->Extract();
                Exit2 = Minute + 7 + rand() % 5;
                QueueTime = QueueTime + (Minute - m);
                Queuing++;
            }
        }
        if (Exit3 == Minute)
        {
            PeopleServed3++;
            Cash3 = 0;
            if (!Queue3->Empty())
            {
                Cash3 = 1;
                int m = Queue3->Extract();
                Exit3 = Minute + 7 + rand() % 5;
                QueueTime = QueueTime + (Minute - m);
                Queuing++;
            }
        }
    }
    cout << "Customers served by Queue: Queue1" << PeolpeServed1 << " Queue2=" << PeopleServed2 << " Queue3=" << PeopleServed3 << ".\n";
    cout << "They leave without doing any shopping: " << FinishedBuying << "\n";
    if (Queuing > 0)
    {
        int AverageTime = QueueTime / Queuing;
        cout << "Average time in queue: " << AverageTime << "\n";
    }
}

int main()
{
    SuperMarket* super1;
    super1 = new SuperMarket();
    super1->Simulation();
    delete super1;

    return 0;
}
*/
//-----------------Topic 38 End-----------------//

//------------------Topic 40--------------------//
//Exercise 1: Dynamic sequential structures
/*
class Admin
{
    class Node
    {
    public:
        int NodeValue;
        Node* NextNode;
    };
    Node* Root;
public:
    Admin();
    ~Admin();
    void InsertFirst( int NewValue);//al inicio
    void InsertLast( int NewValue);//al final
    void InsertSecond( int NewValue);//en la segunda posicion
    void InserLastBefore( int NewValue);//En la ante penultima posicion
    void DeleteFirst();//al inicio
    void DeleteLast();//al final
    void DeleteSecond();//en la segunda posicion
    void DeleteLargest();//En la ante penultima posicion
    void Print();
};

Admin::Admin()
{
    Root = NULL;
}

Admin::~Admin()
{
    Node* NodeInformation = Root;
    Node* NodeToDelete;
    while (NodeInformation != NULL)
    {
        NodeToDelete = NodeInformation;
        NodeInformation = NodeInformation->NextNode;
        delete NodeToDelete;
    }
}

void Admin::InsertFirst(int NewValue)
{
    Node* NewNode = new Node();
    NewNode->NodeValue = NewValue;
    NewNode->NextNode = Root;
    Root = NewNode;
}

void Admin::InsertSecond(int NewValue)
{
    if (Root != NULL)
    {
        Node* NewNode = new Node();
        NewNode->NodeValue = NewValue;
        if (Root->NextNode == NULL)
        {
            //Solo un nodo
            Root->NextNode = NewNode;
        }
        else
        {
            NewNode->NextNode = Root->NextNode;
            Root->NextNode = NewNode;
        }
    }

}

void Admin::InsertLast(int NewValue)
{
    Node* NewNode = new Node();
    NewNode->NodeValue = NewValue;
    NewNode->NextNode = NULL;
    if (Root == NULL)
    {
        Root = NewNode;
    }
    else
    {
        Node* NodeInformation = Root;
        while (NodeInformation != NULL)
        {
            NodeInformation = NodeInformation->NextNode;
        }
        NodeInformation->NextNode = NewNode;
    }
}

void Admin::InserLastBefore(int NewValue)
{
    if (Root != NULL)
    {
        Node* NewNode = new Node();
        NewNode->NodeValue = NewValue;
        if (Root->NextNode == NULL)
        {
            NewNode->NextNode = Root;
            Root = NewNode;
        }
        else
        {
            Node* LastNode = Root;
            Node* TraverseNode = Root->NextNode;
            while (TraverseNode->NextNode != NULL)
            {
                LastNode = TraverseNode;
                TraverseNode = TraverseNode ->NextNode;
            }
            NewNode->NextNode = LastNode->NextNode;
            LastNode->NextNode = NewNode;
        }
    }
}

void Admin::DeleteFirst()
{
    if (Root != NULL)
    {
        Node* NodeToDelete = Root;
        Root = Root->NextNode;
        delete NodeToDelete;
    }
}

void Admin::DeleteSecond()
{
    if (Root != NULL)
    {
        if (Root->NextNode != NULL)
        {
            Node* NodeToDelete = Root->NextNode;
            Node* ThirdNode = Root->NextNode;
            ThirdNode = ThirdNode->NextNode;
            Root->NextNode = ThirdNode;
            delete NodeToDelete;
        }
    }
}

void Admin::DeleteLast()
{
    if (Root != NULL)
    {
        if (Root->NextNode == NULL)
        {
            delete Root;
            Root = NULL;
        }
        else
        {
            Node *TraverseNode = Root->NextNode;
            Node *LastNode = TraverseNode;
            while (TraverseNode->NextNode != NULL)
            {
                LastNode = TraverseNode;
                TraverseNode = TraverseNode->NextNode;
            }
            LastNode->NextNode = NULL;
            delete TraverseNode;
        }
    }
}

void Admin::DeleteLargest()
{
    if (Root != NULL)
    {
        Node *TraverseNode = Root;
        int LargestNode = Root->NodeValue;
        while (TraverseNode != NULL)
        {
            if (TraverseNode->NodeValue>LargestNode)
            {
                LargestNode = TraverseNode->NodeValue;
            }
            TraverseNode = TraverseNode->NextNode;
        }
        TraverseNode = Root;
        Node *LastNode = Root;
        Node *NodeToDelete;
        while (TraverseNode != NULL)
        {
            if (TraverseNode->NodeValue == LargestNode)
            {
                if (TraverseNode == Root)
                {
                    NodeToDelete = Root;
                    Root = Root->NextNode;
                    LastNode = Root;
                    TraverseNode = Root;
                    delete NodeToDelete;
                }
                else {
                    LastNode->NextNode = TraverseNode->NextNode;
                    NodeToDelete = TraverseNode;
                    TraverseNode = TraverseNode->NextNode;
                    delete NodeToDelete;
                }
            }
            else {
                LastNode = TraverseNode;
                TraverseNode = TraverseNode->NextNode;
            }
        }
    }
}

void Admin::Print()
{
    Node *TraverseNode = Root;
    cout << "Complete List.\n";
    while (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << "-";
        TraverseNode = TraverseNode->NextNode;
    }
    cout << "\n";
}

int main()
{
    Admin *TestAdmin;
    TestAdmin = new Admin();
    TestAdmin->InsertFirst(10);
    TestAdmin->InsertFirst(45);
    TestAdmin->InsertFirst(23);
    TestAdmin->InsertFirst(89);
    TestAdmin->Print();

    cout<<"Insertamos un nodo al final:\n";
    TestAdmin->InsertLast(160);
    TestAdmin->Print();

    cout<<"Insertamos un nodo en la segunda posición:\n";
    TestAdmin->InsertSecond(13);
    TestAdmin->Print();

    cout<<"Insertamos un nodo en la anteultima posición:\n";
    TestAdmin->InsertLastBefore(600);
    TestAdmin->Print();

    cout<<"Borramos el primer nodo de la lista:\n";
    TestAdmin->DeleteFirst();
    TestAdmin->Print();

    cout<<"Borramos el segundo nodo de la lista:\n";
    TestAdmin->DeleteSecond();
    TestAdmin->Print();

    cout<<"Borramos el ultimo nodo de la lista:\n";
    TestAdmin->DeleteLast();
    TestAdmin->Print();

    cout<<"Borramos el mayor de la lista:\n";
    TestAdmin->DeleteLargest();
    TestAdmin->Print();



    return 0;
}
*/
//-----------------Topic 40 End-----------------//

//------------------Topic 41--------------------//
//Exercise 1: Sorted Generic List
/*
class SortedGenericList {
private:
    class Node {
    public:
        int NodeValue;
        Node *NextNode;
    };

    Node *Root;
public:
    SortedGenericList();
    ~SortedGenericList();
    void Load(int NewValue);
    void Print();
};

SortedGenericList::SortedGenericList()
{
    Root = NULL;
}

SortedGenericList::~SortedGenericList()
{
    Node *TraverseNode = Root;
    Node *NodeToDelete;
    while (TraverseNode != NULL)
    {
        NodeToDelete = TraverseNode;
        TraverseNode = TraverseNode->NextNode;
        delete NodeToDelete;
    }
}

void SortedGenericList::Load(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;
    if (Root == NULL)
    {
        Root = NewNode;
    }
    else
    {
        if (NewValue <Root->NodeValue)
        {
            NewNode->NextNode = Root;
            Root = NewNode;
        }
        else
        {
            Node *reco = Root;
            Node *atras = Root;
            while (NewValue >= reco->NodeValue && reco->NextNode != NULL)
            {
                atras = reco;
                reco = reco->NextNode;
            }
            if (NewValue >= reco->NodeValue)
            {
                reco->NextNode = NewNode;
            }
            else
            {
                NewNode->NextNode = reco;
                atras->NextNode = NewNode;
            }
        }
    }
}

void SortedGenericList::Print()
{
    Node *TraverseNode = Root;
    cout << "Listado completo.\n";
    while (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << "-";
        TraverseNode = TraverseNode->NextNode;
    }
    cout << "\n";
}


int main()
{
    SortedGenericList *lista = new SortedGenericList();
    lista->Load(10);
    lista->Load(5);
    lista->Load(7);
    lista->Load(50);
    lista->Print();
    delete lista;
    return 0;
}
*/
//-----------------Topic 41 End-----------------//

//------------------Topic 42--------------------//
//Exercise 1: Double chained lists
/*
class DoubleSortedGenericList
{
private:
    class Nodo
    {
    public:
        int NodeValue;
        Nodo* NextNode;
        Nodo* PreviousNode;
    };
    Nodo* Root;

public:
    DoubleSortedGenericList();
    ~DoubleSortedGenericList();

    int Amount();
    int Extract(int Position);
    int Largest();
    int LargestPosition();

    bool Empty();
    bool SorteredList();
    bool ExistNode(int NodeValue);

    void InsertNode(int Position, int NewValue);
    void DeleteNode(int Position);
    void TradeNode(int Position1, int Position2);
    void Print();
};

DoubleSortedGenericList::DoubleSortedGenericList()
{
    Root = NULL;
}

DoubleSortedGenericList::~DoubleSortedGenericList()
{
    Nodo* TraverseNode = Root;
    Nodo* NodeToDelete;
    while (TraverseNode != NULL)
    {
        NodeToDelete = TraverseNode;
        TraverseNode = TraverseNode->NextNode;
        delete NodeToDelete;
    }
}

int DoubleSortedGenericList::Amount()
{
    Nodo* TraverseNode = Root;
    int Amount = 0;
    while (TraverseNode != NULL)
    {
        TraverseNode = TraverseNode->NextNode;
        Amount++;
    }
    return Amount;
}

void DoubleSortedGenericList::InsertNode(int Position, int NewValue)
{
    if (Position <= Amount() + 1)
    {
        Nodo* NewNode = new Nodo();
        NewNode->NodeValue = NewValue;
        if (Position == 1)// al principio de la lista
        {
            NewNode->NextNode = Root;
            if (Root != NULL)
            {
                Root->PreviousNode = NewNode;
            }
            Root = NewNode;
        }
        if (Position != 1) //else
        {
            if(Position == Amount() + 1) // al final de la lista
            {
                Nodo* TraverseNode = Root;
                while (TraverseNode != NULL)
                {
                    TraverseNode = TraverseNode->NextNode;
                }
                TraverseNode->NextNode = NewNode;
                NewNode->PreviousNode = TraverseNode;
                NewNode->NextNode = NULL;
            }
            if (Position > Amount() + 1)    //else //ante ultimo
            {
                Nodo* TraverseNode = Root;
                for (int f = 1; f < Position - 2; f++)
                {
                    TraverseNode = TraverseNode->NextNode;
                }
                Nodo* siguiente = TraverseNode->NextNode; //ante ultimo
                TraverseNode->NextNode = NewNode; //ante ultimo
                NewNode->PreviousNode = TraverseNode; //ante penultimo
                NewNode->NextNode = siguiente;
                siguiente->PreviousNode = NewNode;
            }
        }
    }

}

int DoubleSortedGenericList::Extract(int Position)
{
    if (Position <= Amount())
    {
        int NodeInformation;
        Nodo* NodeToExtract;
        if (Position == 1)
        {
            NodeInformation = Root->NodeValue;
            NodeToExtract = Root;
            Root = Root->NextNode;
            if (Root != NULL)
            {
                Root->PreviousNode = NULL;
            }
        }
        if (Position != 1) //else
        {
            Nodo* TraverseNode = Root;
            for (int i = 1; i < Position - 2;i++)
            {
                TraverseNode = TraverseNode->NextNode;
            }
            Nodo* prox = TraverseNode->NextNode;
            NodeToExtract = prox;
            TraverseNode->NextNode = prox->NextNode;
            Nodo* siguiente = prox->NextNode;
            if (siguiente != NULL)
            {
                siguiente->PreviousNode = TraverseNode;
            }
            NodeInformation = prox->NodeValue;
        }
        delete NodeToExtract;
        return NodeInformation;
    }
    else
    {
        return  -1;
    }
}

void DoubleSortedGenericList::DeleteNode(int Position)
{
    if (Position <= Amount())
    {
        Nodo* NodeToDelete;
        if (Position == 1)
        {
            NodeToDelete = Root;
            Root = Root->NextNode;
            if (Root != NULL)
            {
                Root->NextNode = NULL;
            }
        }
        if (Position > 1) //else
        {
            Nodo* TraverseNode = Root;
            for (int i = 1; i <= Position - 2; i++)
            {
                TraverseNode = TraverseNode->NextNode;
            }

            Nodo *NodeToExtract = TraverseNode->NextNode;
            NodeToDelete = NodeToExtract;
            TraverseNode->NextNode = NodeToExtract->NextNode;
            Nodo *NodeNextToExtracted = NodeToExtract->NextNode;

            if (NodeNextToExtracted != NULL)
            {
                NodeNextToExtracted->PreviousNode = TraverseNode;
            }
        }
        delete NodeToDelete;
    }
}

void DoubleSortedGenericList::TradeNode(int Position1, int Position2)
{
    if (Position1 <= Amount() && Position2 <= Amount())
    {
        Nodo* TraverseNode1 = Root;
        for (int i = 1; i < Position1; i++)
        {
            TraverseNode1 = TraverseNode1->NextNode;
        }

        Nodo* TraverseNode2 = Root;
        for (int f = 1; f < Position2; f++)
        {
            TraverseNode2 = TraverseNode2->NextNode;
        }
        int Aux = TraverseNode1->NodeValue;
        TraverseNode1->NodeValue = TraverseNode2->NodeValue;
        TraverseNode2->NodeValue = Aux;
    }
}

bool DoubleSortedGenericList::Empty()
{
    if (Root == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int DoubleSortedGenericList::Largest()
{
    if (!Empty())
    {
        int LargestNodeValue = Root->NodeValue;
        Nodo* TraverseNode = Root->NextNode;
        while (TraverseNode != NULL)
        {
            if (LargestNodeValue < TraverseNode->NodeValue)
            {
                LargestNodeValue = TraverseNode->NodeValue;
            }
            TraverseNode = TraverseNode->NextNode;
        }
        return LargestNodeValue;
    }
    else
    {
        return -1;
    }
}

void DoubleSortedGenericList::Print()
{
    Nodo* TraverseNode = Root;
    cout << "Printing:\n";
    while (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << " - ";
    }
    cout << "\n";
}

int DoubleSortedGenericList::LargestPosition()
{
    if (!Empty())
    {
        int LargestNodeValue = Root->NodeValue;
        int Aux = 1;
        int Position = Aux;
        Nodo* TraverseNode = Root->NextNode;

        while (TraverseNode != NULL)
        {
            if (TraverseNode->NodeValue > LargestNodeValue)
            {
                LargestNodeValue = TraverseNode->NodeValue;
                Position = Aux;
            }
            TraverseNode = TraverseNode->NextNode;
            Aux++;
        }
        return Position;
    }
    else
    {
        return -1;
    }
}

bool DoubleSortedGenericList::SorteredList()
{
    if (Amount() > 1)
    {
        Nodo* TraverseNode1 = Root;
        Nodo* TraverseNode2 = Root->NextNode;
        while (TraverseNode2 != NULL)
        {
            if (TraverseNode2->NodeValue < TraverseNode1->NodeValue)
            {
                return  false;
            }
            TraverseNode2 = TraverseNode2->NextNode;
            TraverseNode1 = TraverseNode1->NextNode;
        }
    }
    return true;
}

bool DoubleSortedGenericList::ExistNode(int NodeValue)
{
    Nodo *TraverseNode = Root;
    while (TraverseNode != NULL)
    {
        if (TraverseNode->NodeValue == NodeValue)
            return true;
        TraverseNode = TraverseNode->NextNode;
    }
    return false;
}

int main()
{
    DoubleSortedGenericList *SortedList = new DoubleSortedGenericList();
    SortedList->InsertNode(1, 10);
    SortedList->InsertNode(2, 20);
    SortedList->InsertNode(3, 30);
    SortedList->InsertNode(2, 15);
    SortedList->InsertNode(1, 115);
    SortedList->Print();

    cout << "Deleting the first node...\n";
    SortedList->DeleteNode(1);
    SortedList->Print();

    cout << "Extraction the second node...\n";
    SortedList->Extract(2);
    SortedList->Print();

    cout << "Switching the first node with the third ....\n";
    SortedList->TradeNode(1, 3);
    SortedList->Print();

    if (SortedList->ExistNode(20))
        cout << "The value 20 exist in the list!\n";
    if (!SortedList->ExistNode(20))
        cout << "The value 20 doesn't exist in the list!\n";

    cout << "The position of the lasgest value is:" << SortedList->LargestPosition() << "\n";

    if (SortedList->SorteredList())
        cout << "The list is sortered from highest to lowest\n";
    if (!SortedList->SorteredList())
        cout << "The list is sortered from lowest to highest\n";

    delete SortedList;

    return 0;
}
*/
//Exercise 2: Proposed problem
/*
 class GenericList {
private:
    class Node {
    public:
        int NodeValue;
        Node *NextNode;
        Node *PreviousNode;
    };

    Node *Root;
public:
    GenericList();
    ~GenericList();
    void Print();
    void InsertFirst(int NewValue);
    void InsertLast(int NewValue);
    void InsertSecond(int NewValue);
    void InsertLastBefore(int NewValue);
    void DeleteFirst();
    void DeleteSecond();
    void DeleteLast();
    void DeleteLargest();
};

GenericList::GenericList()
{
    Root = NULL;
}

GenericList::~GenericList()
{
    Node *TraverseNode = Root;
    Node *NodeToDelete;
    while (TraverseNode != NULL)
    {
        NodeToDelete = TraverseNode;
        TraverseNode = TraverseNode->NextNode;
        delete NodeToDelete;
    }
}

void GenericList::Print()
{
    Node *TraverseNode = Root;
    cout << "Complete list.\n";
    while (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << "-";
        TraverseNode = TraverseNode->NextNode;
    }
    cout << "\n";
}

void GenericList::InsertFirst(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;
    NewNode->NextNode = Root;
    if (Root != NULL)
        Root->PreviousNode = NewNode;
    Root = NewNode;
}

void GenericList::InsertLast(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;

    if (Root == NULL)
        Root = NewNode;
    if(Root != NULL)
    {
        Node *TraverseNode = Root;
        while (TraverseNode->NextNode != NULL)
        {
            TraverseNode = TraverseNode->NextNode;
        }
        TraverseNode->NextNode = NewNode;
        NewNode->PreviousNode = TraverseNode;
    }
}

void GenericList::InsertSecond(int NewValue)
{
    if (Root != NULL)
    {
        Node *NewNode = new Node();
        NewNode->NodeValue = NewValue;
        if (Root->NextNode == NULL)
        {
            //Hay un solo nodo.
            Root->NextNode = NewNode;
            NewNode->PreviousNode = Root;
        }
        else
        {
            Node *NextNewNode = Root->NextNode;
            NewNode->NextNode = NextNewNode;
            NewNode->PreviousNode = Root;
            Root->NextNode = NewNode;
            NextNewNode->PreviousNode = NewNode;
        }
    }
}

void GenericList::InsertLastBefore(int NewValue)
{
    if (Root != NULL)
    {
        Node *NewNode = new Node();
        NewNode->NodeValue = NewValue;
        if (Root->NextNode == NULL) {
            //Hay un solo nodo.
            NewNode->NextNode = Root;
            Root->PreviousNode = NewNode;
            NewNode->PreviousNode = NULL;
            Root = NewNode;
        }
        else
        {
            Node *TraverseNode = Root;
            while (TraverseNode->NextNode != NULL)
            {
                TraverseNode = TraverseNode->NextNode;
            }
            Node *LastBeforeNode = TraverseNode->PreviousNode;
            LastBeforeNode->NextNode = NewNode;
            NewNode->PreviousNode = LastBeforeNode;
            NewNode->NextNode = TraverseNode;
            TraverseNode->PreviousNode = NewNode;
        }
    }
}

void GenericList::DeleteFirst()
{
    if (Root != NULL)
    {
        Node *NodeToDelete = Root;
        Root = Root->NextNode;
        if (Root != NULL)
            Root->PreviousNode = NULL;
        delete NodeToDelete;
    }
}

void GenericList::DeleteSecond()
{
    if (Root != NULL)
    {
        if (Root->NextNode != NULL)
        {
            Node *NodeToDelete = Root->NextNode;
            Node *ThirdNode = Root->NextNode;
            ThirdNode = ThirdNode->NextNode;
            Root->NextNode = ThirdNode;
            if (ThirdNode != NULL)
                ThirdNode->PreviousNode = Root;
            delete NodeToDelete;
        }
    }
}

void GenericList::DeleteLast()
{
    if (Root != NULL)
    {
        if (Root->NextNode == NULL)
        {
            delete Root;
            Root = NULL;
        }
        else
        {
            Node *TraverseNode = Root;
            while (TraverseNode->NextNode != NULL)
            {
                TraverseNode = TraverseNode->NextNode;
            }
            Node *LastNode = TraverseNode->PreviousNode;
            LastNode->NextNode = NULL;
            delete TraverseNode;
        }
    }
}

void GenericList::DeleteLargest()
{
    if (Root != NULL)
    {
        Node *reco = Root;
        int may = Root->NodeValue;
        while (reco != NULL)
        {
            if (reco->NodeValue>may)
            {
                may = reco->NodeValue;
            }
            reco = reco->NextNode;
        }
        reco = Root;
        Node *bor;
        while (reco != NULL)
        {
            if (reco->NodeValue == may)
            {
                if (reco == Root)
                {
                    bor = Root;
                    Root = Root->NextNode;
                    if (Root != NULL)
                        Root->PreviousNode = NULL;
                    delete bor;
                    return;
                }
                else {
                    if (reco->NextNode == NULL)
                    {
                        bor = reco;
                        reco = reco->PreviousNode;
                        reco->NextNode = NULL;
                        delete bor;
                        return;
                    }
                    else
                    {
                        Node *ante = reco->PreviousNode;
                        bor = reco;
                        reco = reco->NextNode;
                        ante->NextNode = reco;
                        reco->PreviousNode = ante;
                        delete bor;
                        return;
                    }
                }
            }
            else {
                reco = reco->NextNode;
            }
        }
    }
}


int main()
{
    GenericList *GenericListTest = new GenericList();
    GenericListTest->InsertFirst(10);
    GenericListTest->InsertFirst(45);
    GenericListTest->InsertFirst(23);
    GenericListTest->InsertFirst(89);
    GenericListTest->Print();

    cout << "Load a value in the end:\n";
    GenericListTest->InsertLast(160);
    GenericListTest->Print();
    cout << "Load a value in the second position:\n";
    GenericListTest->InsertSecond(13);
    GenericListTest->Print();
    cout << "Load a value in the last before position:\n";
    GenericListTest->InserLastBefore(600);
    GenericListTest->Print();
    cout << "Deleting the first node:\n";
    GenericListTest->DeleteFirst();
    GenericListTest->Print();
    cout << "Deleting the second node:\n";
    GenericListTest->DeleteSecond();
    GenericListTest->Print();
    cout << "Deleting the last node:\n";
    GenericListTest->DeleteLast();
    GenericListTest->Print();
    cout << "Deleting the largest node in the list:\n";
    GenericListTest->DeleteLargest();
    GenericListTest->Print();
    return 0;
}
*/
//-----------------Topic 42 End-----------------//

//------------------Topic 43--------------------//
//Exercise 1: Chained lists
/*
class CircularList {
private:
    class Node {
    public:
        int NodeValue;
        Node *NextNode;
        Node *PreviousNode;
    };

    Node *Root;
public:
    CircularList();
    ~CircularList();
    void InsertFirst(int NewValue);
    void InsertLast(int NewValue);
    bool Empty();
    void Print();
    int Amount();
    void Delete(int Position);
};

CircularList::CircularList()
{
    Root = NULL;
}

CircularList::~CircularList()
{
    if (Root != NULL) {
        Node *TraverseNode = Root->NextNode;
        Node *NodeToDelete;
        while (TraverseNode != Root)
        {
            NodeToDelete = TraverseNode;
            TraverseNode = TraverseNode->NextNode;
            delete NodeToDelete;
        }
        delete Root;
    }
}

void CircularList::InsertFirst(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;
    if (Root == NULL)
    {
        NewNode->NextNode = NewNode;
        NewNode->PreviousNode = NewNode;
        Root = NewNode;
    }
    if(Root != NULL) //else
    {
        Node *LastNode = Root->PreviousNode;
        NewNode->NextNode = Root;
        NewNode->PreviousNode = LastNode;
        Root->PreviousNode = NewNode;
        LastNode->NextNode = NewNode;
        Root = NewNode;
    }
}

void CircularList::InsertLast(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;
    if (Root == NULL)
    {
        NewNode->NextNode = NewNode;
        NewNode->PreviousNode = NewNode;
        Root = NewNode;
    }
    if (Root != NULL) //else
    {
        Node *LastNode = Root->PreviousNode;
        NewNode->NextNode = Root;
        NewNode->PreviousNode = LastNode;
        Root->PreviousNode = NewNode;
        LastNode->NextNode = NewNode;
    }
}

bool CircularList::Empty()
{
    if (Root == NULL)
        return true;
    else
        return false;
}

void CircularList::Print()
{
    if (!Empty()) {
        Node *TraverseNode = Root;
        do {
            cout<<TraverseNode->NodeValue  <<"-";
            TraverseNode = TraverseNode->NextNode;
        } while (TraverseNode != Root);
        cout << "\n";
    }
}

int CircularList::Amount()
{
    int Amount = 0;
    if (!Empty())
    {
        Node *TraverseNode = Root;
        do {
            Amount++;
            TraverseNode = TraverseNode->NextNode;
        } while (TraverseNode != Root);
    }
    return Amount;
}

void CircularList::Delete(int Position)
{
    if (Position <= Amount())
    {
        if (Position == 1)
        {
            if (Amount() == 1)
            {
                delete Root;
                Root = NULL;
            }
            else
            {
                Node *NodeToDelete = Root;
                Node *LastNode = Root->PreviousNode;
                Root = Root->NextNode;
                LastNode->NextNode = Root;
                Root->PreviousNode = LastNode;
                delete NodeToDelete;
            }
        }
        else {
            Node *TraverseNode = Root;
            for (int f = 1; f <= Position - 1; f++)
                TraverseNode = TraverseNode->NextNode;
            Node *NodeToDelete = TraverseNode;
            Node *PreviousNodePointer = TraverseNode->PreviousNode;
            TraverseNode = TraverseNode->NextNode;
            PreviousNodePointer->NextNode = TraverseNode;
            TraverseNode->PreviousNode = PreviousNodePointer;
            delete NodeToDelete;
        }
    }
}

int main()
{
    CircularList *CircularListTest = new CircularList();
    CircularListTest->InsertFirst(100);
    CircularListTest->InsertFirst(45);
    CircularListTest->InsertFirst(12);
    CircularListTest->InsertFirst(4);
    cout <<"Luego de insertar 4 nodos al principio\n";
    CircularListTest->Print();
    CircularListTest->InsertLast(250);
    CircularListTest->InsertLast(7);
    cout<<"Luego de insertar 2 nodos al final\n";
    CircularListTest->Print();
    cout<<"Cantidad de nodos:" <<CircularListTest->Amount() <<"\n";
    cout <<"Luego de borrar el de la primer posición:\n";
    CircularListTest->Delete(1);
    CircularListTest->Print();
    cout << "Luego de borrar el de la cuarta posición:\n";
    CircularListTest->Delete(4);
    CircularListTest->Print();
    delete CircularListTest;
    return 0;
}
*/
//-----------------Topic 43 End-----------------//

//------------------Topic 44--------------------//
//Exercise 2: Recursion: Applied problem
/*
class GenericList {
    class Node {
    public:
        int NodeValue;
        Node *NextNode;
    };
    Node *Root;
    void Print(Node *TraverseNode);
public:
    GenericList();
    ~GenericList();
    void InsertFirst(int NewValue);
    void Print();
};

GenericList::GenericList()
{
    Root = NULL;
}
GenericList::~GenericList()
{
    Node *TraverseNode = Root;
    Node *NoteToDelete;
    while (TraverseNode != NULL)
    {
        NoteToDelete = TraverseNode;
        TraverseNode = TraverseNode->NextNode;
        delete NoteToDelete;
    }
}


void GenericList::InsertFirst(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;
    NewNode->NextNode = Root;
    Root = NewNode;
}

void GenericList::Print()
{
    Print(Root);
}

void GenericList::Print(Node *TraverseNode)
{
    if (TraverseNode != NULL)
    {
        Print(TraverseNode->NextNode);
        cout<< TraverseNode->NodeValue << "-";
    }
}

int main()
{
    GenericList *GenericListTest = new GenericList();
    GenericListTest->InsertFirst(10);
    GenericListTest->InsertFirst(4);
    GenericListTest->InsertFirst(5);
    GenericListTest->Print();
    delete GenericListTest;
    return 0;
}
*/
//-----------------Topic 44 End-----------------//

//------------------Topic 48--------------------//
//Exercise 1: Trees: Preorder, inorder, postorder
/*
class BinaryTree {
private:
    class Node {
    public:
        int NodeValue;
        Node *LeftBranch;
        Node *RightBranch;
    };
    Node *Root;
    void Delete(Node *TraverseNode);
    void PrintPreoder(Node *TraverseNode);
    void PrinInorder(Node * TraverseNode);
    void PrintPostorder(Node * TraverseNode);
public:
    BinaryTree();
    ~BinaryTree();
    void Insert(int NewValue);
    void PrintPreoder();
    void PrinInorder();
    void PrintPostorder();
};

BinaryTree::BinaryTree()
{
    Root = NULL;
}
BinaryTree::~BinaryTree()
{
    Delete(Root);
}

void BinaryTree::Delete(Node * TraverseNode)
{
    if (TraverseNode != NULL)
    {
        Delete(TraverseNode->LeftBranch);
        Delete(TraverseNode->RightBranch);
        delete TraverseNode;
    }
}

void BinaryTree::Insert(int NewValue)
{
    Node *NewNode;
    NewNode = new Node();
    NewNode->NodeValue = NewValue;
    NewNode->LeftBranch = NULL;
    NewNode->RightBranch = NULL;
    if (Root == NULL)
        Root = NewNode;
    else
    {
        Node *LastNode, *TraverseNode;
        LastNode = NULL;
        TraverseNode = Root;
        while (TraverseNode != NULL)
        {
            LastNode = TraverseNode;
            if (NewValue < TraverseNode->NodeValue)
                TraverseNode = TraverseNode->LeftBranch;
            else
                TraverseNode = TraverseNode->RightBranch;
        }
        if (NewValue < LastNode->NodeValue)
            LastNode->LeftBranch = NewNode;
        else
            LastNode->RightBranch = NewNode;
    }
}

void BinaryTree::PrintPreoder()
{
    PrintPreoder(Root);
    cout << "\n";
}
void BinaryTree::PrintPreoder(Nodo * TraverseNode)
{
    if (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << "-";
        PrintPreoder(TraverseNode->LeftNode);
        PrintPreoder(TraverseNode->RightNode);
    }
}

void BinaryTree::PrinInorder()
{
    PrinInorder(Root);
    cout << "\n";
}
void BinaryTree::PrinInorder(Node * TraverseNode)
{
    if (TraverseNode != NULL)
    {
        PrinInorder(TraverseNode->LeftBranch);
        cout << TraverseNode->NodeValue << "-";
        PrinInorder(TraverseNode->RightBranch);
    }
}

void BinaryTree::PrintPostorder()
{
    PrintPostorder(Root);
    cout << "\n";
}
void BinaryTree::PrintPostorder(Nodo * TraverseNode)
{
    if (TraverseNode != NULL)
    {
        PrintPostorder(TraverseNode->izq);
        PrintPostorder(TraverseNode->der);
        cout << TraverseNode->NodeValue << "-";
    }
}

int main()
{
    BinaryTree *BinaryTreeTest = new BinaryTree();
    BinaryTreeTest->Insert(100);
    BinaryTreeTest->Insert(50);
    BinaryTreeTest->Insert(25);
    BinaryTreeTest->Insert(75);
    BinaryTreeTest->Insert(150);

    cout<<"Printing preorder: ";
    BinaryTreeTest->PrintPreorder();
    cout<<"Printing inorder: ";
    BinaryTreeTest->PrintInorder();
    cout<<"Print Postorder: ";
    BinaryTreeTest->PrintPostorder();
    delete BinaryTreeTest;

    return 0;
}
*/
//Exercise 2: Trees: Insertion not existing
/*
class BinaryTree {
private:

    class Node {
    public:
        int NodeValue;
        Node *LeftBranch;
        Node *RightBranch;
    };

    Node *Root;
    int Stack;
    int Height;
    void Delete(Node *TraverseNode);
    void PrintInOrder(Node * TraverseNode);
    void Amount(Node * TraverseNode);
    void AmountLeftNodes(Node * TraverseNode);
    void PrintInorderWithLevel(Node * TraverseNode, int Level);
    void ReturnHeight(Node * TraverseNode, int Level);
public:
    BinaryTree();
    ~BinaryTree();
    void Insert(int x);
    bool Exist(int x);
    void PrintInorder();
    int Amount();
    int AmountLeftNodes();
    void PrintInorderWithLevel();
    int ReturnHeight();
    void LargestValue();
    void DeleteLowerValue();
};

BinaryTree::BinaryTree()
{
    Root = NULL;
}
BinaryTree::~BinaryTree()
{
    Delete(Root);
}

void BinaryTree::Delete(Node *TraverseNode)
{
    if (TraverseNode != NULL)
    {
        Delete(TraverseNode->LeftBranch);
        Delete(TraverseNode->RightBranch);
        delete TraverseNode;
    }
}

void BinaryTree::Insert(int NewValue)
{
    if (!Exist(NewValue))
    {
        Node *NewNode;
        NewNode = new Node();
        NewNode->NodeValue = NewNode;
        NewNode->LeftBranch = NULL;
        NewNode->RightBranch = NULL;
        if (Root == NULL)
            Root = NewNode;
        if(Root != NULL)
        {
            Node *LastNode, *TraverseNode;
            LastNode = NULL;
            TraverseNode = Root;
            while (TraverseNode != NULL)
            {
                LastNode = TraverseNode;
                if (NewNode < TraverseNode->NodeValue)
                    TraverseNode = TraverseNode->LeftBranch;
                else
                    TraverseNode = TraverseNode->RightBranch;
            }
            if (NewNode < LastNode->NodeValue)
                LastNode->LeftBranch = NewNode;
            else
                LastNode->RightBranch = NewNode;
        }
    }
}

bool BinaryTree::Exist(int NewValue)
{
    Node *TraverseNode = Root;
    while (TraverseNode != NULL)
    {
        if (NewValue == TraverseNode->NodeValue)
                return true;
        if (NewValue != TraverseNode->NodeValue) //else
        {
            if (NewValue > TraverseNode->NodeValue)
                TraverseNode = TraverseNode->RightBranch;

            if (NewValue < TraverseNode->NodeValue) //else
                TraverseNode = TraverseNode->LeftBranch;
        }
    }
    return false;
}

int BinaryTree::Amount()
{
    Stack = 0;
    Amount(Root);
    return Stack;
}
void BinaryTree::Amount(Node *TraverseNode)
{
    if (TraverseNode != NULL)
    {
        Stack++;
        Amount(TraverseNode->LeftBranch);
        Amount(TraverseNode->RightBranch);
    }
}

int BinaryTree::AmountLeftNodes()
{
    Stack = 0;
    AmountLeftNodes(Root);
    return Stack;
}
void BinaryTree::AmountLeftNodes(Node *TraverseNode)
{
    if (TraverseNode != NULL) {
        if (TraverseNode->LeftBranch == NULL && TraverseNode->RightBranch == NULL)
        {
            Stack++;
        }
        AmountLeftNodes(TraverseNode->LeftBranch);
        AmountLeftNodes(TraverseNode->RightBranch);
    }
}

void BinaryTree::PrintInorderWithLevel()
{
    PrintInorderWithLevel(Root, 1);
    cout << "\n";
}
void BinaryTree::PrintInorderWithLevel(Node *TraverseNode, int Level)
{
    if (TraverseNode != NULL) {
        PrintInorderWithLevel(TraverseNode->LeftBranch, Level + 1);
        cout<<TraverseNode->NodeValue <<"(" <<Level <<") - ";
        PrintInorderWithLevel(TraverseNode->RightBranch, Level + 1);
    }
}

int BinaryTree::ReturnHeight()
{
    Height = 0;
    ReturnHeight(Root, 1);
    return Height;
}
void BinaryTree::ReturnHeight(Node *TraverseNode, int Level)
{
    if (TraverseNode != NULL)
    {
        ReturnHeight(TraverseNode->LeftBranch, Level + 1);
        if (Level>Height)
            Height = Level;
        ReturnHeight(TraverseNode->RightBranch, Level + 1);
    }
}

void BinaryTree::LargestValue()
 {
    if (Root != NULL)
    {
        Node *TraverseNode = Root;
        while (TraverseNode->RightBranch != NULL)
            TraverseNode = TraverseNode->RightBranch;
        cout<<"The largest value in the tree is:" <<TraverseNode->NodeValue;
    }
}

void BinaryTree::DeleteLowerValue()
{
     if (Root != NULL) {
         Node *NodeToDelete;
         if (Root->LeftBranch == NULL)
         {
             NodeToDelete = Root;
             Root = Root->RightBranch;
             delete NodeToDelete;
         }
         else {
             Node *LastNode = Root;
             Node *TraverseNode = Root->LeftBranch;
             while (TraverseNode->LeftBranch != NULL)
             {
                 LastNode = TraverseNode;
                 TraverseNode = TraverseNode->LeftBranch;
             }
             LastNode->LeftBranch = TraverseNode->RightBranch;
             delete TraverseNode;
         }
     }
 }

void BinaryTree::PrintInorder()
{
    PrintInorder(Root);
    cout << "\n";
}
void BinaryTree::PrintInorder(Node *TraverseNode)
{
    if (TraverseNode != NULL)
    {
        PrintInorder(TraverseNode->LeftBranch);
        cout << TraverseNode->NodeValue << "-";
        PrintInorder(TraverseNode->RightBranch);
    }
}

int main()
{
    BinaryTree *BinaryTreeTest = new BinaryTree();
    BinaryTreeTest->Insert(100);
    BinaryTreeTest->Insert(50);
    BinaryTreeTest->Insert(25);
    BinaryTreeTest->Insert(75);
    BinaryTreeTest->Insert(150);

    cout<<"Printing inorde....: ";
    BinaryTreeTest->PrintInorder();

    cout<<"Amount of nodes in the tree:" <<BinaryTreeTest->Amount() <<"\n";
    cout<<"Amount of left nodes:" <<BinaryTreeTest->AmountLeftNodes()<<"\n";

    cout<<"Printing nodes with their levels:";
    BinaryTreeTest->PrintInorderWithLevel();

    cout<<"Tree height:";
    cout << BinaryTreeTest->ReturnHeight();
    cout << "\n";

    cout << "The largest value in the tree:";
    BinaryTreeTest->LargestValue();
    cout << "\n";

    cout << "Deleting lower value:";
    BinaryTreeTest->DeleteLowerValue();

    cout<<"Printing inorder:";
    BinaryTreeTest->PrintInorder();
    delete BinaryTreeTest;
    return 0;
}
*/
//-----------------Topic 48 End-----------------//

//------------------Topic 49--------------------//
//Exercise 1: Inline metod
/*
class Admin
{
    int Vector[5];
public:
    ~Admin();
    void Load();
    void Print();
    void Addition(){ int Result = Vector[0] + Vector[4];  cout << "The addition of the first and the last component is: " << Result << ".\n"; }//Inline metod
};

void Admin::Load()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Load a value: ";
        cin>>Vector[i];
        cin.get();
    }
    cout << "\n";
}

void Admin::Print()
{
    for(int i = 0; i< 5; i++)
    {
        cout << Vector[i] << " - ";
    }
    cout <<"\n";
}

int main()
{
    Admin* test = new Admin();
    test->Load();
    test->Print();
    test->Addition();

    cout << "\n-End of the program- \n";
    return 0;
}
*/
//-----------------Topic 49 End-----------------//

//------------------Topic 50--------------------//
//Exercise 1: Friend funtions
/*
class Temperature {
    int LowerTemperature, MaxTemperature, CurrentTemperature;
public:
    Temperature(int LowerTemperatureRef, int MaxTemperatureRef, int CurrentTemperatureRef){ LowerTemperature = LowerTemperatureRef; MaxTemperature = MaxTemperatureRef; CurrentTemperature = CurrentTemperatureRef; }
    friend int MediaTemperature(Temperature Temperature1, Temperature Temperature2);
};

int MediaTemperature(Temperature Temperature1, Temperature Temperature2)
{
    int Average =(Temperature1.CurrentTemperature + Temperature2.CurrentTemperature)/2;
    return Average;
}

int main()
{
    Temperature temperatura1(10, 20, 15);
    Temperature temperatura2(12, 25, 17);
    cout << "The average temperature is:";
    cout << MediaTemperature(temperatura1, temperatura2);
    return 0;
}
*/
//-----------------Topic 50 End-----------------//

//------------------Topic 51--------------------//
//Exercise 1: Friend classes
/*
class Node {
    int NodeValue;
    Node *PreviousNode, *NextNode;
public:
    Node(int NewValue){ NodeValue = NewValue; };
    friend class GenericList;
};

class GenericList {
    Node *Root;
public:
    GenericList() { Root = NULL; };
    ~GenericList();
    void InsertFirst(int NewNode);
    void Print();
};

GenericList::~GenericList()
{
    Node *TraverseNode = Root;
    Node *NodeToDelete;
    while (TraverseNode != NULL)
    {
        NodeToDelete = TraverseNode;
        TraverseNode = TraverseNode->NextNode;
        delete NodeToDelete;
    }
}

void GenericList::InsertFirst(int NewValue)
{
    Node *NewNode = new Node(NewValue);
    NewNode->PreviousNode = NULL;
    if (Root == NULL)
    {
        NewNode->NextNode = NULL;
        Root = NewNode;
    }
    if(Root != NULL) //else
    {
        NewNode->NextNode = Root;
        Root->PreviousNode = Root;
        Root = NewNode;
    }
}

void GenericList::Print()
{
    Node *TraverseNode = Root;
    while (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << "-";
        TraverseNode = TraverseNode->NextNode;
    }
    cout << "\n";
}


int main()
{
    GenericList *GenericListTest = new GenericList();
    GenericListTest->InsertFirst(10);
    GenericListTest->InsertFirst(20);
    GenericListTest->InsertFirst(5);
    GenericListTest->Print();
    delete GenericListTest;
    return 0;
}
*/
//-----------------Topic 51 End-----------------//

//------------------Topic 52--------------------//
//Exercise 1: Static attributes
/*
class Account {
    float Balance;
    static int Amount;
public:
    Account(float AccountBalance) { Balance = AccountBalance; Amount++; };
    int ReturnAmount() { return Amount; };
};

int Account::Amount = 0;

class Bank {
    Account *Account1, *Account2, *Account3;
public:
    Bank();
    ~Bank();
    void AmountOfClients();
};

Bank::Bank()
{
    Account1 = new Account(1000);
    Account2 = new Account(3000);
    Account3 = new Account(5000);
}

Bank::~Bank()
{
    delete Account1;
    delete Account2;
    delete Account3;
}

void Bank::AmountOfClients()
{
    cout << Account1->ReturnAmount();
    cout << Account2->ReturnAmount();
    cout << Account3->ReturnAmount();
}

int main()
{
    Bank *BankTest = new Bank();
    BankTest->AmountOfClients();
    delete BankTest;
    return 0;
}
*/
//-----------------Topic 52 End-----------------//

//------------------Topic 53--------------------//
//Exercise 1: Static metod
/*
class Account {
    float Balance;
    static int Amount;
public:
    Account(float AccountBalance) { Balance = AccountBalance; Amount++; };
    static int ReturnAmount() { return Amount; };
};

int Account::Amount = 0;

class Bank {
    Account *Account1, *Account2, *Account3;
public:
    Bank();
    ~Bank();
    void AmountOfClients();
};

Bank::Bank()
{
    Account1 = new Account(1000);
    Account2 = new Account(3000);
    Account3 = new Account(5000);
}

Bank::~Bank()
{
    delete Account1;
    delete Account2;
    delete Account3;
}

void Bank::AmountOfClients()
{
    cout << Account::ReturnAmount();
}

int main()
{
    Bank *BankTest = new Bank();
    BankTest->AmountOfClients();
    delete BankTest;
    return 0;
}
*/
//-----------------Topic 53 End-----------------//

//------------------Topic 54--------------------//
//Exercise 1: Pointer: this
/*
class Temperature {
    int LowerTemperature;
    int MaxTemperature;
    int CurrentTemperature;
    void Print();
public:
    Temperature(int NewLowerTemperature, int NewMaxTemperature, int NewCurrentTemperature);
};

Temperature::Temperature(int NewLowerTemperature, int NewMaxTemperature, int NewCurrentTemperature)
{
    this->LowerTemperature = NewLowerTemperature;
    this->MaxTemperature = NewMaxTemperature;
    this->CurrentTemperature = NewCurrentTemperature;
    Print();
}

void Temperature::Print()
{
    cout << LowerTemperature << " " << CurrentTemperature << " " << MaxTemperature << "\n";
}

int main()
{
    Temperature temperatura1(10, 20, 15);
    Temperature temperatura2(25, 35, 29);
    return 0;
}
*/
//-----------------Topic 54 End-----------------//

//------------------Topic 55--------------------//
//Exercise 1: #define
/*
class Matris
{
    int vec[ROWS][COLUMN];
public:
    void Load();
    void Print();
};

void Matris::Load()
{
    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLUMN; c++)
        {
            cout << "Load the value: ";
            cin>>vec[r][c];
            cin.get();
        }
    }
}

void Matris::Print()
{
    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLUMN; c++)
        {
            cout << vec[r][c] << " - ";
        }
        cout << "\n";
    }
}

int main()
{
    Matris* MatrisTest = new Matris();
    MatrisTest->Load();
    MatrisTest->Print();

    return 0;
}
*/
//-----------------Topic 55 End-----------------//

//------------------Topic 56--------------------//
//Exercise 1: Consts definition
/*
class Temperature {
    const int Media;
    int LowerTemperature, MaxTemperature;
public:
    Temperature(int NewLowerTemperature,int NewMaxTemperature,int MediaTemperature);
    void Print();
};

Temperature::Temperature(int NewLowerTemperature,int NewMaxTemperature,int MediaTemperature):Media(MediaTemperature)
{
    LowerTemperature=NewLowerTemperature;
    MaxTemperature=NewMaxTemperature;
}

void Temperature::Print()
{
    cout <<LowerTemperature <<" " <<MaxTemperature <<" " << Media << "\n";
}

int main()
{
    Temperature Temperature1Test(10,20,14);
    Temperature1Test.Print();

    Temperature Temperature2Test(5,9,7);
    Temperature2Test.Print();
    return 0;
}
*/
//-----------------Topic 56 End-----------------//

//------------------Topic 57--------------------//
//Exercise 1: Parameters of a Constant Method
/*
class GenericList {
private:
    class Node {
    public:
        int NodeValue;
        Node *NextNode;
    };
    Node *Root;
public:
    GenericList();
    ~GenericList();
    void InsertFirst(int NewValue);
    void Print();
    bool EqualLists(const GenericList *List2);
};

GenericList::GenericList()
{
    Root = NULL;
}
GenericList::~GenericList()
{
    Node *TraverseNode = Root;
    Node *NodeToDelete;
    while (TraverseNode != NULL)
    {
        NodeToDelete = TraverseNode;
        TraverseNode = TraverseNode->NextNode;
        delete NodeToDelete;
    }
}

void GenericList::InsertFirst(int NewValue)
{
    Node *NewNode = new Node();
    NewNode->NodeValue = NewValue;
    NewNode->NextNode = Root;
    Root = NewNode;
}

void GenericList::Print()
{
    Node *TraverseNode = Root;
    cout << "Complete list.\n";
    while (TraverseNode != NULL)
    {
        cout << TraverseNode->NodeValue << "-";
        TraverseNode = TraverseNode->NextNode;
    }
    cout << "\n";
}

bool GenericList::EqualLists(const GenericList *List2)
{
    bool IsEqualsLists = true;
    Node *TraverseNode1 = Root;
    Node *TraverseNode2 = List2->Root;
    while (TraverseNode1 != NULL && TraverseNode2 != NULL)
    {
        if (TraverseNode1->NodeValue != TraverseNode2->NodeValue)
        {
            IsEqualsLists = false;
            break; //salimos del while
        }
        TraverseNode1 = TraverseNode1->NextNode;
        TraverseNode2 = TraverseNode2->NextNode;
    }
    if (IsEqualsLists == true && TraverseNode1 == NULL && TraverseNode2 == NULL)
        return true;
    else
        return false;
}

int main()
{
    GenericList *GenericList1Test = new GenericList();
    GenericList1Test->InsertFirst(10);
    GenericList1Test->InsertFirst(20);
    GenericList1Test->InsertFirst(30);
    GenericList1Test->Print();

    GenericList *GenericList2Test = new GenericList();
    GenericList2Test->InsertFirst(10);
    GenericList2Test->InsertFirst(20);
    GenericList2Test->InsertFirst(30);
    GenericList2Test->Print();

    if (GenericList1Test->EqualLists(GenericList2Test))
        cout << "Lists aren equals\n";
    if (!GenericList1Test->EqualLists(GenericList2Test))
        cout << "Lists aren't equals\n";

    delete GenericList1Test;
    delete GenericList2Test;
    return 0;
}
*/
//-----------------Topic 57 End-----------------//

//------------------Topic 59--------------------//
//Exercise 1: Parameters by Value and Reference of Simple Data
 /*
class Vector {
    int Vector[5];
public:
    void Load();
    void Print();
    void LargestAndLower(int &Largest, int &Lower);
};

void Vector::Load()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Load value "<< f + 1 << " :";
        cin >> Vector[f];
    }
}

void Vector::Print()
{
    for (int f = 0; f < 5; f++)
    {
        cout << Vector[f] << "-";
    }
    cout << "\n";
}

void Vector::LargestAndLower(int &Largest, int &Lower)
{
    Largest = Vector[0];
    Lower = Vector[0];
    for (int f = 1; f < 5; f++)
    {
        if (Vector[f]>Largest)
            Largest = Vector[f];
        else
            if (Vector[f] < Lower)
                Lower = Vector[f];
    }
}

int main()
{
    Vector VectorTest;
    VectorTest.Load();
    VectorTest.Print();
    int LargestValue, LowerValue;
    VectorTest.LargestAndLower(LargestValue, LowerValue);
    cout << "The largest value in the vector is:" << LargestValue << "\n";
    cout << "The lower value in the vector is:" << LowerValue << "\n";
    return 0;
}
*/
 //-----------------Topic 59 End-----------------//

 //------------------Topic 60--------------------//
 //Exercise 1: Parameters by Value and Object Reference
  /*
 class Clock {
     int Hour;
     int Minute;
     int Second;
 public:
     Clock(int NewHour, int NewMinute, int NewSecond) { this->Hour = NewHour; this->Minute = NewMinute; this->Second = NewSecond; };
     void Print();
     void TryChange(Clock &ClockRef);
 };

 void Clock::Print()
 {
     cout << Hour << ":" << Minute << ":" << Second << "\n";
 }

 void Clock::TryChange(Clock &ClockRef)//El Objeto debe pasarse por referencia o no causara cambios en el objeto
 {
     ClockRef.Hour = 1;
     ClockRef.Minute = 0;
     ClockRef.Second = 0;
 }

 int main()
 {
     Clock reloj1(10, 10, 10);
     Clock reloj2(20, 20, 20);
     reloj1.TryChange(reloj2);
     reloj1.Print();  // Print: 10:10:10
     reloj2.Print();  // Print: 1:0:0
     return 0;
 }
 */
  //-----------------Topic 60 End-----------------//

  //------------------Topic 61--------------------//
  //Exercise 1: String class
  /*
  int main()
  {
      string String1 = "Hello World";
      string String2;
      cout << "Load a characters string without blanks:";
      cin >> String2;
      cin.get();
      cout << "First string:" << String1 << "\n";
      cout << "Second string:" << String2;
      return 0;
  }
  */
  //Exercise 2: Operators in strings
  /*
  int main()
  {
      string String1;
      string String2;

      cout << "Load the first string: ";
      getline(cin, String1);
      cout << "Load the second string: ";
      getline(cin, String2);

      if (String1>String2)
      {
          cout << String1 << " is the most literate.";
      }
      if (String2>String1)
      {
          cout << String2 << " is the most literate.";
      }
      if(String1==String2)
      {
         cout << "Se cargaron dos cadenas iguales";
      }
      

      return 0;
  }
  */
  //Exercise 3: Operator + in string
  /*
  int main()
  {
      string String1;
      string String2;

      cout << "Load the first string:";
      getline(cin, String1);
      cout << "Load the second string:";
      getline(cin, String2);

      string String3 = String1 + "-" + String2;
      cout << "String which results from the concatenation of the two previous:" << String3;
      return 0;
  }
  */
  //Exercise 4: subscript
  /*
  int main()
  {
      string String1 = "Hello";
      cout << String1[0];
      cout << "\n";
      cout << String1[3];
      return 0;
  }
  */
   //-----------------Topic 61 End-----------------//

   //------------------Topic 62--------------------//
   //Exercise 1: Metod: length() y size()
   /*
   int main()
   {
       string String = "Hello";
       cout << "String:" << String;
       cout << "\n";
       cout << String.size();
       cout << "\n";
       cout << String.length();
       return 0;
   }
   */
   //Exercise 2: Metod: empty()
   /*
   int main()
   {
       string String;

       cout << "Load a character string:";
       getline(cin, String);

       if (String.empty())
       {
           cout << "No characters were entered.";
       }
       if(!String.empty())
       {
           cout << "The string has a length of:" << String.length();
       }
       return 0;
   }
   */
   //Exercise 3: Metod: at()
   /*
   int main()
   {
       string String;

       cout << "Load a word:";
       getline(cin, String);

       for (int f = 0; f < String.length(); f++)
       {
           cout << String.at(f)<<"-";
       }
       return 0;
   }
   */
   //-----------------Topic 62 End-----------------//

   //------------------Topic 63--------------------//
   //append: To add another string at the end..
   //insert: To add another string anywhere in the chain indicating the initial position.
   //erase: Delete a certain number of characters from the string from a certain position.

   //Exercise 1:  Methods applied
   /*
   int main()
   {
       string String = "One three";

       cout << "Original string:" << String << "\n";

       String.append(" four");
       cout << "String after call append:" << String << "\n";

       String.insert(3, " dos");
       cout << "String after call insert:" << String << "\n";

       String.erase(0, 4);
       cout << "String after call erase:" << String << "\n";

       return 0;
   }
   */
   //-----------------Topic 63 End-----------------//

   ////smart pointers
   //Library : <memory>
   //Exercise 1 : unique_ptr
   /*
   int main() {

       std::unique_ptr<int> Number(new int(5));

       //print the number 5

       std::cout << *Number << std::endl;

       return 0;

   }
   */
   //Exercise 2 : shared_ptr
   /*
   int main() {

       std::shared_ptr<int> Number1(new int(5));

       std::shared_ptr<int> Number2 = Number1;

       //Print the number 5

       std::cout << *Number2 << std::endl;

       return 0;

   }
   */
   //Exercise 3: weak_ptr
   /*
   int main() {

       std::shared_ptr<int> Number1(new int(5));



       std::weak_ptr<int> Number2 = Number1;



       //It will print the number 1

       std::cout << Number2.use_count() << std::endl;



       return 0;

   }
   */
   //Exercise 4: clase Auto
   /*
   class Car
   {
   private:
       string Brand;
       string Model;

   public:
       Car( string Model, string Brand) : Brand(Brand), Model(Model){}
       void ShouldData() { cout << "Car " << Brand << "Model " << Model << ".\n";}
   };

   int main()
   {
       // puntero inteligente de tipo shared_ptr para un objeto de la clase Auto
       shared_ptr<Car> auto_ptr = make_shared<Car>("Ford","Munstag");

       //llamada a la función mostrar_datos a través del puntero inteligente
       auto_ptr->ShouldData();

       return 0;
   }
   */
   //smart pointers - End//