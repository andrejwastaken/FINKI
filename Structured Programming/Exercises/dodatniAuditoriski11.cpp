#include <iostream>
#include <cstring>
// ova se od minatiot kolokvium
//tips od Vlatko:
//1. resavaj zadaci shto se polesni i pobrzo se resavaat a poveke poeni nosat 40 poeni + 35, ako ti ostane vreme doresavaj gi drugite "poteski"
//2. resavaj 30 minuti po zadaca i premini na druga, ako ne ja resis -> za poveke poeni da soberes (dve polovicni > edna za malku)
//3. ako ti dava celo vreme isti resenija najcesto greskata e nadvor od for, primer cin >> broevi; cin.getline(nesto, nesto) tuka enterot ke vleze vo cin.getline i mora cin.get/cin.ignore megu za da raboti
//4. smeni mindset za time management ako nekoja zadaca ne ja biva ne ja mozgaj 1h za dzabe
//5. ako imas cin broj pa cin na nizi od znaci obavezno cin.ignore/cin.get posle cin od integers.
//6. legni si porano denot prethodno i odmaraj cela vecer vo ponedelnik
using namespace std;
int main() {
    //3 snake game
//    int m, n;
//    int appleI, appleJ;
//    cin>>m>>n>>appleI>>appleJ;
//    cin.get();
//    char commands[1001];
//    cin.getline(commands,1001);
//    int snakeI=0, snakeJ=0;
//    int dI=1, dJ=0;
//    for(int i = 0; i<strlen(commands);i++){
//        char command = commands[i];
//        switch (command) {
//            case 'L':
//            case 'R':
//                if(dJ==0){
//                    dI*=-1;
//                    swap(dI, dJ);
//                }else{
//                    if(command=='L'){
//                        dJ*=-1;
//                    }
//                    swap(dI, dJ);
//                }
//                break;
//            case 'F':
//                break;
//            default:
//                cout<<"Error";
//                return 0;
//        }
//        snakeI+=dI;
//        snakeJ+=dJ;
//        if(snakeI==appleI&&snakeJ==appleJ){
//            cout<<"NJAM";
//             return 0;
//        }
//        if(snakeI<0||snakeI>=m||snakeJ<0||snakeJ>=n){
//            cout<<"GAME OVER Ouch";
//            return 0;
//        }
//    }
//    cout<< "GameOver";
// 2
//int m, n;
//cin >>m>>n;
//int matrica[100][100];
//    for (int i = 0; i < n; ++i) {
//        for(int j = 0; j<m; j++)
//            cin>>matrica[i][j];
//    }
//    int column = 0;
//    int row = m-1;
//    int columnIEnd=m-2;
//    int columnJStart=0;
//    while(row>=0&&column<n){
//        for(int i = 0; i<=columnIEnd;i++){
//            cout<<matrica[i][column]<<" ";
//        }
//        column++;
//        columnIEnd--;
//        for(int j = columnJStart; j<n;j++){
//            cout<<matrica[row][j]<<" ";
//        }
//        row--;
//        columnJStart++;
//        cout<<endl;
//}
//1
//int n;
//cin>>n;
//cin.ignore();
//char a[81], maksNiza[81];
//int maksIsfrleni=0;
//int br=0;
//for(int i = 0; i<n; i++){
//    cin.getline(a, 81);
//    for(int j = 0; j<strlen(a);j++){
//        br=0;
//            if(tolower(a[j])=='a'||tolower(a[j])=='e'||tolower(a[j])=='i'||tolower(a[j])=='o'||tolower(a[j])=='u')
//                br++;
//            }
//    if(br>maksIsfrleni) {
//        maksIsfrleni = br;
//        strcpy(maksNiza, a);
//        }
//    }
//    cout<<maksNiza;
}
