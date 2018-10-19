// Manuel Lago
// Drawing a Hexagon

#include <iostream>

using namespace std;

int main()
{
    int n, cht;
    char c;
    
    do
    {
        cin >> n;
        cin >> c;
        
        int chts = n;
        for ( int column = 1 ; column <= n   ; column++ )
        {
            for ( int space = 1 ; space <= n - column ; space++ )
            {
                cout << " ";
            }
            for ( cht = 1; cht <= chts; cht++)
            {
                cout << c;
            }
            cout << endl;
            chts = chts + 2;
        }
        
        chts = chts - 4;
        
        
        for ( int column = n - 1; column >= 1 ; column-- )
        {
            for ( int space = n ; space >= column + 1  ; space--  )
            {
                cout << " ";
            }
            for ( cht = 1; cht <= chts; cht++)
            {
                cout << c;
            }
            cout << endl;
            chts = chts - 2;
        }
    }
    while(n != 0 && c != 0);
    return 0;
}
