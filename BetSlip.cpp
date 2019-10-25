#include "BetSlip.h"
#include <bits/stdc++.h>
#include "Bet.h"

BetSlip::BetSlip() { this->mult = 1; }

void BetSlip::pushBet(Bet x, int winner) {
  this->bets.push_back(x);
  this->winners.push_back(winner);
  this->mult *= (winner == 0 ? x.getAm() : x.getBm());
}

vector<Bet> BetSlip::getBets() { return this->bets; }

vector<int> BetSlip::getWinners() { return this->winners; }

double BetSlip::getMult() { return this->mult; }

ostream& operator<<(ostream& os, BetSlip& betSlip) {
  vector<Bet> bets = betSlip.getBets();
  os << "====================-NEXT-BETSLIP-====================" << endl;
  for (int i = 0; i < (int)betSlip.getBets().size(); i++) {
    string h = betSlip.getBets()[i].getA();
    os << "-----> " << betSlip.getBets()[i].getA() << " vs "
       << betSlip.getBets()[i].getB() << endl;
    os << "mult: " << betSlip.getBets()[i].getAm() << " / "
       << betSlip.getBets()[i].getBm() << endl;
    os << "winner: "
       << (betSlip.getWinners()[i] == 0 ? betSlip.getBets()[i].getA()
                                        : betSlip.getBets()[i].getB())
       << endl
       << endl;
  }

  os << endl;
  return os;
}
