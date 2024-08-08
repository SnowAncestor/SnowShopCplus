#include <bits/stdc++.h>
#include "ITEMS.h"

using namespace std;

void clearConsole() {
#if defined(_WIN32)
    // For Windows
    system("cls");
#elif defined(__unix__) || defined(__unix) || defined(__APPLE__) || defined(__linux__)
    // For Unix-like systems
    system("clear");
#else
    // If the OS is not recognized
    cout << "\nConsole clearing not supported on this OS.\n";
#endif
}

ITEMS::ITEMS() {
    items.insert(pair<string,int>("Weapons", 0));
    items.insert(pair<string,int>("Helmet", 0));
    items.insert(pair<string,int>("Health Potion", 0));
    items.insert(pair<string,int>("Mana Potion", 0));
    items.insert(pair<string,int>("Food", 0));

    cout << "*** Welcome to the Snow shop for beautiful purposes *** " << "\n";
    cout << "Shop Inventory: " << "\n";
    int i = 0;
    for (const auto& pai : items) {
        cout << (i + 1) << "- " << pai.first << " " << endl;
        i++;
    }
    cout << "***************" << endl;
}



void ITEMS::printItems() {
    bool ihave = false;
    cout << "\n\nYour inventory is: " << endl;
    for (const auto& a : items) {
        if (a.second > 0) {
            ihave = true;
            cout << a.second << " x " << a.first << endl;
        }
    }
    if (!ihave) {
        cout << ">_< There's nothing in your inventory, unfortunately >_<" << endl;
    }
}

ITEMS::~ITEMS() {
    // Destructor
}





void ITEMS::buyItems() {
    int num;
    do {
        cout << "\n\nWhat would you like to buy? Enter -1 to quit. Enter <1-5> ^_^ (or 6 to view the shop items again)" << endl;
        cin >> num;

        // Clear the input buffer to avoid repeated inputs
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (num == -1) break; // Exit the loop if the user enters -1

        switch (num) {
            case 1: {
                string itemName = "Food";
                items[itemName] += 1;
                break;
            }
            case 2: {
                string itemName = "Health Potion";
                items[itemName] += 1;
                break;
            }
            case 3: {
                string itemName = "Helmet";
                items[itemName] += 1;
                break;
            }
            case 4: {
                string itemName = "Mana Potion";
                items[itemName] += 1;
                break;
            }
            case 5: {
                string itemName = "Weapons";
                items[itemName] += 1;
                break;
            }
            case 6: {
                clearConsole();
                cout << "*** Welcome to the Snow shop for beautiful purposes *** " << "\n";
                cout << "Shop Inventory: " << "\n";
                int i = 0;
                for (const auto& pai : items) {
                    cout << (i + 1) << "- " << pai.first << " " << endl;
                    i++;
                }
                cout << "***************" << endl;
                continue; // Show the shop items and ask for input again
            }
            default: {
                cout << "WRONG INPUT! Please enter a number between 1 and 5." << endl;
                continue; // Skip to the next iteration
            }
        }

        // Print the updated inventory
        printItems();

    } while (num != -1); // Repeat until the user decides to quit
}