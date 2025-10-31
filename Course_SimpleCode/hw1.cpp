#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout<<"Введите числа a, b, c: ";
    cin >> a >> b >> c;
    cout<<endl;
    double average; int summ; int multi;
    summ = a+b+c;
    multi = a*b*c;
    average = summ/3;
    cout<<"Сумма: "<<summ<<endl;
    cout<<"Произведение: "<<multi<<endl;
    cout<<"Среднее арифметическое: "<< average;
}