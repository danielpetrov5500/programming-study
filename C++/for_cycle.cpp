#include <iostream>
using namespace std;

//Exercise 1
/*
int main() {
    int n;
    int result = 0;
    cout << "Please input number n: ";
    cin >> n;
    for(int i=0; i<=n; i++) {
        result += i;
    }
    cout << result << endl;
    return 0;
} */

//Exercise 2
/*
int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i<=n; i++) {
        if (i%2==0) sum += i;
    }
    cout << sum << endl;
    return 0;
} */

//Exercise 3
/*
int main() {
    int n;
    int result = 1;
    cin >> n;
    for(int i=1; i<=n; i++) result *= i;
    cout << result << endl;
    return 0;
}*/

//Exercise 4
/*
int main() {
    string s;
    cin>>s;
    cout<<s.length();
}*/

//Exercise 5
/*
#include <cmath>
int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cout <<"2^"<<i<<" = "<< pow(2,i) << endl;
    }
}*/

//Exercise 6
/*
int main() {
    int n; int result = 1; cin>>n;
    for (int i = 1; i <= n; i++) result *=i;
    cout << result; return 0;
} */

//Exercise 7
/*
int main() {
    string n; cin >> n; string s="";
    for (int i = n.length()-1; i > -1; i--) s += n[i];
    cout << s << endl;
    return 0;
} */

//Exercise 8
/*
int main() {
    for (int i=1; i<=10; i++) {
        for (int n=1; n<=10; n++) cout<<i*n<<" ";
        cout<<endl;
    }
}*/

//Exercise 9
/*
int main() {
    float sum = 0; int n; cin >> n;
    for (float i = 1; i <= n; i++) sum += 1/i;
    cout << sum << endl; return 0;
}*/

//Exercise 10
/*
#include <cmath>
int main() {
    int n; cin>>n; int counter;
    for(float i=1;i<=n;i++) {
        counter=0;
        for(float j=1;j<n;j++) {
            if (fmod(i,j)==0.0) {
                if (j==i || j==1);
                else counter++;
            }
        }
        if (counter == 0) cout<<i << " ";
    }
}*/