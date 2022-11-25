#include <iostream>



class Player{
public:
  int x = 5;
  int y = 6;

  void Move(int xa, int ya){
    x += xa;
    y += ya;
  }


struct bla {
  int x = 0;

  void UpdateX(int nx){
      x += nx;
  }
}


using namespace std;
int main(){
  Player player;

  player.Move(10, 6);
  cout << player.x << endl;
  cout << player.y << endl;
}

