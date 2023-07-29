#include <iostream>
#include<math.h>
using namespace std;
 int main()
{
    char op;
    int v1,v2;
    int a,s,d,m,p,r;
    cout<<"Enter yor no.s\n";
    cin >> v1 >> v2;
    cout<<"Enter an operator out of \n+ Addition\n- for Subraction\n* for Multiplication\n/ for Division\n^ for Power\n"<<"% for remainder \n";
    cin>>op;
    switch (op)
    {       
            case '+':
            a=v1 +v2;
            cout<<v1<<"+"<<v2<<"="<<a;
            break;
           case '-':
            s= v1 - v2;
            cout<<v1<<"-"<<v2<<"="<<s;
            break;
             case '*':
            m= v1 * v2;
            cout<<v1<<"*"<<v2<<"="<<m;
            break;
             case '/':
            d= v1/ v2;
            cout<<v1<<"/"<<v2<<"="<<d;
            break;
            case '^':
            p=pow(v1,v2);
            cout<<v1<<"^"<<v2<<"="<<p;
            break;
            case '%':
            r=v1%v2;
            cout<<v1<<"%"<<v2<<"="<<r;
            break;
            cout<<"\n";
            default:
            cout << "Error! operator is not correct";
            cout<<"\n";
            }
    
    return 0;
}

