//0 空地，1 墙， 3 箱子， 4 箱子目的地， 6 人， 7 箱子与目的地重合， 9 人与目的地重合



# include <stdio.h>
# include <windows.h>
# include <conio.h>
int dlevel;
int count = 0;
void DrawMap(int map[][10][12]);


int main() {
	//printf("推箱子");
	system("mode con cols=60 lines=20");
	int i, j;
	int ninput;


	int dmap[2][10][12] = {
		{
			{ 0,0,0,1,1,1,0,0,0,0,0,0 },
			{ 0,0,0,1,4,1,0,0,0,0,0,0 },
			{ 1,1,1,1,3,1,1,1,1,1,1,1 },
			{ 1,4,0,0,3,6,3,0,0,0,4,1 },
			{ 1,1,1,1,1,1,3,1,1,1,1,1 },
			{ 0,0,0,0,0,1,0,1,0,0,0,0 },
			{ 0,0,0,0,0,1,0,1,0,0,0,0 },
			{ 0,0,0,0,0,1,0,1,0,0,0,0 },
			{ 0,0,0,0,0,1,4,1,0,0,0,0 },
			{ 0,0,0,0,0,1,1,1,0,0,0,0 }
		},
		{
			{ 0,0,0,0,0,0,0,0,0,0,0,0 },
			{ 0,0,0,1,1,1,1,1,1,1,0,0 },
			{ 0,0,0,1,0,6,4,4,4,1,0,0 },
			{ 0,0,0,1,0,0,0,1,1,1,1,0 },
			{ 0,0,1,1,1,3,0,0,0,0,1,0 },
			{ 0,0,1,0,0,0,1,3,1,0,1,0 },
			{ 0,0,1,0,3,0,1,0,0,0,1,0 },
			{ 0,0,1,0,0,0,1,1,1,1,1,0 },
			{ 0,0,1,1,1,1,1,0,0,0,0,0 },
			{ 0,0,0,0,0,0,0,0,0,0,0,0 }
		}
	};




	int num_target[2] = { 0 };
	for (dlevel = 0; dlevel < 2; dlevel++) {
		for (i = 0; i < 10; i++) {
			for (int j = 0; j < 12; j++) {
				if (dmap[dlevel][i][j] == 4) {
					num_target[dlevel]++;


				}
			}
		}
	}


	dlevel = 0;
	while (1) {
		system("cls");
		printf("小游戏：推箱子\n\n");
		DrawMap(dmap);
		printf("\n关卡: %d\n", dlevel + 1);
		printf("分数: %d\n", count);
		if (count == num_target[dlevel]) {
			printf("恭喜过关！\n");
			count = 0;
			dlevel++;
			continue;
		}
		
		if (dlevel > 1) {  //如果关卡数超过了题库的关卡数量
			system("cls");
			printf("你已经通关了！\n\n");
			break;
		}


		//得到人的坐标：i，j
		for (i = 0; i < 10; i++) {
			for (j = 0; j < 12; j++) {
				if (dmap[dlevel][i][j] == 6 || dmap[dlevel][i][j] == 9) {
					break;
				}
			}
			if (dmap[dlevel][i][j] == 6 || dmap[dlevel][i][j] == 9) {
				break;
			}
		}




		ninput = getch();//上下左右的ASCII码是 -> 上：72，下：80，左：75，右：77
		//每个方向都有以下几种情况：
		//1. 人前面是空地
		//2. 人前面是箱子，箱子前面是空地
		//3. 人前面是目的地
		//4. 人前面是箱子和目的地的重合，再前面是空地
		//5. 人前面是箱子，箱子前面是目的地
		//6. 人前面是箱子和目的地的重合，再前面是目的地
		//以上每种情况各分两类：一类是人站在空地上，一类是人站在目的地上
		switch (ninput) {
		case 72:
			if (dmap[dlevel][i - 1][j] == 0) {
				dmap[dlevel][i - 1][j] = 6;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i - 1][j] == 3 && dmap[dlevel][i - 2][j] == 0) {
				dmap[dlevel][i - 1][j] = 6;
				dmap[dlevel][i - 2][j] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i - 1][j] == 4) {
				dmap[dlevel][i - 1][j] = 9;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i - 1][j] == 7 && dmap[dlevel][i - 2][j] == 0) {
				dmap[dlevel][i - 1][j] = 9;
				dmap[dlevel][i - 2][j] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count--;
			}
			if (dmap[dlevel][i - 1][j] == 3 && dmap[dlevel][i - 2][j] == 4) {
				dmap[dlevel][i - 1][j] = 6;
				dmap[dlevel][i - 2][j] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count++;
			}
			if (dmap[dlevel][i - 1][j] == 7 && dmap[dlevel][i - 2][j] == 4) {
				dmap[dlevel][i - 1][j] = 9;
				dmap[dlevel][i - 2][j] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			break;
		case 75:
			if (dmap[dlevel][i][j - 1] == 0) {
				dmap[dlevel][i][j - 1] = 6;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i][j - 1] == 3 && dmap[dlevel][i][j - 2] == 0) {
				dmap[dlevel][i][j - 1] = 6;
				dmap[dlevel][i][j - 2] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i][j - 1] == 4) {
				dmap[dlevel][i][j - 1] = 9;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i][j - 1] == 7 && dmap[dlevel][i][j - 2] == 0) {
				dmap[dlevel][i][j - 1] = 9;
				dmap[dlevel][i][j - 2] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count--;
			}
			if (dmap[dlevel][i][j - 1] == 3 && dmap[dlevel][i][j - 2] == 4) {
				dmap[dlevel][i][j - 1] = 6;
				dmap[dlevel][i][j - 2] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count++;
			}
			if (dmap[dlevel][i][j - 1] == 7 && dmap[dlevel][i][j - 2] == 4) {
				dmap[dlevel][i][j - 1] = 9;
				dmap[dlevel][i][j - 2] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				break;
		case 80:
			if (dmap[dlevel][i + 1][j] == 0) {
				dmap[dlevel][i + 1][j] = 6;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i + 1][j] == 3 && dmap[dlevel][i + 2][j] == 0) {
				dmap[dlevel][i + 1][j] = 6;
				dmap[dlevel][i + 2][j] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i + 1][j] == 4) {
				dmap[dlevel][i + 1][j] = 9;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i + 1][j] == 7 && dmap[dlevel][i + 2][j] == 0) {
				dmap[dlevel][i + 1][j] = 9;
				dmap[dlevel][i + 2][j] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count--;
			}
			if (dmap[dlevel][i + 1][j] == 3 && dmap[dlevel][i + 2][j] == 4) {
				dmap[dlevel][i + 1][j] = 6;
				dmap[dlevel][i + 2][j] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count++;
			}
			if (dmap[dlevel][i + 1][j] == 7 && dmap[dlevel][i + 2][j] == 4) {
				dmap[dlevel][i + 1][j] = 9;
				dmap[dlevel][i + 2][j] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			break;
		case 77:
			if (dmap[dlevel][i][j + 1] == 0) {
				dmap[dlevel][i][j + 1] = 6;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i][j + 1] == 3 && dmap[dlevel][i][j + 2] == 0) {
				dmap[dlevel][i][j + 1] = 6;
				dmap[dlevel][i][j + 2] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i][j + 1] == 4) {
				dmap[dlevel][i][j + 1] = 9;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			if (dmap[dlevel][i][j + 1] == 7 && dmap[dlevel][i][j + 2] == 0) {
				dmap[dlevel][i][j + 1] = 9;
				dmap[dlevel][i][j + 2] = 3;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count--;
			}
			if (dmap[dlevel][i][j + 1] == 3 && dmap[dlevel][i][j + 2] == 4) {
				dmap[dlevel][i][j + 1] = 6;
				dmap[dlevel][i][j + 2] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
				count++;
			}
			if (dmap[dlevel][i][j + 1] == 7 && dmap[dlevel][i][j + 2] == 4) {
				dmap[dlevel][i][j + 1] = 9;
				dmap[dlevel][i][j + 2] = 7;
				if (dmap[dlevel][i][j] == 6) {
					dmap[dlevel][i][j] = 0;
				}
				else {
					dmap[dlevel][i][j] = 4;
				}
			}
			break;
			}


		}
	}
	system("pause");
	return 0;
}


void DrawMap(int map[][10][12]) {
	//0 空地，1 墙， 3 箱子， 4 箱子目的地， 6 人， 7 箱子与目的地重合， 9 人与目的地重合
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 12; j++) {
			switch (map[dlevel][i][j]) {
			case 0:
				printf("  ");
				break;
			case 1:
				printf("▇");
				break;
			case 3:
				printf("□");
				break;
			case 4:
				printf("☆");
				break;
			case 6:
				printf("♀");
				break;
			case 7:
				printf("★");
				break;
			case 9:
				printf("♀");
				break;
			}
		}
		printf("\n");
	}
}

