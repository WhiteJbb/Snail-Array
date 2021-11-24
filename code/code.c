#include <stdio.h>

int max;

int  main()
{
    int dal[50][50];
    int i;
    int y = 0;
    int x = -1;
    int t = 1;
    int p;
    int cnt = 1;
    int jmax; //숫자를 하나씩 줄여나감 배치수 5*5일때 5 4 4 3 3 2 2 1 1순으로 배치됨.

    printf("-----------------------------------------\n\n");
    printf("배열의 크기 n을 입력하세요 (n X n) : ");
    scanf_s("%d", &p);
    printf("\n-----------------------------------------\n\n");
    max = p;

    jmax = max;
    while (0 <= jmax)
    {
        for (i = 0; i < jmax; i++) //행 표현
        {
            x = x + t; //x좌표 1씩 증가
            dal[y][x] = cnt; //cnt 값은 1씩 증가하므로 n이 5일때 1 2 3 4 5 순으로 행에 입력
            cnt++;
        }
        jmax--; //배치수 - 1
        for (i = 0; i < jmax; i++)// 열 표현
        {
            y = y + t; //y좌표 1씩 증가
            dal[y][x] = cnt; //cnt 값은 1씩 증가하므로 6 7 8 9 (jmax가 1줄었으므로 4개) 순으로 열에 입력
            cnt++;
        }

        t = t * -1; // 왼쪽으로 가야하기때문에 t를 - 1로 변환
    }
    for (y = 0; y < max; y++)// 출력 부분
    {
        for (x = 0; x < max; x++)
        {
            printf("%4d", dal[y][x]);
        }
        printf("\n\n");
    }
    printf("-----------------------------------------\n");
    return 0;
}
