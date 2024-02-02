#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
//3
//bool Palindrom(char *array, int start, int end){
//    while(start!=end){
//        if(array[start++]!=array[end--])
//            return false;
//    }
//    return true;
//}
//bool palindrom(char *array, int length){
//    int start = 0, end = length-1;
//    return Palindrom(array, start, end);
//}
int main() {
//1
    char s[300];
// 1 i 2    cin.getline(s, 300);
//for(int i = 0; s[i]!='\0';i++){
//    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
//       s[i] = toupper(s[i]);
//    else
//       s[i] = tolower(s[i]);
//}
//cout<<s;
//2
//    char c;
//    cin >> c;
//    int indeks1;
//    for (int i = 0; s[i] != '\0'; i++) {
//        if ((tolower(s[i])) == c){
//            indeks1 = i;
//            break;}
//    }
//    int indeks2;
//    for (int i = strlen(s); i >= 0; i--) {
//        if ((tolower(s[i])) == c){
//            indeks2 = i;
//            break;
//        }
//    }
//    for (int i = indeks1; i<=indeks2; i++) {
//        cout<<s[i];
//    }
//3
//while(cin.getline(s, 100)&&strlen(s)>0){
//    int len = strlen(s);
//    int start = 0, brojPalindromi=0;
//    for(int i = 0; i<=len;i++) {
//        if(s[i]==' '||s[i]=='\0'){
//            if(i>start&& palindrom(s+ start, i-start))
//                brojPalindromi++;
//            start=i+1;
//        }
//    }
//    cout<<brojPalindromi;
//}
}

