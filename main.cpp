
#include <iostream>
#include <string>


using namespace std;

int main()
{
    float payment;
    const int SIZE = 6;
    int speed;
    int totalFee = 0, base = 0;
    int companyIndex;
    string insuranceCompany[SIZE] = {"Nation Wide", "Allstate", "Farmers", "state Farm" "Progressive", "Geico"};
    float increaseRate[SIZE] = {0.19, 0.20, 0.24, 0.27, 0.31, 0.31};
    cout << "which companty do you have your insurance with?"<< endl;
    for (int i = 0; i < SIZE-1 ; i++ )
    {
        cout << i + 1 << "." << insuranceCompany[i] << endl;
    }
    cin >> companyIndex;
    --companyIndex;
    cout << "How much do you currently pay for your car insurance monthly in dollar? ";
    cin >> payment;
    cout << "How much over the limit were you driving? ";
    cin >> speed;
    if (speed < 15)
    {
        base = 35;
        totalFee = 230;
    }else if (speed < 25 && speed >= 15)
    {
        base = 70;
        totalFee = 360;
    }else if (speed >= 25)
    {
        base = 100;
        totalFee = 490;
    }
    cout << "Your ticket base is $" << base << ". Including fees you'll pay $" << totalFee << endl;
    cout << "you will pay $" << (increaseRate[companyIndex] + 1) * payment << " for the next 12 months for your insurance" << endl;
    
    return 0;
}
