#include <iostream>
using namespace std;

struct Temps
{
    int hora, minut, segon;
};

void cambiar(Temps &t, int seconds)
{
    seconds = seconds % 86400;
    t.segon = seconds % 60;
    t.minut = (seconds / 60) % 60;
    t.hora  = seconds / 3600;
}

void un_segon(const Temps &t, Temps &t1, Temps &t2)
{
    int seconds = t.hora * 3600 + t.minut * 60 + t.segon;
    int s1      = seconds + 1;
    cambiar(t1, s1);
    int s2 = seconds - 1;
    if (s2 < 0) { s2 = 86399; }
    cambiar(t2, s2);
}

int main()
{
    int h, m, s;
    while (cin >> h >> m >> s)
    {
        Temps t{.hora = h, .minut = m, .segon = s};
        Temps t1, t2;
        un_segon(t, t1, t2);
        cout << t1.hora << ' ' << t1.minut << ' ' << t1.segon << endl;
        cout << t2.hora << ' ' << t2.minut << ' ' << t2.segon << endl;
    }
}
