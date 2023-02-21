#include <iostream>

using namespace std;

int main(int argc,char * argv[]){
	cout<<"loading the pico_project manager"<<endl;
	system("python ./pico_project.py --gui");
	cout<<"created your project"<<endl;
	return 0;
}
