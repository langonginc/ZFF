#include<ctime>
using namespace std;
#include<iostream>
#include<windows.h>
int main(){
	system("color F0");
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout <<1900 + ltm->tm_year<<"��"<<1+ltm->tm_mon<<"��"<<ltm->tm_mday<<"��";
	cout <<ltm->tm_hour << ":"<< ltm->tm_min << ":"<< ltm->tm_sec << endl;
	return 0;
}
