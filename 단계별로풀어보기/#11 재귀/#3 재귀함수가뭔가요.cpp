#include <stdio.h>
#include <string.h>
int n;
void line(int x){
	for(int i=0;i<n-x;i++){
		printf("____");
	}
	
}

void f(int x){
	line(x);
	printf("\"����Լ��� ������?\"\n");
	if(!x){
		line(x);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		line(x);
		printf("��� �亯�Ͽ���.\n");
		return;
	}
	line(x);
    printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
    line(x);
    printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
    line(x);
    printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n"); 
    f(x-1);
    line(x);
    printf("��� �亯�Ͽ���.\n");
}


int main(){
	
	scanf("%d",&n);
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	f(n);
	
	
	return 0;
}
