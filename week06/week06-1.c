//week06-1好玩的程式設計
// File-Preference偏好設定，字型放大，接續上週的 week05-5

int [][] b = new int[10][16]; // Java 的 2D 陣列

void setup() {
  size(800, 500);//視窗大小
}

void draw() {
  background(255);//背景白色
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 16; j++) {
      if (b[i][j] == 1) fill(#F3CBFF);//如果陣列有1就放淡紫色
      else fill(255);//否則就放白色
      rect(j * 50, i * 50, 50, 50);//小格子
    }
  }
}

void mousePressed() {
  int i = mouseY / 50, j = mouseX / 50;
  b[i][j] = 1;
}
