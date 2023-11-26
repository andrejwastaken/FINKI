#include <iostream>
//1 #include <iomanip>
using namespace std;
//1
//#define pi 3.1415;
//double perimeter (double r){
//    return 2*r*pi;
//}
//double plostina (double r){
//    return r*r*pi;
//}
//double dijametar(double r){
//    return 2*r;
//}
//int main(){
//    double radius, D, Pl, P;
//    cin>>radius;
//    D = dijametar(radius);
//    P = perimeter(radius);
//    Pl = plostina(radius);
//    cout << fixed << setprecision(2)<<D<<endl;
//    cout << fixed << setprecision(2)<<P<<endl;
//    cout << fixed << setprecision(2)<<Pl<<endl;
//2
//int sumadva(int n){
//    return n%100+n/100;
//}
//int main(){
//    int brojac=0;
//    for (int i = 1000;i<=9999;i++){
//        if(i%sumadva(i)==0){
//            cout<<i<<endl;
//            brojac++;
//        }
//    }
//    cout<<brojac;
//}
//3
//bool prost(int a) {
//    if (a == 1)
//        return false;
//    for (int broj = 2; broj*broj <= a; broj++){
//        if (a % broj == 0) {
//            return false;
//        }
//    }
//        return true;
//}
//
//int najdiRazlika(int n) {
//    int razlika=0;
//    for(int i = n+1; true; i++){
//        if(prost(i)) {
//            razlika = i-n;
//            break;
//        }
//    }
//    return razlika;
//}
//int main(){
//    int n;
//    cin>>n;
//    int razlika = najdiRazlika(n);
//    cout<<razlika;
//}
//4
//bool prost(int a) {
//    if (a == 1)
//        return false;
//    for (int broj = 2; broj*broj <= a; broj++){
//        if (a % broj == 0) {
//            return false;
//        }
//    }
//        return true;
//}
//
//int zbirNaCifri(int n) {
//    int rezultat=0;
//    while(n>0){
//        rezultat+=n%10;
//        n/=10;
//    }
//    return rezultat;
//}
//int main(){
//    int rezultat = 0;
//   for(int i = 2; i<=9999;i++){
//       if(prost(i)&& prost(zbirNaCifri(i))){
//           cout<<i<<" ";
//           rezultat++;
//       }
//   }
//   cout<<endl;
//   cout<<rezultat;
//}
// 5
// int prost(int n){
//    for(int i = 2; i*i<=n;i++){
//        if(n%i==0)
//                return false;
//        }
//    return true;
//}
//int main(){
//int brojac=0;
//    for(int i = 1; i<998;i++){
//        if(prost(i)&&prost(i+2)){
//            cout<<i<<" "<<i+2<<endl;
//            brojac++;
//        }
//    }
//    cout<<brojac;
//}
// 6
// int najdi_zbir(int a){
//    int rezultat = 0;
//    for(int i = 1 ; i <= a ; i ++ ){
//        rezultat += i;
//    }
//    return rezultat;
//}
//int faktoriel(int a){
//    int rezultat = 1;
//    for (int i = 1; i <= a; i++) {
//        rezultat *= i;
//    }
//    return rezultat;
//}
//int main(){
//    int n;
//    cin>>n;
//    int zbir = 0;
//    for(int i = 1 ; i <= n ; i ++){
//        int zbir_1_i = najdi_zbir(i);
//        int fakt = faktoriel(zbir_1_i);
//        cout << zbir_1_i<<"!";
//        if(i==n)cout <<" = ";
//        else cout<<" + ";
//        zbir += fakt;
//    }
//    cout<<zbir;
//}
