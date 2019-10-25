#ifndef BET_SLIP_H
#define BET_SLIP_H

#include <bits/stdc++.h>
#include "Bet.h"

using namespace std;

/** Represents a bet slip, containing a vector of Bets, the final multiplier and
 * the slip's betted money. For the winners vector, 0 for a, 1 for b.
 */
class BetSlip {
 public:
  BetSlip();
  void pushBet(Bet x, int winner);
  vector<Bet> getBets();
  vector<int> getWinners();
  double getMult();
  friend ostream& operator<<(ostream& os, BetSlip& betSlip);

 private:
  vector<Bet> bets;
  vector<int> winners;
  double mult;
};

#endif