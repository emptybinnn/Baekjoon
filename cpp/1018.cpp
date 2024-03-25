#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    
    int r, c;
    cin >> r >> c;
    int cnt;
    
    int cnt2=0;
    int minn = 32;

    vector<string> chessboard(r);
    for (int i = 0; i < r; ++i) {
        cin >> chessboard[i];
    }

    for(int ii=0 ; ii<r-7 ; ii++){
        for(int jj=0 ; jj<c-7 ; jj++){
            cnt = 0;
            for(int i=0 ; i<8 ; i++){
                for(int j=0 ; j<8 ; j++){
                    if (chessboard[ii+i][jj+j] == 'B' && (i+j)%2 == 0) cnt++;
                    if (chessboard[ii+i][jj+j] == 'W' && (i+j)%2 == 1) cnt++;
                }
            }
            cnt = min(cnt, 64-cnt);
            minn = min(minn, cnt);
        }
    }
    cout << minn << endl;

    return 0;
}