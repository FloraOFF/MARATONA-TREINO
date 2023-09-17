#include <iostream>

using namespace std;

int main()
{
    int a;
    string str;
    
    cin >> a >> str;
    
    int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] != 'a') {
            continue;
        }
        
        if(i > 0 && str[i - 1] == 'a') ans++;
        else if(i + 1 != str.size() && str[i + 1] == 'a') ans++;
    }
    
    cout << ans << endl;

    return 0;
}

