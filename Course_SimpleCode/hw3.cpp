#include <iostream>
using namespace std;

int main() {
    int a,b,operation;
    cout<<"Enter a, b: ";
    cin >> a >> b;
    cout<<endl;
    cout<<"Enter operation: 1) + 2) - 3) * 4) % 5) / : ";
    cin>>operation;
    switch(operation)
    {
        case 1:
            cout<<a+b<<endl;
            break;
        case 2:
            cout<<a-b<<endl;
            break;
        case 3:
            cout<<a*b<<endl;
            break;
        case 4:
            cout<<a%b<<endl;
            break;
        case 5:
            cout<<(float)a/b<<endl;
            break;
    }
    return 0;
}