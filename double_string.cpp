#include <iostream>
#include <sstream> 

// string change to double :
double str2num(const std::string str){
	double numrslt;
	std::istringstream istr(str);	//input a std::string type
	istr >> numrslt;
	return numrslt;
}

// double change to string :
std::string num2str(double num){
	std::string strrslt;
	std::ostringstream ostr;
	ostr << num;
	strrslt.append(ostr.str());
	return strrslt;
}

int main()
{
	//	example: change from string to double:
	std::string str = "123.34";
    double c = str2num(str);
    std::cout << c << std::endl;
    
    //	example: change from double to string
    double num = 12.123;
    std::string str2 = num2str(num);
	std::cout << str2 << std::endl;	 
	return 0;
}
