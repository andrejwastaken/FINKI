#include <iostream>
#include <string>
using namespace std;

int main(){
//  1  int x,brnax=0,brnab=0,temp=0;
//    cin>>x;
//    while(x>0){
//        brnax++;
//        x/=10;
//
//    }
//    int b;
//    while(cin>>b){
//        temp=b;
//        while(temp){
//            brnab++;
//            temp/=10;
//        }
//        if(brnax==brnab)
//            cout<<b<<endl;
//        brnab=0;
//    }
// 2   int a, b;
//    cin >> a >> b;
//    int suma = 0;
//    for (int i = a+1; i<b;i++){
//        if(!(i%3)&&(i%2))
//            suma+=i;
//    }
//    cout <<suma;
// 2   int min, br1,br2;
//    cin >> min;
//    cin >> br1>>br2;
//    double cena=1;
//    int op1,op2;
//    if(br1/1000000==71||br1/1000000==72||br1/1000000==73)
//        op1=1;
//    else
//        op1=0;
//    if(br2/1000000==71||br2/1000000==72||br2/1000000==73)
//        op2=1;
//    else
//        op2=0;
//    if(min<=30) {
//        cena = 3 * min;
//        if(op1==op2)
//            cena = cena - cena*0.3;
//    }
//    else{
//        cena = 3*30+(min-30)*2;
//        if(op1==op2)
//            cena = cena - cena*0.3;
//    }
//    cout << cena;
// 3   int bileti = 800, voda = 80, FCS=100, IT=120,pS=100, pM=150, pL=200, brPij=0,brPuk=0;
//    int cenaP=0, cenaS=0, cena=0, cenaB;
//    string tip, den, pijalok;
//    bool visa;
//    char golPuk;
//    cin >> tip >> golPuk >> brPuk >> pijalok >> brPij >> den >> visa;
//    if(tip == "comedy")
//        bileti+=80;
//    else if(tip == "action")
//        bileti+=160;
//    else if(tip=="romance")
//        bileti+=120;
//    if(golPuk=='S')
//        cenaP=pS*brPuk;
//    else if(golPuk=='M')
//        cenaP=pM*brPuk;
//    else if(golPuk=='L')
//        cenaP=pL*brPuk;
//    if(pijalok== "Coca Cola"||pijalok== "Fanta"||pijalok== "Sprite")
//        cenaS=FCS*brPij;
//    else if (pijalok=="Ice Tea")
//        cenaS = IT*brPij;
//    else
//        cenaS=voda*brPij;
//    if (den == "Wednesday" && visa == 1)
//        bileti = bileti - bileti * 0.5;
//    cena=bileti+cenaP+cenaS;
//    cout <<cena;
}