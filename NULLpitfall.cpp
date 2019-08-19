#include<iostream>
#include<typeinfo>




auto  getmypointer()
{
 char *p= new char ('a');
  
 return nullptr;

}

int main()
{
auto a= getmypointer();

std::cout<<"type_name:"<<typeid(a).name()<<"\n";


return 0;
} 
