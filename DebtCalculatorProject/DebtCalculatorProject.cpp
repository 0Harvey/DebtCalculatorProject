//First Project
// 
//this program helps take back control of your financial situation.Once youve met that goal it enables your growth in wealth.it  allows you to opt in to a more 
//dynamic experience where you can come back and show what youve payed off or debt thats been accumilated
//you will have a chart of what your financial situation will look like by the end of the year,you start by adding your debt and aprs.
// we ask for a prediction of 
//what you debt payments might look like, we will give a suggested payment amount if you add income and savings information.


#include <iostream>
#include <cmath>
#include <string>
#include <array>
#include <vector>
#include <map>
#include <string>
#include <sstream>
using namespace std;

bool overOne = true;

int main()
{

    map<string, int> assets;
    map<string, float> rating;

    string categories[4] = { "mortgage", "car", "credit card", "student loan" };

    for (const string category : categories) {
        bool validInput = true;
        while (validInput)
        {
            string hasAsset;
            cout << "Do you have any " << category << " payments? (yes/no): ";
            cin >> hasAsset;

            if (hasAsset == "yes")
            {

                int amount;
                cout << "How many " << category << "s do you have?: ";
                cin >> amount;
                assets[category] = amount;


                float custApr;
                cout << "What is your apr for your " << category << "?: ";

                cin >> custApr;
                rating[category] = custApr;



                if (amount <= 1)
                {
                    break;
                }
                else {
                    for (int i = 0; i < amount - 1; ++i) {
                        cout << "What is your apr for your " << category << "?: ";
                        float otherAprs;
                        cin >> otherAprs;
                        //bug. will not jump to next category once whie loop is done
                       /*
                        while (!(cin >> custApr)) {
                            cout << endl;
                            cout << "Invalid input! Please enter an integer" << endl;


                    cin.clear();
                            cin.ignore(999, '\n');*/
                            /* }*/
                    }


                }






                cout << "Assets list:\n";
                for (const auto asset : assets) {
                    cout << asset.first << ": " << asset.second << "\n";
                }
                cout << endl;
                break;

            }
            else if (hasAsset == "no") {

                cin.ignore(999, '\n');
                break;
            }
            else {
                cout << "Invalid input. Please type (yes/no) only." << endl;
                cin.clear();
                cin.ignore(999, '\n');

            }

        }



    }

    cout << endl;



    //cout << "APR for each category:\n";
    //for (const auto& ratingEntry : rating) {
    //    cout << ratingEntry.first << ": APR - " << ratingEntry.second << "\n";
    //}







    // double morgag_debt_Total = 0.00;

    // float vehicle_debt_Total = 0.00;

   //  float creCard_debt_Total = 0.00;
    return 0;

}

