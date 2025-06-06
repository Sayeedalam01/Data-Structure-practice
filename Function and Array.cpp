#include<iostream>
using namespace std;
void printList(int *p, int n){
    for(int i = 0; i<n; i++){
        cout <<p[i] <<" ";
    }
    cout <<endl;
}
int *makeDouble(int *p, int n){ // or p[]
    int *a1 = new int[n];
    for(int i = 0; i<n; i++){
        a1[i] = p[i]*2;
        //cout<<p[i]*2 <<" ";
    }
    return a1;
}
int main(){
    int a[5] = {10,20,30,40,50};
    printList(a,5);

    int *m = makeDouble(a,5); // name of array is pointer
    printList(m,5);
    return 0;
}
