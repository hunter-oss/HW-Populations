/*
 *        File: population.cc
 *      Author: Hunter Douglas
 *        Date: January 8th 2021
 * Description: Take user populations and br dr ir and convert it to see the numbers after one year
 *          
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {
    int population;
    double birthrate;
    double deathrate;
    double immgrate;

    cout << "Enter the current population: ";
        cin >> population;

    cout << "Enter the current birth rate %: ";
        cin >> birthrate;
    
    cout << "Enter the current death rate %: ";
        cin >> deathrate;
    
    cout << "Enter the current immigration rate %: ";
        cin >> immgrate;

    double immgratep;
    double birthratep;
    double deathratep;

    immgratep = (immgrate / 100);
    deathratep = (deathrate / 100);
    birthratep = (birthrate / 100);

    int totalbirth = (population * birthratep);
    int totaldeath = (population * deathratep);
    int totalimmg = (population * immgratep);
    int totalpopulation = (population + totalbirth + totalimmg - totaldeath);

    cout << "After one year:" << endl;
    cout << endl;
    cout << "Total number of births: " << totalbirth << endl;
    cout << "Total number of deaths: " << totaldeath << endl;
    cout << "Total number of immigrants: " << totalimmg << endl;
    cout << "Total population: " << totalpopulation << endl;
    return 0;
}// main