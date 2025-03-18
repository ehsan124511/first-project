#include <iostream>
#include <numeric>

using namespace std;

struct Fruction{
    int Numerator;  //صورت
    int Denominator;    //مخرج
};



Fruction multf(Fruction f1, Fruction f2)
{
    Fruction f3;
    f3.Numerator = f1.Numerator * f2.Numerator;
    f3.Denominator = f1.Denominator * f2.Denominator;
    return f3;
}


Fruction subf(Fruction f1, Fruction f2)
{
    Fruction f3;
    f3.Denominator = f1.Denominator * f2.Denominator;
    f2.Numerator = f1.Denominator * f2.Numerator;
    f1.Numerator = f1.Numerator * f2.Denominator;
    f3.Numerator = f1.Numerator - f2.Numerator;
    return f3;
}

Fruction sumf(Fruction f1, Fruction f2)
{
    Fruction f3;
    f3.Denominator = f1.Denominator * f2.Denominator;
    f2.Numerator = f1.Denominator * f2.Numerator;
    f1.Numerator = f1.Numerator * f2.Denominator;
    f3.Numerator = f1.Numerator + f2.Numerator;
    return f3;
}

Fruction divf(Fruction f1, Fruction f2)
{
    Fruction f3;
    f3.Numerator = f1.Numerator * f2.Denominator;
    f3.Denominator = f1.Denominator * f2.Numerator;
    return f3;

}

Fruction simp(Fruction f)
{
    int gcd1 = gcd(f.Numerator, f.Denominator);
    f.Numerator = f.Numerator / gcd1;
    f.Denominator = f.Denominator / gcd1;
    return f;
}


void display(Fruction f)
{
    cout << f.Numerator << "/" << f.Denominator ;
}

int main()
{

    struct Fruction T1 = {6,8};
    struct Fruction T2 = {10,15};
    display(T1); cout<<" ";display(T2); cout<<endl;
    struct Fruction T3;

    T3 = simp(sumf(T1,T2));
    cout<< (float)(T3.Numerator)/(T3.Denominator)<< " = " ;display(T3); cout<< " = " ; display(T1); cout<< " + " ; display(T2); cout<<endl;

    T3 = simp(subf(T1,T2));
    cout<< (float)(T3.Numerator)/(T3.Denominator)<< " = " ;display(T3); cout<< " = " ; display(T1); cout<< " - " ; display(T2); cout<<endl;

    T3 = simp(multf(T1,T2));
    cout<< (float)(T3.Numerator)/(T3.Denominator)<< " = " ;display(T3); cout<< " = " ; display(T1); cout<< " * " ; display(T2); cout<<endl;

    T3 = simp(divf(T1,T2));
    cout<< (float)(T3.Numerator)/(T3.Denominator)<< " = " ; display(T3); cout<< " = " ; display(T1); cout<< "  /  " ; display(T2); cout<<endl;



}