#include<iostream>

int getuser()
{
    std::cout << "enter a number" << std::endl;
    int a{};
    std::cin>>a;
    return a;
}

char getoper()
{
    std::cout<<"enter oper:";
    char a{};
    std::cin>>a;
    return a;
}

int main()
{
    int var1{getuser()};
    int var2{getuser()};
    char oper{getoper()};
    int result{};
    
    switch(oper){
        case '+':
            result=var1+var2;
            std::cout<<result;
            break;
        case '-':
            result=var1-var2;
            std::cout<<result;
            break;
        case '*':
            result=var1*var2;
            std::cout<<result;
            break;
        case '/':
            result=var1/var2;
            std::cout<<result;
            break;
        default:
            std::cout<<"try again";
            break;
    }
    
    return 0;
}