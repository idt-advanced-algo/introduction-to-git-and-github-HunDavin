#include<iostream>
#include<iomanip>
using namespace std;

struct Student {
    int id;
    string name;
    int grades[5];
};

struct Student students[5] = {
    {1, "Alice", {85, 92, 78, 94, 88}},
    {2, "Bob", {76, 81, 72, 85, 79}},
    {3, "Charlie", {93, 89, 84, 91, 95}},
    {4, "David", {65, 70, 75, 60, 80}},
    {5, "Eve", {54, 68, 72, 77, 65}}
};



float calculateAverage(Student student){
    int total=0;
    for(int i=0;i<5;i++){
        total+= student.grades[i];
    }
    float average=total/5;
    return average;
}
float calculateGPA(int average){
    if(average>=90&&average<=100){
        return 4.0;
    }else if(average>=80&&average<=89){
        return 3.0;
    }else if(average>=70&&average<=79){
        return 2.0;
    }else if(average>=60&&average<=69){
        return 1.0;
    }else if(average<60){
        return 0.0;
}
}
string calculateGrade(float average){
    if(average>=90&&average<=100){
        return "A";
    }else if(average>=80&&average<=89){
        return "B";
    }else if(average>=70&&average<=79){
        return "C";
    }else if(average>=60&&average<=69){
        return "D";
    }else if(average<60){
        return "E";
    }

}
void header(){
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"| Student ID| Name       | Average Score| GPA  | Grade|"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
}




int  main(){
    cout.precision(2);
    float average[5];
    for(int i=0;i<5;i++){
        average[i]=calculateAverage(students[i]);
    }

    header();
    for(int i=0;i<5;i++){
        
    cout<<"|"<<setw(11)<<students[i].id;
    cout<<"|"<<setw(12)<<students[i].name;
    cout<<"|"<<setw(14)<<fixed<<average[i];
    cout<<"|"<<setw(6)<<fixed<<calculateGPA(average[i]);
    cout<<"|"<<setw(6)<<calculateGrade(average[i])<<"|"<<endl;
    }
   
}