#include <iostream>
#include <cstdlib> // For rand()
#include <ctime> // For time()
using namespace std;
// 1
//void swap (int &a, int &b){
//    int temp = a;
//    a=b;
//    b= temp;
//}
//void inputArray(int arr[], int size){
//    for(int i = 0; i< size; i++)
//        cin>>arr[i];
//}
//void outputArray(int arr[], int size){
//    for(int i = 0; i<size; i++)
//        cout<<arr[i]<<" ";
//    cout<<endl;
//}
//void bubbleSort(int arr[], int size){
//    bool swapped = true;
//    while(swapped) {
//        swapped = false;
//        for (int i = 0; i < size - 1; i++) {
//            if (arr[i] > arr[i + 1]) {
//                swap(arr[i], arr[i + 1]);
//                swapped = true;
//            }
//        }
//    }
//}
//void selectionSort(int arr[], int size){
//    for(int i = 0; i<size;i++){
//        int min_idx=i;
//        for(int j = i + 1; j<size;j++){
//            if(arr[j]<arr[min_idx])
//                min_idx=j;
//        }
//        swap(arr[i],arr[min_idx]);
//    }
//}
//void insertionSort(int arr[], int size){
//    for (int i = 1; i<size;i++){
//        int key = arr[i];
//        int j = i-1;
//        while(j>=0&&arr[j]>key){
//            arr[j+1]=arr[j];
//            j--;
//        }
//        arr[j+1]=key;
//    }
//}
// 2
//int linearSearch(int arr[], int n, int key){
//    int iteraciiL=0;
//    for(int i = 0; i<n;i++)
//    {
//        iteraciiL++;
//        if(arr[i]==key)
//            return i;
//    }
//    return -1;
//}
//int linearSearchIteracii(int arr[], int n, int key){
//    int iteraciiL=0;
//    for(int i = 0; i<n;i++)
//    {
//        iteraciiL++;
//        if(arr[i]==key)
//            return iteraciiL;
//    }
//    return -1;
//}
//int binarySearch(int arr[], int l, int r, int key){
//    int iteraciiB=0;
//    while(l<=r){
//        iteraciiB++;
//        int mid = l+(r-l)/2;
//        if(arr[mid]==key)
//            return mid;
//        else if(arr[mid]<key)
//            l=mid+1;
//        else
//            r=mid-1;
//    }
//    return -1;
//}
//int binarySearchIteracii(int arr[], int l, int r, int key){
//    int iteraciiB=0;
//    while(l<=r){
//        iteraciiB++;
//        int mid = l+(r-l)/2;
//        if(arr[mid]==key)
//            return iteraciiB;
//        else if(arr[mid]<key)
//            l=mid+1;
//        else
//            r=mid-1;
//    }
//    return -1;
//}
//3
//void transformiraj(int arr[], int n){
//    int b[n];
//    for(int i = 0; i<n;i++){
//        b[i]=arr[i]+arr[n-1-i];
//    }
//    for(int i = 0; i<n;i++) {
//        arr[i] = b[i];
//    }
//// so edna niza
//int zbir = 0;
//    for(int i = 0, j=n-1; i<=j; i++, j--){
//        zbir=arr[i]+arr[j];
//        arr[i] = zbir;
//        arr[j]=zbir;
//
//    }
//}
//int main() {
    // 1
//    int size;
//    cin >> size;
//    int array[size];
//    inputArray(array, size);
//    outputArray(array, size);
//    bubbleSort(array, size);
//    outputArray(array, size);
//    selectionSort(array, size);
//    outputArray(array, size);
//    insertionSort(array, size);
//    outputArray(array, size);
//2 zosto mi vraka error na srand Process finished with exit code -1073741571 (0xC00000FD)
//    int arr[100001];
//    for (int i = 0; i < 100001; i++) {
//        arr[i] = i + 1;
//    }
//    srand(time(NULL));
//    int randomNum = 1 + rand() % 1000000;
//    int linearSearchIndex = linearSearch(arr, 1000001, randomNum);
//    cout << linearSearchIndex << endl;
//    int binarySearchIndex = binarySearch(arr, 0, 1000000, randomNum);
//    cout << binarySearchIndex << endl;
//    int linearSearchIteraciiBroj = linearSearchIteracii(arr, 1000001, randomNum);
//    cout << linearSearchIteraciiBroj << endl;
//    int binarySearchIteraciiBroj = binarySearchIteracii(arr, 0, 1000000, randomNum);
//    cout << binarySearchIteraciiBroj << endl;
//    double odnos = (double) binarySearchIteraciiBroj / linearSearchIteraciiBroj;
//    cout << odnos;
//3
//    transformiraj(arr, n);
//}