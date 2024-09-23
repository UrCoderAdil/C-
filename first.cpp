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
/**#include <iostream>
int main() {
    bool game=true;
    std::string input[50]={};
    std::string dish;
    while(game){
        std::cout<<"Enter the dish\n";

        std::cin>>dish;
        if(dish=="q") {
            game=false;
        }
        else{
            for(int i=0;i<50;i++) {
                input[i]=dish;
                ;
            }
        }
    }
    for(int i=0;!input[i].empty();i++) {

            std::cout<<input[i]<<"Helloo  \n";
    }
}**/
/**#include <iostream>
int main() {
    int nums[]={2,3,5,6,8,9,10,1,4};
    int nu;
    //sort them with increasing order
    int siz=sizeof(nums)/sizeof(int);
    for(int i=0;i<siz-1;i++) {
        for(int j=0;j<siz-i-1;j++) {
            if(nums[j]>nums[j+1]) {
                nu=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=nums[j];
            }
        }
    }
    for(int k=0;k<siz;k++) {
        std::cout<<nums[k]<<" ";
    }
}
**/
#include <iostream>
int main() {
    std::string Cars[][3]={{"Civic","City","Brv"},
        {"yaris","corolla","Fortuner"},
        {"santro","Tuscon","elantra"}};
    int rows =sizeof(Cars)/sizeof(Cars[0]);
    int cols =sizeof(Cars[0])/sizeof(Cars[0][0]);
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            std::cout<<Cars[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}