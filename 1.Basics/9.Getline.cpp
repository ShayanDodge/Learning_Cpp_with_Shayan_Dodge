// getline instead of cin (std::cin will not retrieve strings that have a space in them)

#include<iostream>
#include<string>

int main()
{
    std::string userName; 
    std::cout<<"Tell me your nickname?: ";
    std::getline(std::cin, userName);
    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}
