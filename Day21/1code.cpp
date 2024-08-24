#include<iostream>
#include<vector>
using namespace std; 

void MergeFunction(vector<int> &arr, int si, int mid, int ei) {
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }
    while (j <= ei) {
        temp.push_back(arr[j++]);
    }
    for (int idx = si, x = 0; idx <= ei; idx++) {
        arr[idx] = temp[x++];
    }
}

void MergeSort(vector<int> &arr, int si, int ei) {
    if (si >= ei) {
        return;
    }
    int mid = si + (ei - si) / 2;
    MergeSort(arr, si, mid);
    MergeSort(arr, mid + 1, ei);

    MergeFunction(arr, si, mid, ei);
}

int main() {
    cout << "Merge Sort" << endl;
    vector<int> arr = {6, 3, 7, 5, 2, 4};
    
    cout << "Unsorted Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    MergeSort(arr, 0, arr.size() - 1);
    
    cout << "Sorted Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0; 
}
