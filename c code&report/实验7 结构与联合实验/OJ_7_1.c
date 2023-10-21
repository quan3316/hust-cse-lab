#include <stdio.h>
#include<string.h>
#include<malloc.h>
struct stu_grade {
    char id[20];
    char name[15];
    int English;
    int Math;
    int Physics;
    int C;
    int all_grade;
    float ave_grade;
    struct stu_grade* next;
};
struct stu_grade *s,*p[20];
struct stu_grade *head=NULL,*tail=NULL, temp;
int choice, n, i, j, t;
void grade_input(void) {
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        s = (struct stu_grade*)malloc(sizeof(struct stu_grade));
        scanf("%s", s->id);
       scanf("%s", s->name);
        scanf("%d", &s->English);
        scanf("%d", &s->Math);
       scanf("%d", &s->Physics);
        scanf("%d", &s->C);
        if (head == NULL) head = s;
        else tail->next = s;
        tail = s;

    }
    if (tail != NULL)tail->next = NULL;
    printf("完成了%d位同学的成绩输入\n", n);
}
void grade_output(void) {
    s = head;
    for (i = 0; i < n; i++) {
        printf("%s ", s->id);
        printf("%s ", s->name);
        printf("%d ", s->English);
        printf("%d ", s->Math);
        printf("%d ", s->Physics);
        printf("%d\n",s->C);
        s = s->next;
    }
}
void grade_change(void) {
    scanf("%s", temp.id, 15);
    s = head;
    for (i = 0; i < n; i++) {
        if (strcmp(s->id, temp.id) == 0) {
            scanf("%d", &t);
            switch (t) {
            case 0:scanf("%s", s->name); break;
            case 1:scanf("%d", &s->English); break;
            case 2:scanf("%d", &s->Math); break;
            case 3:scanf("%d", &s->Physics); break;
            case 4:scanf("%d", &s->C); break;
            }
            printf("%s ", s->id);
            printf("%s ", s->name);
            printf("%d ", s->English);
            printf("%d ", s->Math);
            printf("%d ", s->Physics);
            printf("%d\n", s->C);
          
        } 
        s = s->next;
    }
}
void grade_record(void) {
    s = head;
    while (s != NULL) {
        s->all_grade = s->English + s->Math + s->Physics + s->C;
        s->ave_grade= 1.0*(s->all_grade) / 4;
        printf("%s ", s->id);
        printf("%s ", s->name);
        printf("%.2f\n", s->ave_grade);
        s = s->next;
    }
}
void grade_report(void) {
    s = head;
    while (s !=NULL) {
        s->all_grade = s->English + s->Math + s->Physics + s->C;
        s->ave_grade = 1.0 * (s->all_grade) / 4;
        printf("%s ", s->id);
        printf("%s ", s->name);
        printf("%d ", s-> all_grade);
        printf("%.2f\n", s->ave_grade);
        s = s->next;
    }
}

int main()
{
    for (;;) {
        scanf("%d", &choice);
        switch (choice) {
        case 0:return 0;
        case 1:grade_input(); break;
        case 2:grade_output(); break;
        case 3:grade_change(); break;
        case 4:grade_record(); break;
        case 5:grade_report(); break;
   
        }
    }
    free(s);
    return 0;
}

