#include <iostream>
using namespace std;

int main(int argc,char** argv){
    int i=0;
    while (*(argv[i])!='/0'){
        cout <<*(argv[i])<<endl;
        i++;
    }

}
