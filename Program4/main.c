//Fall 2022 Programming Assignment 4 - Structure
//Dongin Kim
#include <stdio.h>
#include <string.h>
#define LEN 14
#define CSIZE 4
#define SCORES 3

struct name
{
    char first[LEN];
    char last[LEN];
};

struct student
{
    struct name;
    float scores[3];
    float average;
};

void get_scores(struct student ar[], int lim);
void find_means(struct student ar[], int lim);
void show_class(const struct student ar[], int lim);
void show_ave(const struct student ar[], int lim);

int main(void)
{
    struct student class[CSIZE] ={
        { "Flip", "Snide"},
        { "Clare", "Voyans"},
        { "Bingo", "Higgs"},
        { "Fawn", "Hunter"}
    };
    get_scores(class, CSIZE);
    find_means(class, CSIZE);
    show_class(class, CSIZE);
    show_ave(class, CSIZE);
    return 0;
}

void get_scores(struct student ar[], int lim)
{
    for (int i = 0; i < lim; i++)
    {
        printf("Please enter 3 scores for %s %s:\n", ar[i].first, ar[i].last);
        scanf("%f%f%f", &ar[i].scores[0], &ar[i].scores[1], &ar[i].scores[2]);
    }
}

void find_means(struct student ar[], int lim)
{
    for (int i = 0; i < lim; i++)
    {
        ar[i].average = (ar[i].scores[0] + ar[i].scores[1] + ar[i].scores[2]) / 3;
    }
}

void show_class(const struct student ar[], int lim)
{
    for (int i = 0; i < lim; i++)
    {
        printf("%s %s:", ar[i].first, ar[i].last);
        printf("   %.2f   %.2f   %.2f", ar[i].scores[0], ar[i].scores[1], ar[i].scores[2]);
        printf("  %.2f", ar[i].average);
        printf("\n");
    }
    printf("\n\n");
}

void show_ave (const struct student ar[], int lim)
{
    float avg;
    float sum;

    printf("QUIZ AVERAGES:");

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < lim; j++)
        {
            sum += ar[j].scores[i];
        }
        avg = sum / 4;
        printf("  %.2f", avg);
    }

    avg = (ar[0].average + ar[1].average + ar[2].average + ar[3].average) / 4;
    printf ("    ALL = %.2f", avg);
}
