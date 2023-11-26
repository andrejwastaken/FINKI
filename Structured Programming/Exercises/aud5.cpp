#include <iostream>
using namespace std;

int main() {
//    int suma = 0;
//    for(int i = 10;i<100;i+=2){
//  1      suma+=i;
//    }
//    cout<<suma;
//    int suma = 0;
// 2   for(int i = 11;i<100;i+=2){
//        suma+=i;
//    }
//    cout<<suma;
//    int p=1;
//    float x;
// 3   int n;
//    cin>>x>>n;
//    for(int i = 0; i<n;i++){
//        p*=x;
//    }
//    cout << p;

//    int n,i,x;
//    int d,o1,o2;
// 4   i=d=o1=o2=0;
//    cin>>n;
//    while(i<n){
//        cin>>x;
//        if(x%3==0)d++;
//        else if(x%3==1)o1++;
//        else o2++;
//        i++;
//    }
//    cout<<d<<o1<<o2;

//    for(int i = 1000; i<=9999;i++){
// 5       if(i/1000==(i%10+i%100/10+i/100%10))
//            cout<<i<<" ";
//    }
//int s,e,suma,t;
//cin >> s >> e;
//    for(int i = s; i<=e;i++){
//        t=i;
//        suma=0;
//       while(t>9){
//           suma+=t%10;//sum++ mesto suma+= broi cifri kolku cifri ima brojot bi bilo while(t); sum=1, sum*=t%10;
//           t/=10;
//       }
//        if(t==suma){
//            cout<<i<<" ";
//        }
//    }

//  6  int n, max;
//    while(cin >> n){
//        if(n>max){
//            max=n;
//        }
//        cout<<max<<endl;
//    }
//  7   int n, maks;
//    bool pomalOd100=false;
//        while(cin>>n){
//            if(n>100)continue;
//            if(pomalOd100) {
//                maks = n;
//                pomalOd100 = true;
//            }
//            if(n>maks){
//                maks=n;
//            }
//        }
//        if(!pomalOd100)
//            cout<<"Nema";
//        else cout<<maks;
// 8    int n;
//    int najgolem, vtor;
//    if(!(cin >> najgolem >> vtor)) {
//        cout<<"Ne se vneseni 2";
//        return 0;
//    }
//    if(najgolem<vtor){
//        int temp = vtor;
//        vtor=najgolem;
//        najgolem=temp;
//    }
//    while(cin>>n){
//        if(n>najgolem){
//            vtor = najgolem;
//            najgolem = n;
//        }else if(n>vtor){
//            vtor = n;
//        }
//    }
//    cout<<najgolem<<" "<<vtor;
//    }
// 9   int n, razlika=0,sumPar=0,sumNepar=0;
//    cin >> n;
//    int broj;
//    for(int i = 1; i<=n;i++){
//        cin>>broj;
//        if(i%2)
//            sumNepar+=broj;
//        else if(!i%2)
//           sumPar+=broj;
//    }
//    razlika=sumPar-sumNepar;
//    if(razlika<10){
//        cout<<"slicni";
//    }
//    else
//    cout << "mnogu";
//  10  int a, b, poz, optimalna_pozicija=1;
//    cin >> a >>b;
//    int maks = a+b;
//    poz=1;
//    while(!(a<0&&b<0)){
//        if(a+b>maks){
//            maks=a+b;
//            optimalna_pozicija=poz;
//            }
//        int e;
//        cin>>e;
//        poz++;
//        a = b;
//        b = e;
//    }
//    cout <<maks << " " << optimalna_pozicija;
//    int n;
//    cin >>n;
//    for(int i = 0; i< n;i++){
//        int broj;
//        cin>>broj;
//        int ostatok = broj%5;
//        if(!ostatok)
//            cout << "-----";
//        else if(ostatok==1)
//            cout<<".----";
//        else if(ostatok==2)
//            cout<<"..---";
//        else if(ostatok==3)
//            cout<<"...--";
//        else
//          cout<<"....-";
//    int n;
//    cin>>n;
//    for(int i = 1; i<=n;i++){
//        for(int j = 1; j<=i;j++){
//            cout<<j;
//              }
//        cout<<endl;
//        for(int j = i; j>0;j--){
//            cout<<j;
//    }
//        cout<<endl;
//    }
//    int b,brnacifri=0;
//    cin>>b;
//    for(int p=b;p>0;p/=10){
//        brnacifri++;
//    }
//    int n, tmp,broj;
//    cin >> n;
//    int min = -1;
//    for(int i = 0; i<n;i++){
//        cin >> broj;
//        tmp=broj;
//        while(tmp>9){
//        if(tmp%10>=(tmp/10%10))break;
//        tmp/=10;
//        }
//        if(tmp<10){
//            cout<<broj<<endl;
//            if(min==-1||broj<min)
//                min=broj;
//        }
//    }
//    cout<<min;
}

