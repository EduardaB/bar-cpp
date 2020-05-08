#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int c, r, e;
    double cm, cv, i, t;

    // Pt. 1: leitura de dados
    cout << "Sexo: ";
    cin >> s;
    cout << "Quantidade de cervejas: ";
    cin >> c;
    cout << "Quantidade de refrigerantes: ";
    cin >> r;
    cout << "Quantidade de espetinhos: ";
    cin >> e;

    // Pt. 2: calculos
    if (s=="F")
    {
        i = 8.0;
    }
    else
    {
        i = 10.0;
    }
    cm = c*5.0 + r*3.0 + e*7.0;
    if (cm>30.0)
    {
        cv = 0.0;
    }
    else
    {
        cv = 4.0;
    }
    t = i+cm+cv;

    // Pt. 3: mostrar relatorio

    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO: " << endl;
    cout << "Consumo = R$ " << cm << endl;
    if (cv==0.0)
    {
        cout << "Isento de Couvert" << endl;
    }
    else
    {
        cout << "Couvert = R$ " << cv << endl;
    }
    cout << "Ingresso = R$ " << i << endl;
    cout << endl << "Valor a pagar = R$ " << t << endl;

    return 0;
}
