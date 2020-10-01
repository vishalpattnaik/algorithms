#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int solveKnapsack(int c , vector<int> W , vector<int> V , int i) {
    if(c>0 && i < W.size()) {
        
        if(W[i] > c) {
            return solveKnapsack(c,W,V,i+1) ;
        }
        else {
            return max(solveKnapsack(c,W,V,i+1),V[i] + solveKnapsack(c-W[i],W,V,i+1)) ;
        }
        
        

    }
    else return 0 ;
}

int main(int argc, char const *argv[])
{
    int c = 10 ;
    vector<int> W = {1,3,4,6} ;
    vector<int> V = {20,30,10,50} ;
    int maxProfit = solveKnapsack(c,W,V,0) ;
    cout << maxProfit ;
    return 0;
}
