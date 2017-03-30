#include <iostream>

using namespace std;

int main()
{
    int score[3];

    int c=0;

    cin >> score[c];
    c=c+1;
    cin >> score[c];
    c=c+1;
    cin >> score[c];
    c=c+1;

    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;

    int b;
    b = score[0];
    score[0]=score[2];
    score[2]=b;

    cout << score[0] << endl;
    cout << score[1] << endl;
    cout << score[2] << endl;

    return 0;
}
