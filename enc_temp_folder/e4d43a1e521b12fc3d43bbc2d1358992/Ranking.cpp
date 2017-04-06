#include<map>
#include<string>
#include<iostream>

void print(std::map <std::string, int>&p)
{
	for (auto it = p.begin(); it != p.end();it++)
	{
		std ::cout << it->first << " " << it->second << std::endl;
	}


}

int main() {
	
	std::map <std::string, int>pts;
	pts["David"]=96;
	pts["Alessandro"] = 95;
	pts["Tona"] = 94;
	pts["Jordi"] = 100;



	print(pts);





}
