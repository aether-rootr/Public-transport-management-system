#include "user_system.h"

int draw_user_system (){
	int x = 40, y = 0;
	while (1) {
		system("cls");
		for (int i = 1; i <= 37; i++) printf(" ");
		for (int i = 1; i <= 4; i++) printf(" ");
		cout << u8"��ӭ " << now_user.query_name() << endl;
		for (int i = 1; i <= 37; i++) printf(" ");
		for (int i = 1; i <= 20; i++) printf("*");
		printf("\n");
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j <= 40; j++) {
				if (j == x && i == y) {
					printf(">");
				}
				else printf(" ");
			}
			if (i == 0) printf(u8" ������ѯ ");
			if (i == 1) printf(u8" �û��༭ ");
			if (i == 2) printf(u8" ��·վ��༭ ");
			if (i == 3) printf(u8" �˳� ");
			for (int k = 1; k < 5; k++) printf(" ");
			printf("\n");
		}
		for (int i = 1; i <= 37; i++) printf(" ");
		for (int i = 1; i <= 20; i++) printf("*");
		printf("\n");
		char input;
		input = _getch();
		if (input == 80 && y < 3) y++;
		else if(input == 80) y = 0;
		if (input == 72 && y > 0) y--;
		else if (input == 72) y = 3;
		if (input == 13) break;
	}
	return y;
} 

void  user_system(){
	while (1) {
		int flag = draw_user_system();
		if (flag == 0) {
			bus_inquiry();
			//������ѯ 
		}
		else if (flag == 1) {
			// �û��༭ 
		}
		else if (flag == 2) {
			// ��·վ��༭ 
		}
		else break;
	}
} 