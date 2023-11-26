#include <iostream>
#include <valarray>

using namespace std;
int main() {
// 1   float x, y;
//    cin >> x >> y;
//    if (x > 0)
//        if (y > 0)
//            cout << 1;
//        else if (y < 0)
//            cout << 4;
//        else
//            cout << "+X";
//    else if(x<0)
//        if(y>0)
//            cout<<2;
//        else if(y<0)
//            cout <<3;
//        else
//            cout <<"-X";
//    else
//        if (y > 0)
//            cout << "+Y";
//        else if (y<0)
//            cout << "-Y";
//        else
//            cout << 0;

// 2   int poeni, ocenka=0;
//    cin >> poeni;
//    if(poeni>90)
//        ocenka=10;
//    else if(poeni>80)
//        ocenka=9;
//    else if(poeni>70)
//        ocenka=8;
//    else if(poeni>60)
//        ocenka=7;
//    else if(poeni>50)
//        ocenka = 6;
//    else ocenka = 5;
//
//    int cifra=poeni%10;;
//    char znak = ' ';
//    if(ocenka!=5)
//        if (cifra >=  1 && cifra <= 3)
//            znak = '-';
//            else if (ocenka != 10 && (cifra >= 8 || cifra == 0))
//                znak = '+';
//    cout << ocenka << znak;

//  3  float a,b,c;
//    cin >> a >> b >> c;
//    if((a+b)<=c||(a+c)<=b||(b+c)<=a)
//        cout << "ne e triag" <<endl;
//    else {
//        if (a == b && b == c)
//            cout << "rs" << endl;
//        else if (a == b || b == c || a == c)
//            cout << "krak" << endl;
//        else
//            cout << "raznostran" << endl;
//    }
//    float p, s;
//    s = (a+b+c)/2;
//    p = s*(s-a)*(s-b)*(s-c);
//    p = sqrt(p);

//4 int kucvoz,covvoz;
//cin >> kucvoz;
//if(kucvoz<0)
//    cout<<0;
//else{
//    if(kucvoz<=2)
//        covvoz=kucvoz*10.5;
//    else
//        covvoz=2*10.5+(kucvoz-2)*4;
//}
//cout << covvoz;

//  5  char c;
//    cin >> c;
//    switch(c){
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//        case 'u':
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U': cout<<"samoglaska";
//        break;
//        case'1':
//        case'2':
//        case'3':
//        case'4':
//        case'5':
//        case'6':
//        case'7':
//        case'8':
//        case'9': cout<<"cifra";
//        break;
//        default:cout<<"drugo";
//    }

// 6   int br1,br2, rez=0;
//    char op;
//    cin >> br1>>op>>br2;
//    switch(op) {
//        case '+':
//            rez = br1 + br2;
//            break;
//        case '-':
//            rez = br1-br2;
//            break;
//        case '/':
//            rez=br1/br2;
//            break;
//        case '*':
//            rez=br1*br2;
//            break;
//            case '%':
//                rez=br1%br2;
//                break;
//        default:cout<<"0";
//    }
//    cout <<br1<<op<<br2 <<"="<<rez;

// Za doma 4.1. Задача 1
//За три внесени отсечки да се одреди дали е можно да се конструира триаголник и притоа дали триаголникот е правоаголен, остроаголен или тапоаголен.
//float a, b, c;
//cin >> a >> b >> c;
//if((a+b)<=c||(a+c)<=b||(b+c)<=a)
//    cout << 1;
//else{
//    if (a >= b) {
//        float tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a >= c) {
//        float tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b >= c) {
//        float tmp = b;
//        b = c;
//        c = tmp;
//    }
//    if (c * c == a * a + b * b) {
//        cout << "Tragolnikot e pravoagolen." << endl;
//    }
//    else{
//        if(c*c>(a*a+b*b))
//            cout<<"tap";
//        else
//            cout<<"ostar";
//    }
//}

//Za doma 4.2. Задача 2 *
//За даден центар на кружница и нејзин радиус да се одреди низ кои квадранти минува кружницата.
//    #include <iostream>
//#include <cmath>
//using namespace std;
//int main(int argc, char *argv[])
//{
//int x, y, r;
//cin >> x >> y >>r;
//bool desno = false;
//bool levo = false;
//bool gore = false;
//bool dolu = false;
//if(x+r>0)
//desno = true;
//if(x-r<0)
//levo = true;
//if(y+r>0)
//gore = true;
//if(y-r<0)
//dolu = true;
//bool kv1 = false,
//kv2 = false,
//kv3 = false,
//kv4 = false;
//if(gore&&desno)
//kv1=true;
//if(gore&&levo)
//kv2=true;
//if(dolu&&levo)
//kv3=true;
//if(dolu&&desno)
//kv4=true;
//bool centar = true;
//if(sqrt(x*x+y*y)<r)
//centar = true;
//if(x>0){
//if(y>0){
//if(centar)
//kv3=true;
//else{
//kv3=false;
//}
//}
//else if(y<0){
//if(centar)
//kv4=true;
//else
//kv4=false;}
//else if(x<0){
//if(y>0){
//if(centar)
//kv1=true;
//else{
//kv1=false;
//}
//}
//else if(y<0){
//if(centar)
//kv2=true;
//else
//kv2=false;
//}
//}
//if(kv1)
//cout<<1<<endl;
//if(kv2)
//cout<<2<<endl;
//if(kv3)
//cout<<3<<endl;
//if(kv4)
//cout<<4<<endl;
//
//}
//}
//    }
//    else{
//        cout << "r_404";
//    }
}