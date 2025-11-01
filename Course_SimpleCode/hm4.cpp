#include <iostream>
using namespace std;

int main() {
    int count, symbol, direction;
    cout<<"Введите число символов, сам символ, и какой будет линия (1-вертикальная; 2-вертикальная): ";
    cin>>count>>symbol>>direction;
    cout<<endl;
    int i=0;
    switch (direction)
    {
    case 1:
        while(i<count){
            cout<<symbol<<endl;
            i++;
        }
        break;
    
    case 2:
        while(i<count){
            cout<<symbol;
            i++;
        }
        break;
    default:
        cout<<"Неверный тип линии";
        break;
    }
    return 0;
}