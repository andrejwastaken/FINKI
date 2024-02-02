#include <iostream>
using namespace std;

// 2
//int sumaNeparni(int arr[], int m){
//    if(m<0) return 0;
//    if(arr[m]%2) return arr[m] + sumaNeparni(arr, m-1);
//    else return (sumaNeparni(arr, m-1));
//}
// 3
//int isInteresting(int number){
//   bool result = false;
//   bool flag;
//   int i = number/10;
//   if((number%10)%2)
//       flag = true;
//   else flag = false;
//   for(; i>0; i/=10){
//       int cifra = i%10;
//       if(flag){
//           if(cifra%2) break;
//       }
//       if(!flag){
//           if(cifra%2==0)
//               break;
//       }
//       flag = !flag;
//   }
//   if(i==0)
//       result = true;
//   return result;
//}
//void printArray(int arr[], int n){
//    if(n==0) return;
//    printArray(arr,n-1);
//    if(isInteresting(arr[n-1]))
//        cout<<arr[n-1]<<endl;
//}
int main() {
    //1
//   int m;
//   cin>>m;
//    int arr[m];
//    for(int i = 0; i<m; i++)
//        cin>>arr[i];
//    int n;
//    cin>>n;
//    int arr2[n];
//    for(int i = 0; i<n; i++)
//        cin>>arr2[i];
//    int arrFinalna[n+m];
//    int i = 0, j = 0, k = 0;
//    while (i < m && j < n) {
//        if (arr[i] < arr2[j]) {
//            arrFinalna[k] = arr[i];
//            k++;
//            i++;
//        } else {
//            arrFinalna[k] = arr2[j];
//            k++;
//            j++;
//        }
//    }
//    while (i < m) {
//        arrFinalna[k] = arr[i];
//        k++;
//        i++;
//    }
//    while (j < n) {
//        arrFinalna[k] = arr2[j];
//        k++;
//        j++;
//    }
//    for(int i = 0; i<n+m;i++)
//        cout<<arrFinalna[i]<<" ";
 //2   cout<<sumaNeparni(arr, m-1);
// 3
//    printArray(arr, m);

}
