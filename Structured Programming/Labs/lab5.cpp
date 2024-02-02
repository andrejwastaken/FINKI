#include <iostream>
using namespace std;

// 1
//int reverse(int number){
//        int palindrom=0;
//        while(number){
//            palindrom=palindrom*10+number%10;
//            number/=10;
//        }
//        return palindrom;
//    }
//    bool isPalindrom(int number){
//        if(reverse(number)==number)
//            return true;
//        else
//            return false;
//    }
//    int findLargest(int start, int end){
//        int najgolem = start;
//        int maks = 0;
//        for(int i = start; i<=end;i++){
//            if(najgolem < end && isPalindrom(i))
//                maks = reverse(i);
//        }
//        return maks;
//    }
//    int main() {
//        int a, b;
//        cin>>a>>b;
//        cout<<findLargest(a,b);
//    }
// 2
//int absD(int a, int b, int c){
//    int aminb=a-b;
//    int bminc=b-c;
//    if(aminb<0)
//        aminb*=(-1);
//    if(bminc<0)
//        bminc*=(-1);
//    int d = aminb+bminc;
//    return d;
//
//}
//int main() {
//    int n;
//    cin>>n;
//    int a, b, c;
//    cin>>a>>b>>c;
//    int min=absD(a,b,c);
//    for(int i = 0; i<n-1;i++){
//        cin>>a>>b>>c;
//        int d = absD(a,b,c);
//        if(min > d)
//            min = d;
//    }
//    cout<<min;
//}
// 3
//void appears(int first, int second){
//    int tempbrCifri = first;
//    int cifrinaA=0;
//    int br=0;
//    while(tempbrCifri){
//        cifrinaA++;
//        tempbrCifri/=10;
//    }
//    while(first){
//        int cifraA = first%10;
//        int cifraB;
//        int temp = second;
//        while(temp){
//            cifraB = temp%10;
//            if(cifraA==cifraB){
//                br++;
//                break;}
//            temp/=10;
//        }
//        first/=10;
//    }
//    if(br==cifrinaA)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//}
//int main() {
//    int a, b, n;
//    cin>>n;
//    for(int i = 0; i<n;i++){
//        cin>>a>>b;
//        appears(a,b);
//    }
//}
