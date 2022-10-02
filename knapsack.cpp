#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int wt[], int value[], int n, int W){
    if (W==0 || n==0)
    {
        return 0;
    }
    if (wt[n-1]>W)
    {
        return knapsack(wt, value,n-1,W);
    }
    
    return max(knapsack(wt ,value,n-1,W-wt[n-1])+value[n-1],knapsack(wt, value,n-1,W));

}

int main(){
    int weight[] ={10,20,30};
    int value[] = {100,50,250};
    int W = 50;
    cout<<knapsack(weight,value,3,W)<<endl;
    return 0;
}