#include "main_menu.h"
#include "interaction/bus_inquiry.h"
#include "interaction/user_system.h"
#include "interaction/login.h"
#include "interaction/user.h"


int darw_main_menu()
{
	int x = 40, y = 0;
	while (1) {
		system("cls");
		for (int i = 1; i <= 37; i++) printf(" ");
		for (int i = 1; i <= 4; i++) printf(" ");
		printf("城市公交查询系统\n");
		for (int i = 1; i <= 37; i++) printf(" ");
		for (int i = 1; i <= 20; i++) printf("*");
		printf("\n");
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j <= 40; j++) {
				if (j == x && i == y) {
					printf(">");
				}
				else printf(" ");
			}
			if (i == 0) printf(" 公交查询 ");
			if (i == 1) printf(" 用户登录 ");
			if (i == 2) printf(" 退出 ");
			for (int k = 1; k < 5; k++) printf(" ");
			printf("\n");
		}
		for (int i = 1; i <= 37; i++) printf(" ");
		for (int i = 1; i <= 20; i++) printf("*");
		printf("\n");
		char input;
		input = _getch();
		if (input == 80 && y < 2) y++;
		else if(input == 80) y = 0;
		if (input == 72 && y > 0) y--;
		else if (input == 72) y = 2;
		if (input == 13) break;
	}
	return y;
}

void main_menu()
{
	while (1) {
		int flag = darw_main_menu();
		if (flag == 0) {
			bus_inquiry ();
			//公交查询
		}
		else if (flag == 1) {
			user_system();
			// 用户登录
		}
		else break;
	}
}

int main() {
	main_menu();
}