//0 �յأ�1 ǽ�� 3 ���ӣ� 4 ����Ŀ�ĵأ� 6 �ˣ� 7 ������Ŀ�ĵ��غϣ� 9 ����Ŀ�ĵ��غ�



# include <stdio.h>
# include <windows.h>
# include <conio.h>
int dlevel;
int count = 0;
void DrawMap(int map[][10][12]);


int main() {
	//printf("������");
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
		printf("С��Ϸ��������\n\n");
		DrawMap(dmap);
		printf("\n�ؿ�: %d\n", dlevel + 1);
		printf("����: %d\n", count);
		if (count == num_target[dlevel]) {
			printf("��ϲ���أ�\n");
			count = 0;
			dlevel++;
			continue;
		}
		
		if (dlevel > 1) {  //����ؿ������������Ĺؿ�����
			system("cls");
			printf("���Ѿ�ͨ���ˣ�\n\n");
			break;
		}


		//�õ��˵����꣺i��j
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




		ninput = getch();//�������ҵ�ASCII���� -> �ϣ�72���£�80����75���ң�77
		//ÿ�����������¼��������
		//1. ��ǰ���ǿյ�
		//2. ��ǰ�������ӣ�����ǰ���ǿյ�
		//3. ��ǰ����Ŀ�ĵ�
		//4. ��ǰ�������Ӻ�Ŀ�ĵص��غϣ���ǰ���ǿյ�
		//5. ��ǰ�������ӣ�����ǰ����Ŀ�ĵ�
		//6. ��ǰ�������Ӻ�Ŀ�ĵص��غϣ���ǰ����Ŀ�ĵ�
		//����ÿ������������ࣺһ������վ�ڿյ��ϣ�һ������վ��Ŀ�ĵ���
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
	//0 �յأ�1 ǽ�� 3 ���ӣ� 4 ����Ŀ�ĵأ� 6 �ˣ� 7 ������Ŀ�ĵ��غϣ� 9 ����Ŀ�ĵ��غ�
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 12; j++) {
			switch (map[dlevel][i][j]) {
			case 0:
				printf("  ");
				break;
			case 1:
				printf("�~");
				break;
			case 3:
				printf("��");
				break;
			case 4:
				printf("��");
				break;
			case 6:
				printf("��");
				break;
			case 7:
				printf("��");
				break;
			case 9:
				printf("��");
				break;
			}
		}
		printf("\n");
	}
}

