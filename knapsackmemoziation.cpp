#include<bits/stdc++.h>
using namespace std;
int t[100][1000];
int knapSackAns(int wt[], int val[], int maxweight, int n){
    if(n == 0 || maxweight == 0){
        return 0;
    }
    if(t[n][maxweight]!= -1){
        return t[n][maxweight];
    }
    if(wt[n-1]<=maxweight){
        return t[n][maxweight] = (max((val[n-1] + knapSackAns(wt,val,maxweight-wt[n-1],n-1)),knapSackAns(wt,val,maxweight,n-1)));
    }
    else if(wt[n-1]>maxweight){
        return t[n][maxweight] = (knapSackAns(wt,val,maxweight,n-1));
    }
    return 0;
}
int main(){
    int wt[] = { 10, 20, 30 };
    int val[] = { 60, 100, 120 };
    int maxweight = 50;  
    memset(t,-1,sizeof(t));
    cout<<knapSackAns(wt,val,maxweight,3);
}

//N*W