#include<iostream>
using namespace std;

int compareDate(int year1,int year2,int month1,int month2,int day1,int day2){
    int check;
    int comYear=year1-year2;
    int comMonth=month1-month2;
    int comDay=day1-day2;
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
        case 0: return -1;
                break;
        case 1: return 1;
                break;
        case 2: return 0;
                break;
        }
    }

bool checkValidDate(int year,int month,int day){
    if(year<0) return false;
    else if(month<0||month>12) return false;
    else if(day<0||day>31) return false;
    return true;
}




int main(){
    bool check=true;
    int day[2],month[2],year[2];
    for(int i=0;i<2;i++){
    cout<<"Person"<<i+1<<" Year of Birth: ";
    cin>>year[i];
    cout<<"Person"<<i+1<<" Month of Birth: ";
    cin>>month[i];
    cout<<"Person"<<i+1<<" Day of Birth: ";
    cin>>day[i];
    if(checkValidDate(year[i],month[i],day[i])){
        continue;
        check=true;
    }else{
        cout<<"INVALID DATE";
        check=false;
        break;
        
    }
    
    }
    
    if(check){
    switch(compareDate(year[0],year[1],month[0],month[1],day[0],day[1])){
        case -1: cout<<"Person 1 is Older";
                break;
        case 1: cout<<"Person 2 is Older";
                break;
        case 0: cout<<"They both are the same age";
                break;
    }}
    else return 0;
}
