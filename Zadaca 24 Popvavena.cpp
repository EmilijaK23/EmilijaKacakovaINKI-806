#include <iostream>
using namespace std;

// Emilija Kachakova INKI#806

// Zadaca broj 24

// Kodiranje na tekst spored daden kluc 24

// Programa vo koja preku meni ke se odbira dali vnesen sting kee se kodira ili ke se dekodira. Kodiranje i dekodiranje ke se resat so 2 funkcii.
// Klucot na kodiranje: Vo tekstot se koristat samo golemi bukvi od azbuka i cifri.
// Sekoja bukva se menuva so bukva koja e 4 mesta pred nea vo abecedata.
// Sekoj cifra 0, 1, 2, 3, 4, se zamenuva so malite bukvi a, b, c, d, e, a cifrite 5, 6, 7, 8, 9, se zamenuvaat so '_', '!', '?', '@', '&'.

// Zadacata da se testira so 2 stinga. Prvo da se kodiraat a potoa kodiranata verzija da se dekodira.

void encode()

{

    string text, coded;
    int i;
    cin.get();

    cout<<"- Kodiranje: " <<endl<<endl;
    cout<<"*NAPOMENA* Ako vnesite mali bukvi ili nepoznati znaci nema da se kodiraat, tuku samo ke go ispecati toa sto go vnesovte!"<<endl;

    cout<<"Vnesete tekst koj sakate da se kodira: "<<endl;

    getline(cin, text);
    coded=text;

    for (i=0; i<text.length(); i++)

    {

        switch (text[i])

        {

            case '0': coded[i]='a'; break; case '1': coded[i]='b'; break;
            case '2': coded[i]='c'; break; case '3': coded[i]='d'; break;
            case '4': coded[i]='e'; break; case '5': coded[i]='_'; break;
            case '6': coded[i]='!'; break; case '7': coded[i]='?'; break;
            case '8': coded[i]='@'; break; case '9': coded[i]='&'; break;
            case 'A': coded[i]='W'; break; case 'N': coded[i]='J'; break;
            case 'B': coded[i]='X'; break; case 'O': coded[i]='K'; break;
            case 'C': coded[i]='Y'; break; case 'P': coded[i]='L'; break;
            case 'D': coded[i]='Z'; break; case 'Q': coded[i]='M'; break;
            case 'E': coded[i]='A'; break; case 'R': coded[i]='N'; break;
            case 'F': coded[i]='B'; break; case 'S': coded[i]='O'; break;
            case 'G': coded[i]='C'; break; case 'T': coded[i]='P'; break;
            case 'H': coded[i]='D'; break; case 'U': coded[i]='Q'; break;
            case 'I': coded[i]='E'; break; case 'V': coded[i]='R'; break;
            case 'J': coded[i]='F'; break; case 'W': coded[i]='S'; break;
            case 'K': coded[i]='G'; break; case 'X': coded[i]='T'; break;
            case 'L': coded[i]='H'; break; case 'Y': coded[i]='U'; break;
            case 'M': coded[i]='I'; break; case 'Z': coded[i]='V'; break;

        }

    }

    cout<<"Kodiranata verzija na vneseniot tekst e:"<<endl<<coded<<endl<<endl;

}

void decode()

{

    string text, coded;
    int i;
    cin.get();

    cout<<"- Dekodiranje: " <<endl<<endl;
    cout<<"*NAPOMENA* Ako vnesite mali bukvi ili nepoznati znaci nema da se dekodiraat, tuku samo ke go ispecati toa sto go vnesovte!"<<endl;

    cout<<"Vnesete kodiran tekst koj sakate da se dekodira: "<<endl;

    getline(cin, coded);
    text=coded;

    for (i=0; i<text.length(); i++)

    {

        switch (coded[i])

        {

            case 'a': text[i]='0'; break; case 'b': text[i]='1'; break;
            case 'c': text[i]='2'; break; case 'd': text[i]='3'; break;
            case 'e': text[i]='4'; break; case '_': text[i]='5'; break;
            case '!': text[i]='6'; break; case '?': text[i]='7'; break;
            case '@': text[i]='8'; break; case '&': text[i]='9'; break;
            case 'W': text[i]='A'; break; case 'J': text[i]='N'; break;
            case 'X': text[i]='B'; break; case 'K': text[i]='O'; break;
            case 'Y': text[i]='C'; break; case 'L': text[i]='P'; break;
            case 'Z': text[i]='D'; break; case 'M': text[i]='Q'; break;
            case 'A': text[i]='E'; break; case 'N': text[i]='R'; break;
            case 'B': text[i]='F'; break; case 'O': text[i]='S'; break;
            case 'C': text[i]='G'; break; case 'P': text[i]='T'; break;
            case 'D': text[i]='H'; break; case 'Q': text[i]='U'; break;
            case 'E': text[i]='I'; break; case 'R': text[i]='V'; break;
            case 'F': text[i]='J'; break; case 'S': text[i]='W'; break;
            case 'G': text[i]='K'; break; case 'T': text[i]='X'; break;
            case 'H': text[i]='L'; break; case 'U': text[i]='Y'; break;
            case 'I': text[i]='M'; break; case 'V': text[i]='Z'; break;

        }

    }

    cout<<"Dekodiranata verzija na vneseniot tekst e:"<<endl<<text<<endl<<endl;

}

int main()

{

    char izbor;
    do

    {

    cout<<"Vnesete ja bukvata  na postapkata sto sakate da ja napravite ---> [K] - Kodiraj | [D] - Dekodiraj | [I] - Izlez: "; cin >> izbor;

    if ((izbor=='k') || (izbor=='K')) encode(); else
    if ((izbor=='d') || (izbor=='D')) decode(); else
    if ((izbor=='i') || (izbor=='I')) break; else cout<<"Vnesovte nepostoecki karakter"<<endl<<endl;

    }

    while ((izbor!='i') || (izbor!='I'));

    cout<<"Izbravte IZLEZ, programata zavrshi..."<<endl;

    return 0;

}
