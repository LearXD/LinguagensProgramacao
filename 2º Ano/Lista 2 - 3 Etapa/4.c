#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

Date getRecent(Date dates[], int size) {
    Date recent = {dates[0].day, dates[0].month, dates[0].year};
    for (int i = 0; i < size; i++) {
        if(dates[i].year >= recent.year) {
            if(dates[i].month >= recent.month) {
                if(dates[i].day > recent.day) {
                    recent.day = dates[i].day;
                    recent.month = dates[i].month;
                    recent.year = dates[i].year;
                }
            }
        }
    }
    return recent;
}


void main () {
    int size;

    printf("Digite quantas datas vai inserir:\n");
    scanf("%d", &size);

    Date dates[size];
    for (int i = 0; i < size; i++) {
        printf("Digite os dados da Data %d\n", i + 1);

        printf("Digite o dia: \n");
        scanf("%d", &dates[i].day);

        printf("Digite o mes: \n");
        scanf("%d", &dates[i].month);

        printf("Digite o ano: \n");
        scanf("%d", &dates[i].year);
    }

    Date recent = getRecent(dates, size);
    printf("A data mais recente e a do dia %d/%d/%d", recent.day, recent.month, recent.year);

}
