#include<stdio.h>
//운영체제에서 파일의 끝을 탐지하는 방법
//C언어는 운영체제와 상관없이, 파일의 끝에 도달했을 때 언제나
//특별한 값을 반환하도록 합니다.
//그 값을 EOF(End Of File)라고 하며, 실제로 이 값은 -1을
//나타냅니다
int main(){
    int a,b;

    while(scanf("%d",&a) != EOF){
        printf("%d\n",a);
    }
}
//EOF가 입력될 때까지 계속 입력받는다
//윈도우에서 EOF의 강제 발생은 Ctrl+Z를 누르고 나서 Enter를
//누르면 나갈수 있다
