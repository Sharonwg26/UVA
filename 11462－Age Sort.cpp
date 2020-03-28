#include <iostream>
using namespace std;

int Min=1,Max=2000000,count[2000005];

int main(){
    int n;
    cin>>n;
    while (n>0&&n<Max){
        int age;
        for(int i=0;i<n;i++){
            cin>>age;
            ++count[age];
        }
        for (int i=Min;i<=99;++i){
            ++count[i];
            while (--count[i]){
                cout<<i<<" ";
            }
        }  
        cout<<'\n';
        return main();
    }
    return 0;
}
