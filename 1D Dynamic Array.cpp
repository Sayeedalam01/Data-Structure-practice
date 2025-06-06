#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //int *a = new int[n];//dynamic memory from heap //high size array
    //int a[n];
    int *a = (int*)malloc(sizeof(int)*n);//dynamic memory from heap

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    for(int i = 0; i<n; i++){
        cout << a[i] <<" ";
    }
return 0;
}
