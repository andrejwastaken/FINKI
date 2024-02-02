#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

//1
//int count_char(char str[], char c){
//    int vk=0;
//    for(int i = 0; str[i]!='\0'; i++)
//        if(str[i]==c)
//            vk++;
//    return vk;
//}
//2
//int length(char s[]){
//    int len = 0;
//    for(int i = 0; s[i]!='\0'; i++)
//        len++;
//    if(s[len-1]=='\n')
//        len--;
//    return len;
//}
//int length_r(char *s){
//    if(*s=='\0')
//        return 0;
//    if(*s=='\n'&& *(s+1)=='\0')
//        return 0;
//    return 1 + length_r(s+1);
//}
//4
//int podstring(char *s1, char *s2){
//int d1= strlen(s1);
//int d2=strlen(s2);
//if(d1>d2)
//    return 0;
//for(int i = 0; i<=d2-1; i++)
//    if(strncmp(s1, s2+i, d1)==0)
//        return 1;
//return 0;
//}
//5
//int palindrom(char str[]){
//    int n = strlen(str);
//    for(int i = 0; i<n/2;i++)
//        if(str[i]!=str[n-1-i])
//            return 0;
//    return 1;
//}
//int palindrom_rekurzija(char str[], int start, int end){
//    if(start>=end)
//        return 1;
//    if(str[start]==str[end])
//        return palindrom_rekurzija(str, start+1, end-1);
//    return 0;
//}
//6
//int validna_lozinka(char str[]){
//    int bukvi = 0, cifra=0, spec=0;
//    for(int i = 0; str[i]!='\0';i++){
//        if(isalpha(str[i]))
//            bukvi++;
//        else if(isdigit(str[i]))
//            cifra++;
//        else
//            spec++;
//    }
//    return(bukvi>0&&cifra>0&&spec>0);
//}
//7
//void filter(char str[]){
//    int i = 0, j = 0;
//    while(str[i]!='\0'){
//        if(isalpha(str[i])){
//            if(islower(str[i]))
//                str[j]= toupper(str[i]);
//            else if(isupper(str[i]))
//                str[j]= tolower(str[i]);
//            j++;
//        }
//        i++;
//    }
//    str[j]='\0';
//}
//8
//void trim(char s[]){
//    int spaces = 0;
//    while(isspace(s[spaces])){
//        spaces++;
//    }
//    int i;
//    for(i = 0; s[i+spaces]!='\0';i++){
//        s[i]=s[i+spaces];
//    }
//    s[i]='\0';
//    while(i>0&& isspace(s[i-1])){
//        i--;
//        s[i]='\0';
//    }
//}
//za doma
//bool palindrom(char s[]){
//    int start = 0;
//    int end = strlen(s)-1;
//    while(start<end){
//        while(start<end&&!isalnum(s[start]))
//            start++;
//        while(start<end&&!isalnum(s[end]))
//            end--;
//        if(tolower(s[start])!= tolower(s[end]))
//            return false;
//        start++;
//        end--;
//    }
//    return true;
//}
int main() {
int max = 100;
char s[max];
cin.getline(s, max);
//1
//cin>>c;
//cout<<count_char(s,c);
//2
//cout<< length(s)<<" "<<length_r(s);
//3
//int poz, dolzina;
//char dest[max];
//int len = strlen(s);
//if(len&&s[len-1]=='\n'){
//    s[len-1]='\0';
//    len--;
//}
//cin>>poz>>dolzina;
//if(poz<=len){
//    strncpy(dest, s+poz,dolzina);
//    dest[dolzina]='\0';
//    cout<<dest<<endl;
//}
//else{
//    cout<<strlen(s);
//}
//4
//char s2[max];
//fgets(s2, max, stdin);
//int len1 = strlen(s);
//int len2 = strlen(s2);
//if(len1&&s[len1-1]=='\n'){
//    s[len1-1]='\0';
//    len1--;
//}
//if(len2&&s2[len2-1]=='\n'){
//    s[len2-1]='\0';
//    len2--;
//}
//if(podstring(s, s2))
//    cout<<"DA"<<endl;
//else
//    cout<<"Ne";
//5
//int len = strlen(s);
//if(len&&s[len-1]=='\n'){
//    s[len-1]='\0';
//    len--;
//}
//cout<<s<<" ";
//if(palindrom_rekurzija(s, 0, strlen(s)-1))
//    cout<<"e palindrom";
//else
//    cout<<"ne e ";
//6
//int len = strlen(s);
//if (len && s[len - 1] == '\n') {
//        s[len - 1] = '\0';
//        len--;
//    }
//cout<<s<<" ";
//if(validna_lozinka(s))
//    cout<<"e";
//else
//    cout<<"ne e";
//7
//int len = strlen(s);
//if(len&&s[len-1]=='\n'){
//    s[len-1]='\0';
//    len--;
//}
//filter(s);
//cout<<s<<endl;
//8
//trim(s);
//cout<<s;
//za doma:
//int len = strlen(s);
//if(len&&s[len-1]=='\n'){
//    s[len-1]='\0';
//    len--;
//}
//if(palindrom(s))
//    cout<<"Da";
//else
//    cout<<"ne";

}
