#include <iostream>
int main() {
 float add,sub,mul,div,int1,int2;
 std::string input;
 while (true) {
  std::cout<<"\n '/' == division \n '*' == multiplication \n '-' == subtraction \n '+' == addition \n For Exiting the calculator type 'exit'\n Enter the operation from following above : ";
     std::cin>>input;
  if (input=="exit") { break;}
  else if(input!="exit") {
      if(input != "+" && input != "-" && input != "*" && input != "/" && input !="exit") {
          std::cout<<"You entered wrong Operator!!\n Try again!";
      }
      else {
          std::cout<<"\nEnter the first number: \n";
          std::cin>>int1;
          std::cout<<"\nEnter the second number: \n";
          std::cin>>int2;
          if(input == "+") {
              add=int1+int2;
              std::cout<<"\n Addition "<<int1<<" + "<<int2<<" == "<<add<<"\n\n";
          }
          if(input == "/") {
              if(int2==0) {
                  std::cout<<"\n Division " <<int1<<" / "<<int2<<" == "<<"not possible or infinity"<<"\n\n";
              }
              else {
                  div=int1/int2;
                  std::cout<<"\n Division " <<int1<<" / "<<int2<<" == "<<div<<"\n\n";
              }
          }
          else if(input == "*") {
              mul=int1*int2;
              std::cout<<"\n Multiplication "<<int1<<" * "<<int2<<" == "<<mul<<"\n\n";
          }
          else if(input == "-") {
              sub=int1-int2;
              std::cout<<"\n Subtraction "<<int1<<" - "<<int2<<" == " <<sub<<"\n\n";
          }
      }
  }







   }
    std::cout<<"\n\nThank You for using my Calculator\n\n";
   return 0;
}



