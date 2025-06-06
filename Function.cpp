#include<iostream>
using namespace std;
int add(int x, int y){
    return x + y;
}

double f(double x){
    return x*2;
}
int main(){
    int result = add(10, 20);
    cout << result <<endl;
    cout << f(4.3);
return 0;
}
