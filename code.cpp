#include <iostream>
#include <string>
using namespace std;
int main() {
int goodiesPrice[10]={7980,22349,999,2799,229900,11101,9999,2195,9800,4999};
std::string goodies[10] = {"Fitbit Plus","IPods","MIBand","Cult Pass","MacbookPro","DigitalCamera","Alexa","SandwichToaster","Microwave Oven","Scale"};

int emp=0;
int max=goodiesPrice[0];
int min=goodiesPrice[0];
cout << "Enter The Number Of Employee " <<endl;
cin >> emp;
cout << "Here the goodies that are selected for distribution are"<<endl;
if(emp !=0 ){
for (int i = 0; i < emp; ++i) { //loop started
	if(goodiesPrice[i] > max){
    max=goodiesPrice[i];
    }
    
    if(goodiesPrice[i] < min){
    min=goodiesPrice[i];
    }
    cout << goodies[i] << " : " << goodiesPrice[i]<< endl;
    }
}

int diffrencePrice=max-min;
cout << "And the difference between the chosen goodie with highest price and the lowest price is " << diffrencePrice <<endl;
    return 0;
}