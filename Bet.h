#ifndef BET_H
#define BET_H

#include <bits/stdc++.h>

using namespace std;

/** Represents a single bet, between two teams, a and b, and
 * stores the multiplier for each team.
 */
class Bet {
 public:
  Bet();
  Bet(string a, string b, double am, double bm);
  string getA();
  string getB();
  double getAm();
  double getBm();

 private:
  string a, b;
  double am, bm;
};

#endif