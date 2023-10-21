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
void choose_sort(struct stu_grade* s,int sign) {
    int tmp = 0,i=0;
    int re = head->ave_grade;
    int ans = 0;
    if (sign == 0) {

        for (tail = NULL; head != tail; ) {
            re = head->ave_grade;
            ans = 0;
            for (s = head, p[0] = head; s->next != tail; s = s->next) {
                if (re < s->ave_grade) {
                    re = s->ave_grade;
                    ans = i;
                    printf("%d", i);
                }
                p[i] = s;
                i++;

            }
            tail = s;
            if (re < s->ave_grade) continue;
            else {
                strcpy(temp.id, s->id);
                strcpy(s->id, p[ans]->id);
                strcpy(p[ans]->id, temp.id);

                strcpy(temp.name, s->name);
                strcpy(s->name, p[ans]->name);
                strcpy(p[ans]->name, temp.name);

                tmp = s->ave_grade;
                s->ave_grade = p[ans]->ave_grade;
                p[ans]->ave_grade = tmp;
            }


        }

        s = head;
        while (s != NULL) {

            printf("%s ", s->id);
            printf("%s ", s->name);
            printf("%.2f\n", s->ave_grade);
            s = s->next;
        }
    }
    if (sign == 1) {
        
        for (tail = NULL; head != tail;  ) {
            re = head->ave_grade;
            ans = 0;
            for (s = head,p[0] = head; s->next != tail; s = s->next) {
                if (re > s->ave_grade) {
                    re = s->ave_grade;
                    ans = i;
                    printf("%d", i);
                }
                p[i] = s;
                i++;
                
            }
            tail = s;
            if (re > s->ave_grade) continue;
            else {
                strcpy(temp.id, s->id);
                strcpy(s->id, p[ans]->id);
                strcpy(p[ans]->id, temp.id);

                strcpy(temp.name, s->name);
                strcpy(s->name, p[ans]->name);
                strcpy(p[ans]->name, temp.name);

                tmp = s->ave_grade;
                s->ave_grade = p[ans]->ave_grade;
                p[ans]->ave_grade = tmp;
            }
            
            
        }

        s = head;
        while (s != NULL) {
  
            printf("%s ", s->id);
            printf("%s ", s->name);
            printf("%.2f\n", s->ave_grade);
            s=s->next;
        }
    }
}
void bubble_sort(struct stu_grade* s,int sign) {
    int tmp=0;
    for (tail = NULL; head != tail; tail = s) {
        for (s = head; s->next != tail; s = s->next) {
            if ((sign == 0 && s->ave_grade > s->next->ave_grade) || (sign == 1 && s->ave_grade < s->next->ave_grade)) {
                strcpy(temp.id, s->id);
                strcpy(s->id, s->next->id);
                strcpy(s->next->id, temp.id);
                strcpy(temp.name, s->name);
                strcpy(s->name, s->next->name);
                strcpy(s->next->name, temp.name);
                tmp = s->ave_grade;
                s->ave_grade = s->next->ave_grade;
                s->next->ave_grade = tmp;
            }
        }
    }
    s = head;
    while (s != NULL) {
        printf("%s ", s->id);
        printf("%s ", s->name);
        printf("%.2f\n", s->ave_grade);
        s = s->next;
    }
}
void grade_sort(struct stu_grade* s) {
    s = head;
    while (s != NULL) {
        s->all_grade = s->English + s->Math + s->Physics + s->C;
        s->ave_grade = 1.0 * (s->all_grade) / 4;
        s = s->next;
    }
    int x = 0, y = 0,sign=0;
    scanf("%d%d", &x,&y);
    switch (x) {
    case 0:sign = 0; break;
    case 1:sign = 1; break;
    }
    switch (y) {
    case 0:choose_sort(s,sign); break;
    case 1:bubble_sort(s,sign); break;
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
        case 6:grade_sort(s); break;
        }
    }
    free(s);
    return 0;
}

