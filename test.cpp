#include <iostream>
using namespace std;
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee : AbstractEmployee{
    protected:
        string Name;
    private:
        string Company;
        int Age;
    public:
        Employee(string name,string company,int age){
            Name = name;
            Company = company;
            Age = age;
        }
        void IntroduceYourSelf(){
            cout<< "Ten la: "<<Name<<std::endl;
            cout<< "Cong ty: "<<Company<<std::endl;
            cout<< "Tuoi: "<<Age<<std::endl;
        }
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
        void setAge(int age){
            if(age > 20){
                Age = age;
            }
        }
        int getAge(){
            return Age;
        }
        void AskForPromotion(){
            if(Age>30){
                std::cout<<Name<<" Got promoted"<<std::endl;

            }else{
                std::cout<<Name<<" Not promoted"<<std::endl;
            }
        }
        virtual void Work(){
            std::cout<<Name<<" is working"<<std::endl;
        }
};
class Developer:public Employee{
    public:
        string LanguageCode;
        Developer(string name,string company,int age,string languageCode):Employee(name,company,age){
            LanguageCode = languageCode;

        }
        void FixBug(){
            std::cout<<Name<<" Fixed Bug by "<<LanguageCode<<std::endl;
        
        }void Work(){
            std::cout<<Name<<" is coding"<<std::endl;
        }

};
class Teacher:public Employee {
    private: 
        string Subjects;
    public:
        void PrepareLesson(){
            std::cout<<Name<<" is preparing "<< Subjects << " leassons" <<std::endl;
        }
        Teacher(string name,string company,int age,string subjects):Employee(name,company,age){
            Subjects = subjects;
        }
        void Work(){
            std::cout<<Name<<" is teaching"<<std::endl;
        }

        
};


int main(){
    Employee employee1 = Employee("Duy","Bach Khoa ",22);
    Developer Long = Developer("Long","VNUK",22,"CPP");
    Long.AskForPromotion();
    Teacher Hy = Teacher("Hy","DUT",21,"English");
    Employee* e1 = &Long;
    Employee* e2 = &Hy;
    e1->Work();
    e2->Work();

    return 0;

    
}