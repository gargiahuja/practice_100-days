#include<iostream>
using namespace std;
class Shop
{
    int itemID[100];
    int itemPrice[100];
    static int counter;
    public:
    
    void setPrice(void)
    {
        cout<<"Enter the Item ID and Item price "<<endl;
        cin>>itemID[counter];
        cin>>itemPrice[counter];
        counter++;
    }
    void getPrice(void)
    {
        for(int i=0;i<counter;i++)
        {
            cout<<"The Id and Price of items are"<<endl;
            cout<<"The ID and Price of item number "<<i+1<<" is "<<itemID[i]<<" "<<itemPrice[i]<<endl;
        }
        
    }
    static void count(void)
    {
        cout<<"there are total "<<counter<<" number of items\n";
    }
};
int Shop::counter;

int main()
{
    Shop Shakuntalam, Gargisales,vidisales;
    //Shakuntalam.count();
    Shakuntalam.setPrice();
    Shakuntalam.setPrice();
    Shakuntalam.setPrice();
    Shakuntalam.getPrice();
    Shop::count();

    // Gargisales.setPrice();
    // Gargisales.getPrice();

    // vidisales.setPrice();
    // vidisales.getPrice(n);
    
    return 0;
}