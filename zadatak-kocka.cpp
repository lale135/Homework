#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Kocka{
private:

    int broj;

public:

    int baci(){
        broj=rand()%6+1;
    }
    int getBroj()const{
        return broj;
    }
};

int main()
{
    srand(time(NULL));

    char c;
    Kocka kocka;
    do{
    cout << "pritisnite 1 da bi bacili kocku i 2 ako hocete da izadete:" << endl;
    cin>>c;
        if(c=='1'){
            kocka.baci();
            cout<<endl<<kocka.getBroj()<<endl<<endl;
        }
    }while(c!='2');

    return 0;
}
