/* Question:-> 
                You have 15 Rs with you. You go to a shop and shopkeeper tells you price as 1 Rs per chocolate. He also tells you that you can get a chocolate in return of 3 wrappers. How many maximum chocolates you can eat?
*/
#include <iostream>
using namespace std;
int MAX(int money, int price, int wrapper)
{
    if (money < price)
    {
        return 0;
    }

    int Choc = money / price;
    Choc += (Choc - 1) / (wrapper - 1);

    return Choc;
}
int main()
{
    int money = 15;
    int price = 1;
    int wrapper = 3;
    cout << MAX(money, price, wrapper);
    return 0;
}
/* 
                We buy and eat 15 chocolates
                We return 15 wrappers and get 5 more chocolates.
                We return 3 wrappers, get 1 chocolate and eat it
                (keep 2 wrappers). Now we have 3 wrappers. Return
                3 and get 1 more chocolate.
                So total chocolates = 15 + 5 + 1 + 1 
*/