

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;
void removeFirstZeros(string& s){

    for(int i=0;i<s.size();i++){
        if(s.at(0)=='0')
            s.erase(0,1);
        else
            return;
    }
}

int myAtoi(string s) {
    int result=0;
    long long k=1;
    int reverse=1;
    bool continuous=false;
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    removeFirstZeros(s);
    for(int i=s.size()-1;i>=0;i--){
        if(result==0 || continuous==true){
            if( k>1000000000 && s.find("-") != std::string::npos)
                return -2147483648;
            else if( k>1000000000 && s.find("-")  == std::string::npos)
                return 2147483647;

            switch (s.at(i)) {
                case '.':
                    result = 0;
                    k = 1 ;
                    continuous = false;
                    break;
                case '0':
                    result += 0 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '1':
                    result += 1 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '2':
                    result += 2 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '3':
                    result += 3 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '4':
                    result += 4 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '5':
                    result += 5 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '6':
                    result += 6 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '7':
                    result += 7 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '8':
                    result += 8 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '9':
                    result += 9 * k;
                    k = k * 10;
                    continuous = true;
                    break;
                case '+':
                    continuous = false;
                    break;
                case '-':
                    reverse=-1;
                    result = result * reverse;
                    continuous = false;
                    break;
                default:
                    continuous = false;
                    break;
            }
        }
        else if(48<=s.at(i)<=57 || 65<=s.at(i)<=90 || 97<=s.at(i)<=122){
            result=0;
            continuous=false;
            k=1;
        }
    }
    return result;
}


 // Driver code
 int main()
 {

    /*cout<<myAtoi("   -42")<<endl;
    cout<<myAtoi("4193 with words")<<endl;
    cout<<myAtoi("42")<<endl;
    cout<<myAtoi("words and 987")<<endl;*/
    //cout<<myAtoi("-91283472332")<<endl;
    cout<<myAtoi("3.128")<<endl;
     cout<<myAtoi("21474836460")<<endl;
     cout<<myAtoi("  0000000000012345678")<<endl;
    cout<<(-91283472332%-2147483648);

    return 0;
 }


