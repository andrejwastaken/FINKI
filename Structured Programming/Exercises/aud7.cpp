#include <iostream>
using namespace std;

int main() {
    // 1
//    int n1, n2;
//    cin>>n1>>n2;
//    int niza[100], niza2[100];
//    if(n1!=n2)
//        return 0;
//    for (int i = 0; i < n1; i++){
//        cin >> niza[i];
//    }
//    for (int i = 0; i < n2; i++){
//        cin >> niza2[i];
//    }
//    int br=0;
//    for (int i = 0; i < n2; i++){
//        if(niza[i]==niza2[i])
//            br++;
//    }
//    if(br==n1)
//        cout<<"Ednakvi";
//    else
//        cout<<"Ne se";
// 2
// int n;
// int sumPar=0, sumNepar=0;
// int brojacPar = 0, brojacNepar=0;
// cin>>n;
// int a[n];
// for(int i = 0; i<n;i++)
//     cin>>a[i];
// for(int i = 0; i<n; i++) {
//     if (a[i] % 2 == 0) {
//         sumPar+=a[i];
//         brojacPar++;
//     } else {
//         sumNepar+=a[i];
//         brojacNepar++;
//     }
// }
// cout<<sumPar<<" "<<sumNepar<<" "<<(float)brojacPar/brojacNepar<<endl;
// 3
//int n;
//cin>>n;
//int v1[n];
//int v2[n];
//for(int i = 0; i<n; i++)
//    cin>>v1[i];
//for(int i = 0; i<n; i++)
//        cin>>v2[i];
//int skalaren=0;
//for(int i = 0; i<n;i++)
//    skalaren+=v1[i]*v2[i];
//cout<<skalaren;
// 4
//    int n;
//    cin>>n;
//    int a[n];
//    bool rastecka = true;
//    bool opagjacka = true;
//    for(int i = 0; i<n;i++)
//        cin>>a[i];
//    for(int i = 0; i<n-1;i++) {
//        int elLevo = a[i];
//        int elDesno = a[i + 1];
//        if (elLevo > elDesno) rastecka = false;
//        if (elLevo == elDesno) {
//            rastecka = false;
//            opagjacka = false;
//        }
//        if (elDesno > elLevo)
//            opagjacka = false;
//    }
//    if(opagjacka)
//    cout<<"opagjacka";
//    else if(rastecka)
//    cout<<"rastecka";
//    else if(!rastecka && !opagjacka)
//    cout<<"ni r ni op";
//
// 5
//    int n, temp=0;
//    cin >> n;
//    int a[n];
//    for(int i = 0; i<n;i++)
//        cin>>a[i];
//    temp = a[n-1];
//    for(int i = n-1; i>0; i--)
//        a[i]=a[i-1];
//    a[0]=temp;
//    for(int i = 0; i<n;i++)
//        cout<<a[i]<<" ";
// 6
//    int n, m, temp;
//    cin >> n >> m;
//    int a[n];
//    for(int i = 0; i<n;i++)
//        cin>>a[i];
//    for(int i = 0; i<m;i++){
//         temp = a[n-1];
//        for(int j = n-1; j>0;j--)
//            a[i]=a[i-1];
//        a[0]=temp;
//    }
//    for(int k = 0; k<n;k++)
//        cout<<a[k]<<" ";
// 7 teskoto resenie
//    int n, nova=0;
//    cin >> n;
//    int arr[n];
//    for(int i = 0; i<n; i++)
//        cin>>arr[i];
//    for(int i = 0; i<n-nova;i++){
//        for(int j = i + 1; j< n-nova;j++) {
//            if (arr[i] == arr[j]) {
//                for (int k = j; k < n - 1 - nova; k++)
//                    arr[k] = arr[k + 1];
//                nova++;
//                --j;
//            }
//        }
//    }
//    n-=nova;
//    for(int i = 0; i<n; i++)
//        cout<<arr[i]<<" ";
// so dve nizi resenie:
//    int n;
//    cin >> n;
//    int arr[n];
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//    int rezultantna[n];
//    int brojacIzbrisani = 0;
//    for (int i = 0; i < n; i++) {
//        int element = arr[i];
//        bool pojavuva = false;
//        for (int j = 0; j < brojacIzbrisani; j++) {
//            if (rezultantna[j] == element) {
//                pojavuva = true;
//                break;
//            }
//        }
//        if (!pojavuva) {
//            rezultantna[brojacIzbrisani] = element;
//            brojacIzbrisani++;
//        }
//    }
//    for (int i = 0; i < brojacIzbrisani; i++)
//        cout << rezultantna[i];
// matrici 1
//    int a[100][100], n, m, sumKol=0, sumRed=0;
//    cin>>n>>m;
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<m; j++){
//            cin>>a[n][m];
//        }
//    }
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<m; j++){
//            if(j%2)
//                sumKol+=a[i][j];
//            if(!(i%2))
//                sumRed+=a[i][j];
//        }
//    }
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<m; j++){
//            if(!(i%2))
//                sumRed+=a[i][j];
//        }
//    }
//    cout<<sumKol-sumRed;
// matrici 2 ako ima glavna/sporedna sekogas e kvadratna matrica
//    int a[100][100], n, m, maks, min;
//    cin >> n >> m;
//    m = n;
//    for(int i = 0; i<n;i++){
//        for(int j = 0; j<m;j++)
//            cin>>a[i][j];
//    }
//    maks = a[0][0];
//    min = a[0][0];
//    for(int i = 0; i<n;i++){
//        for(int j = 0; j<m;j++) {
//            if(a[i][j]>maks)
//                maks=a[i][j];
//            if(a[i][j]<min)
//                min=a[i][j];
//        }
//    }
//    int razlika = maks - min;
//    for(int i = 0; i<n;i++) {
//        for (int j = 0; j < m; j++) {
//            if (i == j)
//                a[i][j] = razlika;
//        }
//    }
//    for(int i = 0; i<n;i++){
//        for(int j = 0; j<m;j++)
//            cout<<a[i][j]<<" ";
//        cout<<endl;
//    }
// matrici 3
// 0-0 0-1 0-2
// 1-0 1-1 1-2
// 2-0 2-1 2-2
//    int n, m;
//    cin>>n>>m;
//    int a[n][m];
//    for(int i = 0; i<n; i++){
//        for(int j = 0; j<m; j++) {
//            cin >> a[i][j];
//        }
//    }
//    bool vazi = true;
//    for(int i = 0; i<n-1; i++){
//        for(int j = i+1; j<m; j++) {
//            int el = a[i][j];
//            int el2 = a[j][i];
//            bool simetricna = (el==el2);
//            if(!simetricna){
//                vazi=false;
//                break;
//            }
//        }
//    }
//    if(vazi)
//        cout<<"simetricna";
//    else
//        cout<<"ne e";
// domasna
//    int n, m;
//    cin>>n>>m;
//    int arr[n][m];
//    int br=0;
//    for(int i = 0; i< n; i++)
//        for(int j = 0; j<m;j++)
//            cin>>arr[i][j];
//    for(int i = 0; i< n; i++){
//        for(int j = 0; j<m;j++){
//            if ((arr[i][j] == 1 && (arr[i][j] == arr[i - 1][j])) && (arr[i][j] == 1 && (arr[i][j] == arr[i][j - 1])) &&
//                (arr[i][j] == 1 && (arr[i][j] == arr[i][j + 1])) && (arr[i][j] == 1 && (arr[i][j] == arr[i + 1][j]))) {
//                br++;
//                arr[i-1][j]=arr[i][j-1]=arr[i][j+1]=arr[i+1][j]=arr[i][j]=0;
//            }
//        }
//    }
//    cout<<br;

}
