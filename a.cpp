#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{

    // game loop
    while (1) {
        int action_count; // the number of spells and recipes in play
        cin >> action_count; cin.ignore();
        for (int i = 0; i < action_count; i++) {
            int action_id; // the unique ID of this spell or recipe
            string action_type; // in the first league: BREW; later: CAST, OPPONENT_CAST, LEARN, BREW
            int delta_0; // tier-0 ingredient change
            int delta_1; // tier-1 ingredient change
            int delta_2; // tier-2 ingredient change
            int delta_3; // tier-3 ingredient change
            int price; // the price in rupees if this is a potion
            int tome_index; // in the first two leagues: always 0; later: the index in the tome if this is a tome spell, equal to the read-ahead tax; For brews, this is the value of the current urgency bonus
            int tax_count; // in the first two leagues: always 0; later: the amount of taxed tier-0 ingredients you gain from learning this spell; For brews, this is how many times you can still gain an urgency bonus
            bool castable; // in the first league: always 0; later: 1 if this is a castable player spell
            bool repeatable; // for the first two leagues: always 0; later: 1 if this is a repeatable player spell
            cin >> action_id >> action_type >> delta_0 >> delta_1 >> delta_2 >> delta_3 >> price >> tome_index >> tax_count >> castable >> repeatable; cin.ignore();
        }
        for (int i = 0; i < 2; i++) {
            int inv_0; // tier-0 ingredients in inventory
            int inv_1;
            int inv_2;
            int inv_3;
            int score; // amount of rupees
            cin >> inv_0 >> inv_1 >> inv_2 >> inv_3 >> score; cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;


        // in the first league: BREW <id> | WAIT; later: BREW <id> | CAST <id> [<times>] | LEARN <id> | REST | WAIT
        cout << "BREW 0" << endl;
    }
}