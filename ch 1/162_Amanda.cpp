/*
*OnlineJudge
*162 - Beggar My Neighbour
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string card;
    while (1) {
        cin >> card;
        if (card == "#")
            break;
        
        deque <string> player, dealer;
        player.push_back(card);

        bool p = false;
        for (int i = 1; i < 52; i++) {
            cin >> card;
            if (p)
                player.push_back(card);
            else
                dealer.push_back(card);
            p = !p;
        }

        queue <string> table;
        p = true;
        int place = 1, take = 0;
        bool lose = false;
        while (!lose) {
            if (p) {
                while (place && player.size()) {
                    card = player.back();
                    player.pop_back();
                    table.push(card);
                    place--;
                    //cout << "player: " << card << " " << player.size() << endl;

                    if (card[1] == 'J') {
                        place = 1;
                        take = 1;
                        break;
                    } else if (card[1] == 'Q') {
                        place = 2;
                        take = 1;
                        break;
                    } else if (card[1] == 'K') {
                        place = 3;
                        take = 1;
                        break;
                    } else if (card[1] == 'A') {
                        place = 4;
                        take = 1;
                        break;
                    }
                }

                if ((take == 2) && !place) {
                    while (table.size()) {
                        card = table.front();
                        table.pop();
                        dealer.push_front(card);
                    }
                    take = 0;
                }
            
                if (place && player.empty() && (take != 1))
                    lose = true;

            } else {
                while (place && dealer.size()) {
                    card = dealer.back();
                    dealer.pop_back();
                    table.push(card);
                    place--;
                    //cout << "dealer: " << card << " " << dealer.size() << endl;

                    if (card[1] == 'J') {
                        place = 1;
                        take = 2;
                        break;
                    } else if (card[1] == 'Q') {
                        place = 2;
                        take = 2;
                        break;
                    } else if (card[1] == 'K') {
                        place = 3;
                        take = 2;
                        break;
                    } else if (card[1] == 'A') {
                        place = 4;
                        take = 2;
                        break;
                    }
                }

                if ((take == 1) && !place) {
                    while (table.size()) {
                        card = table.front();
                        table.pop();
                        player.push_front(card);
                    }
                    take = 0;
                }

                if (place && dealer.empty() && (take != 2))
                    lose = true;
            }

            //cout << "table: " << table.size() << endl;
            p = !p;
            if (!take)
                place = 1;
        }

        if (player.size())
            cout << 2 << setw(3) << player.size() << endl;
        else
            cout << 1 << setw(3) << dealer.size() << endl;

    }
    return 0;
}