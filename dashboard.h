#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <string>
#include <map>
using namespace std;

void showDashboard(
    const string& original,
    const string& encoded,
    const string& decoded,
    const map<char, int>& freqMap,
    const map<char, string>& codeMap
);

#endif
