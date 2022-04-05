
using namespace std;

int main()
{
    int total = 0;
    int des1;
    int des2;
    int MaxiTotal = 0;
    for (int i = 0; i < 10000; i++)
    {

        cout << "Les des sont jetes :" << endl;
        srand(time(NULL));
        des1 = rand() % 20 + 1;
        des2 = rand() % 6 + 1;



        cout << "Les résultat son: " << des1 << "-" << des2 << endl;
        total = (des1 + des2);
        cout << "le total est: " << total << endl;

        MaxiTotal += total;


        //system("pause");
    }
    cout << "le total dans 10000 tiarge est de  " << MaxiTotal << " et la moyenne " << MaxiTotal / 10000 << endl;
}
