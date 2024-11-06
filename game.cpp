#include<bits/stdc++.h>
using namespace std;

int space[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int row;
int col;
char token = 'X';

void functionOne(){
    
    string p1;
    string p2;
    cout << "enter the name of player1 : \n";
    cin >> p1;
    cout << "enter the name of player2 : \n";
    cin >> p2;

    cout << "     |     |     \n";
    cout << " " << space[0][0] << "   |  " << space[0][1] << "  | " << space[0][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << " " << space[1][0] << "   |  " << space[1][1] << "  | " << space[1][2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << " " << space[2][0] << "   |  " << space[2][1] << "  | " << space[2][2] << "  \n";
    cout << "     |     |     \n";
}

void funtionTwo(){
    int digit;
    if(token == 'X'){
        cout<<p1<<"enter the position";
        cin>>digit;
    }
    if(token == 'O'){
        cout<<p2<<"enter the position";
        cin>>digit;
    }

    if(digit == 1){
        row = 0;
        col = 0;
    }
    if(digit == 2){
        row = 0;
        col = 1;
    }
    if(digit == 3){
        row = 0;
        col = 2;
    }
    if(digit == 4){
        row = 1;
        col = 0;
    }
    if(digit == 5){
        row = 1;
        col = 1;
    }
    if(digit == 6){
        row = 1;
        col = 2;
    }
    if(digit == 7){
        row = 2;
        col = 0;
    }
    if(digit == 8){
        row = 2;
        col = 1;
    }
    if(digit == 9){
        row = 2;
        col = 2;
    }

    else{
        cout << "Invalid!!" << endl;
    }

    if(token == 'X' && space[row][col] != 'X' && space[row][col] != 'O'){
        space[row][col] = 'X';
        token = 'O';
    }
    else if(token == 'O' && space[row][col] != 'X' && space[row][col] != 'O'){
        space[row][col] = 'O';
        token = 'X';
    }
    else{
        cout << "Space already filled" << endl;
        functionTwo();
    }

}