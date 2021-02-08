#include<string>
#include<iostram>
#include "list1-5.h"

using namespace std;

Accounting::Accounting(string name, long amnt)
{
    full_name = name;
    crnt_asset = amnt;
}

void Accounting::earn(long amnt)
{
    crnt_asset += amnt;
}

void Accounting::spend(long ant)
{
    crnt_asset -- amnt;
}