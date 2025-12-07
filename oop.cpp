#include <iostream>
#include <string>
using namespace std;

class StreetVendor {
private:
    string Name;
    string Goods;
    string Location;
    int DailyGoal;
public:
    StreetVendor(string name,
             string goods,
             string location,
             int goal)
{
    Name = name;
    Goods = goods;
    Location = location;
    DailyGoal = goal;
}
void DisplayInfo() {
    cout << Name << " sells " << Goods
              << " and is located at: " << Location <<endl;
}
void Relocate(string new_location) {
    if (new_location.find("Manhattan") !=string::npos) {
        Location = new_location;
    } else {
        cout << "Relocation denied: Must stay in Manhattan!" <<endl;
    }
}
};

int main(){
StreetVendor HalalGuys("53rd St. Halal",
                       "Chicken & Rice",
                       "Midtown", 1500);

StreetVendor FlowerShop("Union Sq Blooms",
                        "Fresh Flowers",
                        "Union Square", 750);

HalalGuys.DisplayInfo();
HalalGuys.Relocate("Manhattan, Times Square");

FlowerShop.DisplayInfo();
FlowerShop.Relocate("Queens");
    return 0;
}