#include <bits/stdc++.h>
using namespace std;

void Power(float x, float y)
{
    float p;
    p = pow(x, y);
    cout << "Power: " << p;
}

void Sine(float x)
{
    float s;
    s = sin(x);
    cout << "Sin: " << s;
}

void Square(float x)
{
    float sq;
    sq = sqrt(x);
    cout << "Square of a Given Value is: " << sq;
}

void Cos(float x)
{
    float c;
    c = cos(x);
    cout << "COS: " << c;
}

void Tan(float x)
{
    float t;
    t = tan(x);
    cout << "TAN: " << t;
}

void Log(float x)
{
    float l;
    l = log(x);
    cout << "Natural Logarithm: " << l;
}

void Baselog(float x)
{
    float bl;
    bl = log10(x);
    cout << "LOG with Base 10: " << bl;
}

void Scientific()
{
    cout << "Press 1 for calculating its Power\n";
    cout << "Press 2 for calculating SIN\n";
    cout << "Press 3 for Calculating Square\n";
    cout << "Press 4 for Calculating COS\n";
    cout << "Press 5 for Calculating TAN\n";
    cout << "Press 6 for Calculating LOG\n";
    cout << "Press 7 for Calculating LOG WITH BASE 10\n";

    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        int a, b;
        cout << "Enter the Number for Calculating its Power: " << endl;
        cin >> a;
        cout << "Enter the Power for a Number: " << endl;
        cin >> b;
        Power(a, b);
        break;

    case 2:
        int x;
        cout << "Enter the Number for Calculating SIN: " << endl;
        cin >> x;
        Sine(x);
        break;

    case 3:
        int y;
        cout << "Enter the Number for Calculating Square: " << endl;
        cin >> y;
        Square(y);
        break;

    case 4:
        int z;
        cout << "Enter the Number for Calculating COS: " << endl;
        cin >> z;
        Cos(z);
        break;

    case 5:
        int p;
        cout << "Enter the Number for Calculating TAN: " << endl;
        cin >> p;
        Tan(p);
        break;

    case 6:
        int r;
        cout << "Enter the Number for Calculating LOG: " << endl;
        cin >> r;
        Log(r);
        break;

    case 7:
        cout << "Enter the Number for Calculating LOG WITH BASE 10: " << endl;
        cin >> a;
        Baselog(a);
        break;

    default:
        cout << "Enter a valid choice\n";
        break;
    }
}

void Normal(double a, double b, int operation)
{

    switch (operation)
    {
    case 1: // Multiplication//
        cout << "Product of a and b is : " << a * b << endl;
        break;

    case 2: // Addition
        cout << "Addition of a and b is : " << a * b << endl;
        break;
    case 3: // Subtraction
        cout << "Subtraction of a and b is :  " << a - b << endl;
        break;
    case 4: // Division
        cout << "Divison of a and b is :  " << a / b;
        break;

    default:

        cout << "Invalid Input\n";
        break;
    }
}

int main()
{
    cout << "*******WELCOME TO CALCULATOR*********\n";
    cout << "*******Select type*********\n";
    cout << "Press 1 for Normal\n";
    cout << "Press 2 for Scientific\n";
    int type;
    cin >> type;

    switch (type)
    {
    case 1:
        cout << "*******Normal*********\n";
        int a, b;
        cout << "Enter two numbers\n";
        cin >> a >> b;
        cout << "Press 1 for Multiplication\n";
        cout << "Press 2 for Addition\n";
        cout << "Press 3 for Subtraction\n";
        cout << "Press 4 for Division\n";
        int choice;
        cin >> choice;

        Normal(a, b, choice);
        break;
    case 2:
        cout << "*******Scientific*********\n";
        Scientific();
        break;

    default:
        cout << "*******Enter a valid  input*******\n";
        break;
    }
    return 0;
}
