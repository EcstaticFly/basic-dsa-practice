//delimiter is the parameter or character based on which we separate the string.


#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    string s="Suyash>=Pandey>=Today>=Hello";
std::string delimiter = ">=";

size_t pos = 0;
std::string token;
while ((pos = s.find(delimiter)) != std::string::npos) { 
    //Ye npos kya hai?
    token = s.substr(0, pos);
    std::cout << token << std::endl;
    s.erase(0, pos + delimiter.length());
}
std::cout << s << std::endl;
}