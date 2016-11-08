# include <iostream>
using namespace std;

int main(){
    int i=2;

    int* my_array=new int[i];
    cout <<"Please input numbers:"<<endl;

    int input;
    int counter=0;
    cin >>input;
    while (input!=0){
        if (counter == i){
            i=i*2;
            cout <<"array size doubled"<<i<<endl;
        }
        my_array[counter]=input;
        cin >>input;
        counter ++;


    }

    for (int j=0;j<counter;j++){
        cout <<my_array[j];
    }


}
