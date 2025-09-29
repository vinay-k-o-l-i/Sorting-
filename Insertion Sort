#include<iostream>
using namespace std;

int inser(int arr[], int n) {
    int i = 1;
    while (i < n) {
        for (int j = i - 1; j >= 0; j--) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i--;
            } 
            else 
            {
                break;
            }
        }
        i++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    inser(arr, n);
    return 0;
}
