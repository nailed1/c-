#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num, end_num;
    int sum=0;
    cout<<"Введите начало и конец диапозона (включительно): ";
    cin>>num>>end_num;
    cout<<endl;
    do {
        if(num%2!=0){
            sum+=num;
        }
        num++;
    } while (num<end_num);
    cout<<"Сумма: "<<sum;
    return 0;
}