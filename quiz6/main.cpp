#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
void quiz(){
    unsigned int N =10;
    vector <char> letters (N);


    for(int index = 0; index< N; index++) {
        cin >> letters[index];
    }

    sort(letters.begin(),letters.end());
    for(int index = 0; index< N; index++) {
        cout << letters[index];
    }

//Write your implementation here
};
int main()
{
    quiz();
    return 0;
}
