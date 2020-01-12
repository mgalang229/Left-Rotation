#include <iostream>
using namespace std;

int main(){

    int arr[100], n, d, temp;

    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < d; i++){
        for(int j = 0; j < n-1; j++){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
