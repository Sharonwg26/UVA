#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	int c=0,n=0;
	float score[1000],avg,per;
	while(cin>>c){
		if(c>100||c<1) break;
		for(int i=1;i<=c;i++){
			cin>>n;
			if(n<0||n>100) break;
			avg=0.0;
			for(int j=0;j<n;j++){
				cin>>score[j];
				avg+=score[j];
			}
			avg/=n;
			per=0.0;
			for (int s=0;s<n;s++){
				if(score[s]>avg) per++;
			}
			printf("%.3f%%\n",per*100.0/n);
		}
	}
	return 0;
}
