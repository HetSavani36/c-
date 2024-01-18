//with moving right and down return no of ways
//print ways

#include<iostream>
#include<string>
using namespace std;

int way(int sr,int sc,int er,int ec){

    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right=way(sr,sc+1,er,ec);
    int down=way(sr+1,sc,er,ec);

    int total=down+right;
    return total;
}
//with 2 parameter
int way2(int row,int col){

    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int right=way2(row,col-1);
    int down=way2(row-1,col);

    int total=down+right;
    return total;
}

void printway(int sr,int sc,int er,int ec,string s){
    
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printway(sr,sc+1,er,ec,s+"R");
    printway(sr+1,sc,er,ec,s+"D");
}
//with 2 parameter

void printway2(int row,int col,string s){
    
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s<<endl;
        return;
    }
    printway2(row,col-1,s+'R');
    printway2(row-1,col,s+'D');
}
int main(){
   
    printway2(3,3,"");
}