#include<iostream>
using namespace std;
int main(){
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;

    for(int i = 0; i<5; i++){
            cout << p+i <<" " <<p[i] <<" " <<*(p+i) <<endl;
            //cout << a+i <<" " <<a[i] <<" " <<*(a+i) <<endl;
    }
    //printf("%d\n", a);
    printf("%p  %d\n", a+2, a[2]);

    return 0;
}
