#include<iostream>
using namespace std;
class Car
{
private:
    char *brand;
    char *type;
    int year;
    double price;
public:
    Car(char* br="undefinition",char *ty="undefinition",int ye=2000,double pr=0)
    {
        brand = br;
        type = ty;
        year = ye;
        price = pr;
    }
    char* GetBrand()
    {
        return brand;
    }
    char* GetType()
    {
        return type;
    }
    int GetYear()
    {
        return year;
    }
    double GetPrice()
    {
        return price;
    }
};
int main()
{
    Car car1("FIAT","Palio",2007,6.5);
    cout<<car1.GetBrand (  ) <<"|"<<car1.GetType (  ) <<"|"<<car1.GetYear (  ) <<"|" <<car1.GetPrice (  ) <<endl;
    Car car2;
    cout<<car2.GetBrand (  )<<"|"<<car2.GetType (  )<<"|"<<car2.GetYear (  ) <<"|" <<car2.GetPrice (  )<<endl;
    return 0;
}
