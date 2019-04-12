#include <iostream>

using namespace::std;

struct algo{
    double nilai[1];
};

double input(string text){
    algo ritma;
    double nilai;
    cout<<"\ninput nilai "<<text<<":";cin>>ritma.nilai[1];
    return nilai;
}


void huruf(double nilai){
    if(nilai>81){cout<<"nilai A";}
    else if(nilai>61){cout<<"nilai B";}
    else if(nilai>41){cout<<"nilai C";}
    else if(nilai>41){cout<<"nilai D";}
    else {cout<<"nilai E";}
    }


main(){
    double uts,uas,tugas,absen,nilai,total;
    uts=input("uts");
    uas=input("uas");
    tugas=input("tugas");
    absen=input("absen");
    nilai=uts*20/100+uas*30/100+tugas*35/100+absen*15/100;
    cout<<"total :";cout<<nilai;
    cout<<endl;
    huruf(nilai);
}





