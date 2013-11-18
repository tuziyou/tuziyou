#include "iostream"
using namespace std;
struct Student{ 
       char name[20];
        int marks;
        long number;
}students[100];
int studentCount =0;
void list();
void inClass();
void outClass();
void saveMarks();
void input(Student &student);
int find(char* name);
int main(){
        int action;
        do{
                cout<<"-----------菜单-----------"<<endl;                				cout<<"1)查看学生名单"<<endl;
                cout<<"2)选课"<<endl;
                cout<<"3)退选"<<endl;
                cout<<"4)录入成绩"<<endl;
                cout<<"5)退出程序"<<endl;
                cin>>action;
                switch(action){
                case 1:
                        list();
                        break;
                case 2:
                        inClass();
                        break;
                case 3:
                        outClass();
                        break;
                case 4:
                        saveMarks();
                        break;
                case 5:
                        return 0;
                default:
                        cout<<"您输入了错误的菜单项，请重新选择！";
                }
        }while(1);}
void list(){
        cout<<"-------学生名单-------"<<endl;
        cout<<"姓名\t"<<"学号\t"<<"成绩"<<endl;
        for(int i=0;i<studentCount;i++){
                cout<<students[i].name<<"\t"<<students[i].number<<"\t"<<students
[i].marks<<endl;
        }
        cout<<"-------学生名单-------"<<endl;}void inClass(){
        Student student;
        input(student);
        int i = find(student.name);
        if(i == studentCount){
                strcpy_s(students[i].name,student.name);
                students[i].number = student.number;
                studentCount++;
                }}void outClass(){
        struct Student student;
        input(student);
        int i = find(student.name);
        if(i == studentCount){
                cout<<"错误！"<<endl;
        }else{
                students[i].name[0]='\0';
        }}void saveMarks(){
   Student student;
            input(student);
                cout<<"成绩：";
        cin>>student.marks;
                int i = find(student.name);
        if(i == studentCount){
                cout<<"错误！"<<endl;
        }else{
                students[i].marks=student.marks;
        }}void input(Student &student){
        cout<<"姓名：";
        cin>>student.name;
        cout<<"学号：";
        cin>>student.number;}int find(char* name){
        int i;
        for(i=0;i<studentCount;i++){
                if(strcmp(students[i].name,name) == 0){
                        break;
                }
        }
        return i;
}