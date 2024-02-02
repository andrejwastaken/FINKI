#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
 //1
//int zbir(int n){
//    if(n==0)
//        return 0;
//    if(n%10<5)
//        return n%10 + zbir(n/10);
//    else
//         return zbir(n/10);
//}
//3
//bool eKvadrat(int n){
//    int koren = sqrt(n);
//    return koren * koren == n;
//}
int main() {
    //1
//    int n;
//    cin>>n;
//    int arr[n];
//    int maks = 0, maksIndeks=0;
//    for(int i = 0; i<n; i++){
//        cin>>arr[i];
//        if(zbir(arr[i])>maks){
//            maks = zbir(arr[i]);
//            maksIndeks=i;
//        }
//    }
//    cout<<arr[maksIndeks]<<endl;
//2
//int maks=80;
//char str1[maks+1];
//char str2[maks+1];
//cin.getline(str1, maks+1);
//cin.getline(str2, maks+1);
//char str3[maks+1];
//for(int i = 0; i<strlen(str1);i++){
//    if(str1[i]==str2[i])
//        str3[i]='=';
//    else {
//        bool flag = false;
//        if(strchr(str2, str1[i])){
//                str3[i] = '+';
//                flag = true;
//            }
//        if(!flag){
//            str3[i]='-';
//        }
//        }
//    }
//    str3[strlen(str1)]='\0';
//    cout<<str3<<endl;
//3
//int kvadrat;
//cin>>kvadrat;
//int arr[kvadrat][kvadrat];
//for(int i = 0; i<kvadrat; i++){
//    for(int j = 0; j<kvadrat; j++)
//        cin>>arr[i][j];
//}
//int glavna, sporedna;
//bool flag = true;
//for(int i = 0; i<kvadrat; i++){
//        for(int j = 0; j<kvadrat; j++){
//            if(i==j)
//                glavna = arr[i][j];
//            if(i+j==kvadrat-1)
//                sporedna = arr[i][j];
//        }
//        int suma = glavna + sporedna;
//        if(!eKvadrat(suma)){
//            flag = false;
//            break;
//        }
//    }
//    for(int i = 0; i<kvadrat; i++){
//        for(int j = 0; j<kvadrat; j++)
//            cout<<arr[i][j]<<" ";
//        cout<<endl;
//    }
//    if(flag)
//        cout<<"DA"<<endl;
//    else
//        cout<<"Ne"<<endl;
}
