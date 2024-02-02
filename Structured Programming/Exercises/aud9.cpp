#include <iostream>
using namespace std;
//1
//int zbirK(int k){
//    if(k==1) return 1;
//    else
//        return k+zbirK(k-1);
//}
//int fact(int n){
//    if(n==1) return 1;
//    return n* fact(n-1);
//}
//int rez(int n){
//    if(n==1) return 1;
//   return fact(zbirK(n)) + rez(n-1);
//}
//2
//void count_down(int n){
//    if(n==0) return;
//    cout<<n<<" ";
//    count_down(n-1);
//}
//void count_up(int n){
//    if(n==0) return;
//    count_up(n-1);
//    cout<<n<<" ";
//}
// 3
//bool prost(int n, int i){
//    if(n%i==0) {
//        if(n==i)return true;
//        return false;
//    }
//    if(i*i>n)return true;
//    return prost(n, i+1);
//}
//bool prost(int n){
//    return prost(n, 2);
//}
//int razlikaDoPogolemProstBroj(int n){
//    if(prost(n+1)){
//        return 1;
//    }
//    else{
//        return 1+ razlikaDoPogolemProstBroj(n+1);
//    }
//}
// 5
//float x(int n){
//    if(n==1)
//        return 1;
//    if(n==2)
//        return 2;
//    return (n-1)*x(n-1)/n+x(n-2)/n;
//}
//5
//int zbir(int n){
//    if(n==0)
//        return 0;
//    return n%10+zbir(n/10);
//}
//6
//int broi8ci(int broj) {
//    if (broj == 0)return 0;
//    int b = broj%10==8;
//    int duplo = b&&(broj/10%10);
//    return b + duplo+ broi8ci(broj / 10);
//}
//7
//    int nzd(int a, int b){
//        if(a%b==0) return b;
//        return nzd(b, a%b);
//    }
// 8
//    int zbirNaElementi(int arr[], int n){
//        if(n==1) return arr[0];
//        return zbirNaElementi(arr, n-1)+arr[n-1];
//    }
// za doma 1: kako bez NZD?
//int nzd(int a, int b){
//    if(a%b==0) return b;
//    return nzd(b, a%b);
//}
//int NZS(int arr[], int b){
//
//}
// 2:
//int najgolem(int arr[], int size){
//    int maks = arr[0];
//    if(size==1)
//        return arr[0];
//    if(maks<najgolem(arr+1,size-1)){
//        maks = najgolem(arr+1, size-1);
//    }
//    return maks;
//}
int main(){
    int n;
    cin>>n;
// 1   cout<<rez(n);
// 2
//    count_down(n);
//    count_up(n);
// 3 razlikaDoPogolemProstBroj(n);
// 4 cout<<x(n);
// 5 cout<<zbir(n);
// 6 cout<<broi8ci(n);
// 7 cout<<nzd(10, 2);
// 8 cout<<zbirNaElementi(int arr[], n);
// za doma:
//1
// int arr[n];
// NZS(arr, n);
//2
//    int arr[n];
//    for(int i = 0; i<n;i++)
//        cin>>arr[i];
//   cout<< najgolem(arr, n);
}