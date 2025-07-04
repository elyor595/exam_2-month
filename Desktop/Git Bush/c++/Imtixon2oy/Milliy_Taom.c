#include <stdio.h>

int main() { system("cls");
    int tanlov, shorva = 20000, manti = 14000, palov = 30000, tuxum_barak = 15000, yumurta_barak = 20000, cola = 12000, fanta = 12000, moxito = 15000;
    int zakas = 0, chek = 0;
    int keks = 12000, peroq = 10000, sabzavot = 20000, shakolat = 25000, karta = 1000000, umumiy_check = 0, foydalanuvchi, karta_parol ;
    char s;
    printf("\t\tassalomu alekum \n\n");
    printf("menu tanlang: \n");
menu:
    printf("shorva  1 tanlang\n");
    printf("manti  2 tanlong\n");
    printf("palov  3 tanlang\n");
    printf("Tuxum barak  4 tanlang\n");
    printf("Somsa  5 tanlang\n");
ichimlik:
    printf("\n\n\t\tsuvlardan tanlang: \n\n");
    printf("coco cola 6 tanlang\n");
    printf("fanta  7 tanlang\n");
    printf("moxito  8 tanlang\n");
    scanf("%d", &tanlov);
    if (tanlov == 1)
    {
        system("cls");
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek = chek + shorva * zakas;
        printf("zakasingiz 10 minutda tayyro boladi.\n");
        printf("yana nimadir zakas qilish uchun ENTER bosing: ");
        s = fgetc(stdin);
        s = fgetc(stdin);
        system("cls");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            system("cls");
            goto menu;
        }
        if (tanlov == 2)
        {
            system("cls");
            printf("\n\t\tdesertga nimadir zakas qilasizmi: \n");
            printf("\t\n1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
            desert:
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;

                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                    printf("\t\tyana zakas berasizmi\n");
                    printf("1.ha\t 2.yoq");
                    if (tanlov == 1)
                    {
                        goto desert;
                    }
                    if (tanlov == 2)
                    {
                        printf("yana nimadir kerak bolsa chaqirarsiz\n");
                    }
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek = chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("nimadir ichasizmi : \n");
                printf("\t1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    system("cls");
                    printf("sizning checkingiz %d som boldi ", chek);
                    printf("\nnimada to'laysiz\n");
                    printf("1.karta \t 2.naxt\n");
                    scanf("%d", &tanlov);
                    if (tanlov == 1)
                    {
                        printf("pin codni kiriting: ");
                    parol:
                        scanf("%d", &karta_parol);
                        if (karta_parol == 7070)
                        {
                            umumiy_check = karta - chek;
                            printf("pulingiz mufaiyatli yechildi\n");
                            printf("kartangizda %d som qoldi\n", umumiy_check);
                        }
                        else
                        {
                            printf("pin cod xato qayta kiriting:\n");
                            goto parol;
                        }
                        if (karta < chek)
                        {
                            printf("balansda pul yetmadi");
                        }
                    }
                    else if (tanlov == 2)
                    {
                        printf("pulingizni bering ");
                        scanf("%d", &foydalanuvchi);
                        if (foydalanuvchi > chek)
                        {
                            umumiy_check = foydalanuvchi - chek;
                            printf("qaytimigizni oling: %d", umumiy_check);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 2)
    {
        system("cls");
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek =chek + manti * zakas;
        printf("zakasingiz 10 minutda tayyor boladi.\n");
        system("cls");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            system("cls");
            printf("desertga nimadir zakas qilasizmi: \n");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                system("cls");
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa: \n");
                    scanf("%d", &zakas);
                    chek = chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek + shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                system("cls");
                printf("nimadir ichasizmi : \n");
                printf("\t1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting :");
                            parol1:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi \n", umumiy_check);
                            }else{
                                printf("pin cod xato qayta kiriting: \n");
                                goto parol1;
                            }                           
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigizni oling %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 3)
    {
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek = chek + manti * zakas;
        printf("zakasingiz 15 minutda tayyro boladi.\n");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            printf("desertga nimadir zakas qilasizmi: \n");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa: ");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek + shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("nimadir ichasizmi : \n");
                printf("\t1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting: ");
                        parol2:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi\n", umumiy_check);
                            }
                            else
                            {
                                printf("pin cod xato qayta kiriting:\n");
                                goto parol2;
                            }
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi\n");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigiz: %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 4)
    {
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek =chek + manti * zakas;
        printf("zakasingiz 10 minutda tayyro boladi.\n");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            printf("desertga nimadir zakas qilasizmi: ");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa: ");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("nimadir ichasizmi : ");
                printf("\t1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting: ");
                        parol3:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi\n", umumiy_check);
                            }
                            else
                            {
                                printf("pin cod xato qayta kiriting:\n");
                                goto parol3;
                            }
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigiz: %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 5)
    {
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek =chek + manti * zakas;
        printf("zakasingiz 10 minutda tayyro boladi.\n");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            printf("desertga nimadir zakas qilasizmi: \n");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa:\n");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek = chek +peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek =chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek+ shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("\t\tnimadir ichasizmi : \n");
                printf("1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting: ");
                        parol4:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi\n", umumiy_check);
                            }
                            else
                            {
                                printf("pin cod xato qayta kiriting:\n");
                                goto parol4;
                            }
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigiz: %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 6)
    {
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek =chek +manti * zakas;
        printf("zakasingiz 3 minutda tayyro boladi.\n");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            printf("desertga nimadir zakas qilasizmi: \n");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa:\n");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek =chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek =chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek + shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("\t\tnimadir ichasizmi : \n");
                printf("1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting: ");
                        parol5:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi\n", umumiy_check);
                            }
                            else
                            {
                                printf("pin cod xato qayta kiriting:\n");
                                goto parol5;
                            }
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigiz: %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 7)
    {
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek = chek + manti * zakas;
        printf("zakasingiz 10 minutda tayyro boladi.\n");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            printf("desertga nimadir zakas qilasizmi: \n");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa:\n");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek =chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek =chek + sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek = chek + shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("\t\tnimadir ichasizmi : \n");
                printf("1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting: ");
                        parol6:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi\n", umumiy_check);
                            }
                            else
                            {
                                printf("pin cod xato qayta kiriting:\n");
                                goto parol6;
                            }
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigiz: %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }

    if (tanlov == 8)
    {
        printf("qancha kerak: ");
        scanf("%d", &zakas);
        chek =chek + manti * zakas;
        printf("zakasingiz 10 minutda tayyro boladi.\n");
        printf("\t\tyana nimadir zakas qilasizmi: \n");
        printf("\t1.ha \t 2.yoq\n");
        scanf("%d", &tanlov);
        if (tanlov == 1)
        {
            goto menu;
        }
        if (tanlov == 2)
        {
            printf("desertga nimadir zakas qilasizmi: \n");
            printf("\t1.ha \t 2.yoq\n");
            scanf("%d", &tanlov);
            if (tanlov == 1)
            {
                printf("keks 1 tanlang \n");
                printf("peroq 2 tanlang\n");
                printf("sabzavotli tort 3 tanlang\n");
                printf("shakolatli tort 4 tanlang\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    printf("nechta nechi kosa:\n");
                    scanf("%d", &zakas);
                    chek =chek + keks * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 2)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek =chek + peroq * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 3)
                {
                    printf("nechta bo'lak:\n");
                    scanf("%d", &zakas);
                    chek = chek +sabzavot * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
                if (tanlov == 4)
                {
                    printf("nechta bo'lak:");
                    scanf("%d", &zakas);
                    chek =chek+ shakolat * zakas;
                    printf("zakasingiz 5 minutda tayyro boladi.\n");
                }
            }
            if (tanlov == 2)
            {
                printf("\t\tnimadir ichasizmi : \n");
                printf("1.ha \t 2.yoq\n");
                scanf("%d", &tanlov);
                if (tanlov == 1)
                {
                    goto ichimlik;
                }
                if (tanlov == 2)
                {
                    {
                        printf("sizning checkingiz %d som boldi ", chek);
                        printf("\nnimada to'laysiz\n");
                        printf("1.karta \t 2.naxt\n");
                        scanf("%d", &tanlov);
                        if (tanlov == 1)
                        {
                            printf("pin codni kiriting: ");
                        parol7:
                            scanf("%d", &karta_parol);
                            if (karta_parol == 7070)
                            {
                                umumiy_check = karta - chek;
                                printf("pulingiz mufaiyatli yechildi\n");
                                printf("kartangizda %d som qoldi\n", umumiy_check);
                            }
                            else
                            {
                                printf("pin cod xato qayta kiriting:\n");
                                goto parol7;
                            }
                            if (karta < chek)
                            {
                                printf("balansda pul yetmadi");
                            }
                        }
                        if (tanlov == 2)
                        {
                            printf("pulingizni bering ");
                            scanf("%d", &foydalanuvchi);
                            if (foydalanuvchi > chek)
                            {
                                umumiy_check = foydalanuvchi - chek;
                                printf("qaytimigiz: %d", umumiy_check);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
}