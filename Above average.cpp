#include<iostream>
#include<vector>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int>marks;
    int T,a,b,sum,count,i,n;
    float percent,avg;

    cin>>T;

    while(T--){
            marks.clear();count=0;sum = 0;avg = 0;
        cin>>a;
        n = a;
        while(a--){
            cin>>b;
            marks.push_back(b);
            sum+=b;

        }
        marks.push_back(-1);
        avg = float(sum*1.0/n);
        i = 0;
    while(marks[i]!=-1){

        if(marks[i]>avg){
            count = count + 1;
            }
            ++i;
    }
            percent = (count*100.0)/n;
            printf("%.3f%\n",percent);

    }


    return 0;
}
