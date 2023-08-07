#include <iostream>
#include <map>

int main(){
	std::map<std::string,std::string> country_capital;

	country_capital.insert(std::pair<std::string, std::string>("AM","Yerevan"));
	country_capital.insert(std::pair<std::string, std::string>("RU","Moscow"));
	country_capital.insert(std::pair<std::string, std::string>("JP","Tokyo"));
	country_capital.insert(std::pair<std::string, std::string>("USA","Washington, D.C."));
	country_capital.insert(std::pair<std::string, std::string>("UK","London"));
	country_capital.insert(std::pair<std::string, std::string>("FR","Paris"));
	country_capital.insert(std::pair<std::string, std::string>("GE","Tbilisi"));
	country_capital.insert(std::pair<std::string, std::string>("AU","Canberra"));
	country_capital.insert(std::pair<std::string, std::string>("EG","Cairo"));
	country_capital.insert(std::pair<std::string, std::string>("KR","Seoul"));

	std::map<std::string,std::string>::iterator it;

	for(it = country_capital.begin(); it != country_capital.end(); it++){
		std::cout << it->first << " -> " << it->second << std::endl;
	}

	return 0;
}