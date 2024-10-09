#include<iostream>
using namespace std;

int main(){
    int day[2],month[2],year[2];
    for(int i=0;i<2;i++){
    cout<<"Person"<<i+1<<" Year of Birth: ";
    cin>>year[i];
    cout<<"Person"<<i+1<<" Month of Birth: ";
    cin>>month[i];
    cout<<"Person"<<i+1<<" Day of Birth: ";
    cin>>day[i];
    }
    int comYear,comMonth,comDay;
    comYear=year[0]-year[1];
    comDay=day[0]-day[1];
    comMonth=month[0]-month[1];
    int check=0;
    //check if 1st person is older; 1 for person 1 is older; 2 for person 2 is older
    if(comYear>0)     check=1;
    else if(comYear<0)check=0;
    else if(comYear==0){
        if(comMonth>0)      check=1;
        else if(comMonth<0) check=0;
        else if(comMonth==0){
            if(comDay>0)      check=1;
            else if(comDay<0) check=0;
            else if(comDay==0)check=2;
        }
    }
    switch(check){
        case 0: cout<<"Person 1 is Older";
                break;
        case 1: cout<<"Person 2 is Older";
                break;
        case 2: cout<<"They both are the same age";
                break;
    }


}
