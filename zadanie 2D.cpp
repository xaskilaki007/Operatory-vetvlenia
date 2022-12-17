#include<iostream>
#include<cmath>

int main()
{
int x,y;
std::cin»x»y;

if((x<=0)&&(pow(x,2)+pow(y,2)<=1)){

std::cout«"Yes"« std::endl;
}
if((pow(x,2)+pow(y,2))<=1andy>=x){

std::cout«"yes"«endl;
}else
std::cout«"no";
}
