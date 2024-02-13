#include<iostream>
#include<string>
using namespace std;

class cricketer{
    private:
        int age,noMatch,runs;
        string name;;
    public:
        void setAge(int age){
            this->age=age;
        }
        void setNoMatch(int noMatch){
            this->noMatch=noMatch;
        }
        void setRuns(int runs){
            this->runs=runs;
        }
        void setName(string name){
            this->name=name;
        }
        
        int getAge(){
            return age;
        }
        int getNoMatch(){
            return noMatch;
        }
        int getRuns(){
            return runs;
        }
        string getName(){
            return name;
        }
};

int main(){

    int n;
    cout<<"enter number of cricketers: ";
    cin>>n;
    cricketer *cricketers[n];

    for(int i=0;i<n;i++){
        cricketers[i]=new cricketer;
    }
    cout<<"Enter Name,Age,No of Matches and Runs Respectively"<<endl;
    for(int i=0;i<n;i++){
        int age=0,no=0,run=0;
        string name;
        cin>>name>>age>>no>>run;
        cricketers[i]->setName(name);
        cricketers[i]->setAge(age);
        cricketers[i]->setNoMatch(no);
        cricketers[i]->setRuns(run);
    }
    
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Player"<<" "<<i+1<<endl<<"------------"<<endl;
        cout<<"Name\t:"<<cricketers[i]->getName()<<endl;
        cout<<"Age\t:"<<cricketers[i]->getAge()<<endl;
        cout<<"Matches :"<<cricketers[i]->getNoMatch()<<endl;
        cout<<"Runs\t:"<<cricketers[i]->getRuns()<<endl<<endl;
    }
   
    return 0;
}