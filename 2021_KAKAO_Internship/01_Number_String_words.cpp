#include <iostream>
#include <string>
using namespace std;

#include <string>
#include <vector>

using namespace std;

// 문제 정답
int solution(string str) {
    string numbers[10] = { "zero", "one", "two", "three", "four", "five", 
                            "six", "seven", "eight", "nine" };
    string nums[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    int idx;
    for(int i = 0; i < 10; i++){
        while(true){
            idx = str.find(numbers[i]);
            if(idx == string::npos)
                break;
            
            str.replace(idx, numbers[i].length(), nums[i]);
        }
    }
    
    int answer = 0;
    for(int i = 0; i < str.length(); i++){
        answer = answer * 10;
        answer += (int)str[i] - 48;
    }
    
    return answer;
}

int main(){
    string str;
    cin >> str;

    solution(str);
    
    return 0;
}