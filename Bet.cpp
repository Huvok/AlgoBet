#include "Bet.h"
#include <bits/stdc++.h>

using namespace std;

Bet::Bet() {}

Bet::Bet(string a, string b, double am, double bm)
    : a(a), b(b), am(am), bm(bm) {}

string Bet::getA() { return this->a; }

string Bet::getB() { return this->b; }

double Bet::getAm() { return this->am; }

double Bet::getBm() { return this->bm; }
