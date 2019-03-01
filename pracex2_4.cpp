#include <iostream>
#include <cmath>

using namespace std;

double sg(double x,double y);

//Write prototype of  sg() here.

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}
double sg(double x,double y){
    double max,min;
    if(x>y){
        max = x;
        min = y;
    }
    else{
        max = y;
        min = x;
    }
    if(x <= 0 || y <= 0){
        return 0;
    }
    if(max/min <= 10){
        return pow((x*y),0.5);
    }
    else{
        return (sg(x,pow((x*y),0.5)))+(sg(y,pow((x*y),0.5)));
    }

}
//Write function definition of  sg() here.
