#include <stdio.h>

void input(int a[], int cnt){
	int i;
	printf("%d개의 과목 점수를 입력하세요 >> ", cnt);
	printf("\n");
	for(i = 0; i < cnt; i++){
		printf("%d)Input score >> ", i+1);
		scanf("%d", &a[i]);
	}
}

int pass(int a[], int cnt){
	int i, sum = 0, avg;
	for(i = 0; i < cnt; i++){
		if(a[i] < 40){
			return 0;
		} 
		sum += a[i];
	}
	avg = sum /cnt;
	if(avg < 60) {
		return 0;
	}
	return 1;
}

int main(){
	
	int score[3];
	input(score, 3);
	if(pass(score, 3)){
		printf("축하합니다. 합격입니다.\n");
	}else{
		printf("아쉽습니다. 불합격입니다.\n");
	}
	
	return 0;
}