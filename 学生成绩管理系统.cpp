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
                cout<<"-----------�˵�-----------"<<endl;                				cout<<"1)�鿴ѧ������"<<endl;
                cout<<"2)ѡ��"<<endl;
                cout<<"3)��ѡ"<<endl;
                cout<<"4)¼��ɼ�"<<endl;
                cout<<"5)�˳�����"<<endl;
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
                        cout<<"�������˴���Ĳ˵��������ѡ��";
                }
        }while(1);}
void list(){
        cout<<"-------ѧ������-------"<<endl;
        cout<<"����\t"<<"ѧ��\t"<<"�ɼ�"<<endl;
        for(int i=0;i<studentCount;i++){
                cout<<students[i].name<<"\t"<<students[i].number<<"\t"<<students
[i].marks<<endl;
        }
        cout<<"-------ѧ������-------"<<endl;}void inClass(){
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
                cout<<"����"<<endl;
        }else{
                students[i].name[0]='\0';
        }}void saveMarks(){
   Student student;
            input(student);
                cout<<"�ɼ���";
        cin>>student.marks;
                int i = find(student.name);
        if(i == studentCount){
                cout<<"����"<<endl;
        }else{
                students[i].marks=student.marks;
        }}void input(Student &student){
        cout<<"������";
        cin>>student.name;
        cout<<"ѧ�ţ�";
        cin>>student.number;}int find(char* name){
        int i;
        for(i=0;i<studentCount;i++){
                if(strcmp(students[i].name,name) == 0){
                        break;
                }
        }
        return i;
}