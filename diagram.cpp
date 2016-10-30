#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

  for (int i=0;i<60;i++){
    for (int j=0;j<60;j++){
      cout <<"=";
    }
    cout <<endl;
    for (int z=0;z<i;z++){
      cout <<" ";
    }
    cout <<"O"<<endl;
    for (int x=0;x<60;x++){
      cout <<"=";
    }
    system("clear");
    for (int i =0;i<1000000;i++){
      i=(i+i)/2;
    }

  }
}
