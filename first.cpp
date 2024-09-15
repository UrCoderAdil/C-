/**#include <iostream>
//typedef std::string text;
//typedef int num;
using num=int;
using text=std::string;
namespace first {
    int x=39;
}
namespace second {
    int x=30;
}
int cube (int n){
   int c =n*n;
   return c;
}
using namespace second;
int main(){
    int correct_questions=8;
    int total_questions=10;
    double score=correct_questions/total_questions *100;
    std::cout<<score<<"%"<<std::endl;
  text name="Adil Umer";
    num number=3;
    std::cout<<number<<std::endl;
    std::cout<<name<<std::endl;
  std::cout<<"Hello World!"<<std::endl;
  std::cout<<cube(25)<<std::endl;
    std::cout<<x<<std::endl;

  return 0;


}**/