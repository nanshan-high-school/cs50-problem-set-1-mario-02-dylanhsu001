#include <iostream>
using namespace std;
void printHashtag(int num) {
    for(int k = 1; k <= num; k++){
        cout << "#";
     }    
}
void triangle() {
    int high;
    int empty;
    int hashtag;
    do{
        cout << "輸入高(只能輸入1~8喔):";
        cin >> high;
    }while(!(high >= 1 && high <= 8));
    //i is 列數 no.
    for(int i = 1; i <= high; i++){
        hashtag=i;
        empty=high-hashtag; 
        //cout << "i:" << i << "\n";
        //cout << "hashtag:" << hashtag << "\n";
        //cout << "empty:" << empty << "\n";
        for(int j = 1; j <= empty; j++){
            cout << " ";
        }
        printHashtag(hashtag);
        cout << "  ";
        printHashtag(hashtag);   
        cout << "\n";

    }


}
    
int main() {
    triangle();
