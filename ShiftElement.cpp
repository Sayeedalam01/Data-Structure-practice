#include <iostream>
using namespace std;
void printList(int *p, int n){
    for(int i = 0; i<n; i++){
        cout <<p[i] <<" ";
    }
    cout <<endl;
}
int *leftShift(int *p, int n, int k){ // or p[]
    int *a1 = new int[n];
    for(int j = 0; j<k; j++){
        for(int i = 1; i<5; i++){
            a1[i-2] = p[i];
        }
    }
    //for(int i = 0; i>k; i--){
    //    a1[i]
    //}
    return a1;
}
int main(){
    int a[5] = {10, 20, 30, 40, 50};
    printList(a,5);
    int *m = leftShift(a,5,2);
    printList(m,5);

return 0;
}
