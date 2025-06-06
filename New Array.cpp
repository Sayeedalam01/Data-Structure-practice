#include<iostream>
using namespace std;
void printList(int *p, int n){
    for(int i = 0; i<n; i++){
        cout <<p[i] <<" ";
    }
    cout <<endl;
}
int *sum(int *p, int *q, int n){ // or p[]
    int *a1 = new int[n];
    for(int i = 0; i<n; i++){
        a1[i] = p[i] + q[i];
    }
    return a1;
}
int main(){
    int a[5] = {10,20,30,40,50};
    int b[5] = {60, 70, 80, 90, 100};

    int *m = sum(a,b,5); // name of array is pointer
    printList(a,5);
    printList(b,5);
    cout << endl;
    printList(m,5);

    return 0;

}

