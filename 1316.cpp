#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    //n을 입력
    int n;
    cin >> n;

    //크기 n인 string 배열 선언
    vector<string> vec(n);

    //그룹단어 체크할 변수. 그룹단어가 아닌 단어를 제외해줄 것
    int check = n;

    //n개의 단어를 입력
    for (int i = 0; i < n; i++)
        cin >> vec[i];


    //그룹 단어 체크

    //n개의 단어에 대해 실행
    for (int i = 0; i < n; i++){

        //알파벳이 다시 나오는지 판별해줄 bool 배열 선언, 초기화
        bool alphabet[26] = {false};

        //string size가 1일 경우에는 그룹단어이므로 break
        if(vec[i].size() == 1)
            break;

        //단어의 size만큼 실행
        for (int j = 1; j < vec[i].size(); j++){
            //j번째 인덱스의 알파벳이 전에 나왔던 알파벳이라면 check수를 감소시키고 다음 단어 체크로 넘어간다
            if(alphabet[vec[i].at(j) - 97]){
                check--;
                break;
            }

            // j-1번째와 j번째 인덱스의 알파벳를 비교해서, 다르다면 j-1번째 단어에 mapping되는 bool값을 true로 바꿔준다
            if(vec[i].at(j-1) != vec[i].at(j))
                alphabet[vec[i].at(j-1) - 97] = true;
        }
    }

    //그룹 단어의 개수를 출력
    cout << check << "\n";

}