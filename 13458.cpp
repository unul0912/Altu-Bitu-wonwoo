//
// Created by 2076073 on 2021-09-09.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//정렬할 배열, 정렬한 배열
vector<int> A;


int main() {
    int n, b, c;


    //입력
    cin >> n;
    A.assign(n, 0);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cin >> b;
    cin >> c;

    long long watcher = n;

    //연산
    for(int i=0; i<n; i++){

        if(A[i]-b > 0)
            if((A[i]-b) % c == 0)
                watcher += (A[i]-b) / c;
            else
                watcher += ((A[i]-b) / c + 1);

    }

    //출력

    cout << watcher << '\n';
}

