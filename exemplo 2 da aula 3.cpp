#include <iostream>
using namespace std;
int main(){
    int nota;
    
    cout<<"digite a nota!";
    cin>>nota;
    
    if(nota==100){
        cout<<"aluno ou aluna show!";
        
    }
    
    else if (nota<=99&nota>=60){
        cout<<"você,passou,parabens!";
    }
    
    else if (nota<=59&&nota>=40){
        cout<<"recuperação";
    }
    else{
        cout<<"você reprovou!";
    }
    
    return 0;
}