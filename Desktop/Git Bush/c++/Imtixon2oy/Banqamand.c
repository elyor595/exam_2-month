print("Tilni tanlang \n O'zbek tilini tanlash uchun 1 bosing\n , Ingiliz tilini tanlash uchun 2 bosing\n ");
         pul = 1000000;
        scanf("%d",&a);
        menyu:
        if (a == 1){
            printf("Ozbek tilini tanladingiz\n");
            printf("Pin qodni kiriting");
            int b,pinqod =1234;
            scanf("%d",&b);
            if(b == pinqod){
                printf("Pul yechib olish uchun 1 bosing \n");
                printf("Hisob malumotlarni korish uchun  2 bosing \n");
                printf("Pul otgazish  uchun 3 bosing \n");
                printf("Telefon raqamga sms yuborish uchun 4 bosing \n");
                printf("Tugatish uchun 0 bosing\n");
            int c;
            scanf("%d",&c);
            if (c == 1){
                printf("Pul yechib olish\n");
                int o;
                printf("Qancha pul kiritmoqchisiz\n");
                scanf("%d",&o);
                pul = pul - o ;
                printf("%d pulingiz qoldi ", pul);
            }
            else if (c == 2){
                printf("1000000 so'm pulingiz bor\n");
            }
            else if (c == 3){
                printf("Pul otkazishni tanlang \n Gaz 1 bosing \n svet 2 bosing \n suv 3 bosing\n");
                int otkaz,ot;
                scanf("%d",&otkaz);
                if (otkaz == 1){
                    printf("Gazni tanladingiz \n Qancha kiritasiz \n");
                    scanf("%d", &ot);
                    pul = pul - ot;
                    printf("Gazga pul tolandi\n %d pulingiz qoldi\n",pul);
                }
                 else if (otkaz == 2){
                    printf("svetni  tanladingiz \n Qancha kiritasiz \n");
                    scanf("%d", &ot);
                    pul = pul - ot;
                    printf("svetga pul tolandi\n %d pulingiz qoldi\n",pul);
                }
                 else if (otkaz == 3){
                    printf("Suvni tanladingiz \n Qancha kiritasiz \n");
                    scanf("%d", &ot);
                    pul = pul - ot;
                    printf("Suvga pul tolandi\n %d pulingiz qoldi\n",pul);
                }
            }
            else if (c == 4){
                int sms;
                printf("Raqam kiriting \n");
                scanf("%d",&sms);
                printf("1000000 som pul bor deb %d telefon nomerga sms yuborildi \n",sms);
            }
            else if (c == 0);
                return 0;
            }
            else if (b != pinqod){
                printf("Pin qod xato qayta kiriting");
                goto menyu;
            }
            }
        if (a == 2){
            printf("You have selected the English language\n");
            printf("Enter pin qod");
            int b,pinqod =1234;
            scanf("%d",&b);
            if(b == pinqod){
                printf("withdraw money 1 enter \n");
                printf("view sum  2 enter \n");
                printf("Transfer money 3 enter \n");
                printf("Telefon number sms 4 enter \n");
                printf("ENd 0 enter\n");
            int c;
            scanf("%d",&c);
            if (c == 1){
                printf("Take off money\n");
                int o;
                printf("How much money enter\n");
                scanf("%d",&o);
                pul = pul - o ;
                printf("%d Yes ", pul);
            }
            else if (c == 2){
                printf("1000000 You have\n");
            }
            else if (c == 3){
                printf("Take off money \n Gaz 1 enter \n svet 2 enter \n water 3 enter\n");
                int otkaz,ot;
                scanf("%d",&otkaz);
                if (otkaz == 1){
                    printf("Gaz choose \n How much you enter \n");
                    scanf("%d", &ot);
                    pul = pul - ot;
                    printf("Gas spent\n %d your sum\n",pul);
                }
                 else if (otkaz == 2){
                    printf("Lamp chosse \n How much you enter  \n");
                    scanf("%d", &ot);
                    pul = pul - ot;
                    printf("Lamp spent\n %d your sum\n",pul);
                }
                 else if (otkaz == 3){
                    printf("Water choose \n How much you enter \n");
                    scanf("%d", &ot);
                    pul = pul - ot;
                    printf("Water spent\n %d your sum\n",pul);
                }
            }
            else if (c == 4){
                int sms;
                printf("Number enter \n");
                scanf("%d",&sms);
                printf("1000000 sum yes %d telefon number ented \n",sms);
            }
            else if (c == 0);
                return 0;
            }
            else if (b != pinqod){
                printf("Pin qod eror resive qode");
                goto menyu;
            }
            }