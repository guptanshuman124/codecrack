//write your code here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    pair<int,int> coins={x,y};

    bool turnBluemin=true;

    vector<pair<int,int>> possibility={{2,2},{1,12},{0,22}};

    while((turnBluemin?(coins.first>=0 && coins.second<=22):(coins.first<=2 && coins.second>=2))){
        bool turn_succes=false;
        for(int i=0;i<3;i++){
            int del_x=possibility[i].first;
            int del_y=possibility[i].second;
            if(coins.first>=del_x && coins.second>=del_y){
                coins.first-=del_x;
                coins.second-=del_y;
                turn_succes=true;
                break;
            }
        }
        if(turn_succes){
            turnBluemin=!turnBluemin;
            reverse(possibility.begin(),possibility.end());
        }else{
            break;
        }
    }

    string ans=(turnBluemin)?"Biraj":"Bluemin";

    cout<<ans;
    
}
