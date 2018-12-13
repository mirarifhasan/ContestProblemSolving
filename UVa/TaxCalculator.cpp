//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3764

#include<bits/stdc++.h>
using namespace std;

long long income, tax2;
double tax;

void taxCalculator()
{
    tax = 0.0;

    if(income <= 180000){
        income = -1;
        tax = 0.0;
    }

    if(income > 180000){
        income = income-180000;
        if(income<=300000){
            tax += income*0.1;
            income = -1;
        }
        else{
            income -= 300000;
            tax += 300000*0.1;
        }
    }

    if(income > 0){
        if(income<=400000){
            tax += income*0.15;
            income = -1;
        }
        else{
            income -= 400000;
            tax += 400000*0.15;
        }
    }

    if(income > 0){
        if (income<=300000){
            tax += income*0.20;
            income = -1;
        }
        else{
            income -= 300000;
            tax += 300000*0.20;
        }
    }

    if(income > 0){
        tax += income*0.25;
    }

    if(tax>0 && 2000>tax)
        tax = 2000;
    tax2 = ceil(tax);

}


int main()
{
    int t, i=0;
    cin>>t;

    while(t--)
    {
        cin>>income;
        taxCalculator();
        cout<<"Case "<<++i<<": "<<tax2<<endl;
    }
    return 0;
}
