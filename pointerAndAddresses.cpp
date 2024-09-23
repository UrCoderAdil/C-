//pointers in c++
#include<iostream>
std::string HelloWorld( int *page,std::string *pname);
int main(){
  int age=19;
  int *page=&age;
  std::string name="Adil";
  HelloWorld(&age,&name);
  //std::string *pname=&name;
   std::string Array[3]={"alpha","Beta","Charlie"};
  std::string *pArray=Array;
    std::cout<<*pArray<<std::endl;
  //std::cout<<"Name is : "<<*pname<<std::endl;
  //std::cout<<"Address of age:"<<*page<<std::endl;
}
std::string HelloWorld( int *page,std::string *pname) {
  std::cout<<"Hello Mr "<<*pname<<"  Your are of age: "<<*page<<std::endl;

}