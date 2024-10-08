#include <iostream>
using namespace std;
 
bool isInside(int number,int min,int max){
    if(number>=min&&max>=number){
        return true;
    }
    else return false;
}

int main(){
    int num,min,max;
    cin>>num>>min>>max;
    bool check=isInside(num,min,max);
    if(check){
        cout<<"Inside";
    }else cout<<"Outside";


}