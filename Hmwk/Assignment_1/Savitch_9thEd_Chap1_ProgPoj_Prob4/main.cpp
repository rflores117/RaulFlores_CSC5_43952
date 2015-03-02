/* 
 * File:   main.cpp
 * Author: Raul Flores
 *
 * Created on March 2, 2015, 9:03 AM
 *      Purpose: Free fall Problem from Savitch
 */
        //System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants 
const float G=3.2174e1f; // Acceleration in ft/sec^2 on earth
const float CNVFTMT=3.048e-1f; //Conversion from fee

//Function Prototypes 

//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl; 
    cout<<"Input the time to drop x.xx (seconds)"<<endl; 
    cin>>time;
    //Calculate the distance
    dstnce=1/2.0*G*time*time;
    cout<<"Distance fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce<<CNVFTMT<<"(meters)"<<endl;
    return 0;
}

