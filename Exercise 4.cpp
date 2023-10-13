#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(2, "rus");
    double R;
    int fir, sec, thir, four, firsec, thirfour;
    printf("Введите денежную сумму:\n");
    printf("R = ");
    scanf_s("%lf", &R);
    fir = int(R * 100) / 1000;
    sec = (int(R * 100) / 100) % 10;
    thir = (int(R * 100) / 10) % 10;
    four = int(R * 100) % 10;
    firsec = int(R * 100) / 100;
    thirfour = int(R * 100) % 100;
    switch (fir)
    {
    case 1:
        switch (firsec)
        {
        case 10: printf("десять рублей "); break;
        case 11: printf("одиннадцать рублей "); break;
        case 12: printf("двенадцать рублей "); break;
        case 13: printf("тринадцать рублей "); break;
        case 14: printf("четырнадцать рублей "); break;
        case 15: printf("пятнадцать рублей "); break;
        case 16: printf("шестнадцать рублей "); break;
        case 17: printf("семнадцать рублей "); break;
        case 18: printf("восемнадцать рублей "); break;
        case 19: printf("девятнадцать рублей"); break;
        } break;
    case 2: printf("Двадцать "); goto here1;
    case 3: printf("Тридцать "); goto here1;
    case 4: printf("Сорок "); goto here1;
    case 5: printf("Пятьдесят "); goto here1;
    case 6: printf("Шестьдесят "); goto here1;
    case 7: printf("Семьдесят "); goto here1;
    case 8: printf("Восемьдесят "); goto here1;
    case 9: printf("Девяносто "); goto here1;
    case 10: printf("Сто "); goto here1;
    here1: switch (sec)
    {
    case 0: printf("рублей "); break;
    case 1: printf("один рубль "); break;
    case 2: printf("два рубля "); break;
    case 3: printf("три рубля "); break;
    case 4: printf("четыре рубля "); break;
    case 5: printf("пять рублей "); break;
    case 6: printf("шесть рублей "); break;
    case 7: printf("семь рублей "); break;
    case 8: printf("восемь рублей "); break;
    case 9: printf("девять рублей "); break;
    }
    }
    switch (thir)
    {
    case 1:
        switch (thirfour)
        {
        case 10: printf("десять копеек"); break;
        case 11: printf("одиннадцать копеек"); break;
        case 12: printf("двенадцать копеек"); break;
        case 13: printf("тринадцать копеек"); break;
        case 14: printf("четырнадцать копеек"); break;
        case 15: printf("пятнадцать копеек"); break;
        case 16: printf("шестнадцать копеек"); break;
        case 17: printf("семнадцать копеек"); break;
        case 18: printf("восемнадцать копеек"); break;
        case 19: printf("девятнадцать копеек"); break;
        }break;
    case 2: printf("двадцать "); goto here2;
    case 3: printf("тридцать "); goto here2;
    case 4: printf("сорок "); goto here2;
    case 5: printf("пятьдесят "); goto here2;
    case 6: printf("шестьдесят "); goto here2;
    case 7: printf("семьдесят "); goto here2;
    case 8: printf("восемьдесят "); goto here2;
    case 9: printf("девяносто "); goto here2;
    here2: switch (four)
    {
    case 0: printf("копеек "); break;
    case 1: printf("одна копейка"); break;
    case 2: printf("две копейки"); break;
    case 3: printf("три копейки"); break;
    case 4: printf("четыре копейки"); break;
    case 5: printf("пять копеек"); break;
    case 6: printf("шесть копеек"); break;
    case 7: printf("семь копеек"); break;
    case 8: printf("восемь копеек"); break;
    case 9: printf("девять копеек"); break;
    }
    }
    return 0;
}
