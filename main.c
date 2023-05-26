#include <stdio.h>

struct Contacts
{
    int  contact__id;
    char contact__fname[50];
    char contact__lname[50];
    char contact__workplace[50];
    char contact__email [50];
    char contact__mobile__number[20];
    char contact__relative__person[50];
};

int user__choice();

void Contact__Menu();


int main()
{

    struct Contacts contacts[1000];
    int count=0;
    int choice;
    while(1){
        Contact__Menu();
        choice = user__choice();
        if(choice==0){
            printf("\n Thank You For Using Contact Management System ! \n\n");
            printf("|                 (  )   (   )  )                    |\n");
            printf("|                  ) (   )  (  (                     |\n");
            printf("|                  ( )  (    ) )                     |\n");
            printf("|                  _____________                     |\n");
            printf("|                 <_____________> ___                |\n");
            printf("|                 |             |/ _ \\              |\n");
            printf("|                 |               | | |              |\n");
            printf("|                 |               |_| |              |\n");
            printf("|             _ __|             |\\___/            |\n");
            printf("|               /    \\___________/    \\          |\n");
            printf("|               \\_____________________/           |\n\n\n");

            break;
        }
        else if(choice==1){

            printf("\n\n\n\n\n");
            printf("____________________________________________________________________________________________________________________________________\n");
            printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                            ▄▀█ █▀▄ █▀▄   █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀                                             |\n");
            printf("|                                            █▀█ █▄▀ █▄▀   █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░                                             |\n");
            printf("|                                                                                                                                   |\n");
            printf("|___________________________________________________________________________________________________________________________________|\n");
            printf("|___________________________________________________________________________________________________________________________________|\n\n");


            do{
            printf("Enter Contact ID :");
            scanf("%d", &contacts[count].contact__id);

            int ctr=0;

            for(int check=0; check < count; check++){
                  if(contacts[count].contact__id==contacts[check].contact__id){
                      ctr=2;
                      break;
                  }
              }if(ctr==0){
                   break;
               }else{
                printf("ID Already Exists ! Please Enter Different ID ! \n");
                }

           }while(1);
            printf("Firstname :");
            scanf("%s",contacts[count].contact__fname);

            printf("Lastname :");
            scanf("%s",contacts[count].contact__lname);

            printf("Workplace :");
            scanf("%s",contacts[count].contact__workplace);

            printf("Email :");
            scanf("%s",contacts[count].contact__email);

            printf("Mobile Number :");
            scanf("%s",contacts[count].contact__mobile__number);

            printf("Relative Person :");
            scanf("%s",contacts[count].contact__relative__person);

            printf("\n\n\n\n\n");
            printf("| █▀ █░█ █▀▀ █▀▀ █▀▀ █▀ █▀ █▀▀ █░█ █░░ █░░ █▄█   ▄▀█ █▀▄ █▀▄ █▀▀ █▀▄ |\n");
            printf("| ▄█ █▄█ █▄▄ █▄▄ ██▄ ▄█ ▄█ █▀░ █▄█ █▄▄ █▄▄ ░█░   █▀█ █▄▀ █▄▀ ██▄ █▄▀ |\n");
            printf("|                 (  )   (   )  )                    |\n");
            printf("|                  ) (   )  (  (                     |\n");
            printf("|                  ( )  (    ) )                     |\n");
            printf("|                  _____________                     |\n");
            printf("|                 <_____________> ___                |\n");
            printf("|                 |             |/ _ \\              |\n");
            printf("|                 |               | | |              |\n");
            printf("|                 |               |_| |              |\n");
            printf("|             _ __|             |\\___/            |\n");
            printf("|               /    \\___________/    \\          |\n");
            printf("|               \\_____________________/           |\n\n\n");

            printf("\nID               = %d",contacts[count].contact__id);
            printf("\nFirstname        = %s",contacts[count].contact__fname);
            printf("\nLastname         = %s",contacts[count].contact__lname);
            printf("\nWorkplace        = %s",contacts[count].contact__workplace);
            printf("\nEmail            = %s",contacts[count].contact__email);
            printf("\nMobile Number    = %s",contacts[count].contact__mobile__number);
            printf("\nRelative Person  = %s",contacts[count].contact__relative__person);

            count++;
        }else if(choice==2){
            int contact_id;
            printf("\n\n\n\n\n");
            printf("____________________________________________________________________________________________________________________________________\n");
            printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                           █▀ █▀▀ ▄▀█ █▀█ █▀▀ █░█   █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀                                   |\n");
            printf("|                                           ▄█ ██▄ █▀█ █▀▄ █▄▄ █▀█   █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░                                   |\n");
            printf("|                                                                                                                                   |\n");
            printf("|___________________________________________________________________________________________________________________________________|\n");
            printf("|___________________________________________________________________________________________________________________________________|\n\n");

            printf("\nEnter Contact Id For Search : ");
            scanf("%d",&contact_id);
            int i=0;
            int Contacts=-1;
            for(;i<count;i++){

            if(contact_id==contacts[i].contact__id){
                Contacts=i;
                break;
            }
        }

            if(Contacts==-1){
                printf("| █▄░█ █▀█   █▀█ █▀▀ █▀▀ █▀█ █▀█ █▀▄   █▀▀ █▀█ █░█ █▄░█ █▀▄ |\n");
                printf("| █░▀█ █▄█   █▀▄ ██▄ █▄▄ █▄█ █▀▄ █▄▀   █▀░ █▄█ █▄█ █░▀█ █▄▀ |\n");
                printf("|                 (  )   (   )  )                    |\n");
                printf("|                  ) (   )  (  (                     |\n");
                printf("|                  ( )  (    ) )                     |\n");
                printf("|                  _____________                     |\n");
                printf("|                 <_____________> ___                |\n");
                printf("|                 |             |/ _ \\              |\n");
                printf("|                 |               | | |              |\n");
                printf("|                 |               |_| |              |\n");
                printf("|             _ __|             |\\___/            |\n");
                printf("|               /    \\___________/    \\          |\n");
                printf("|               \\_____________________/           |\n\n\n");

            }else{

                printf("\n\n\n\n\n");
                printf("____________________________________________________________________________________________________________________________________\n");
                printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
                printf("|                                                                                                                                   |\n");
                printf("|                                         █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀   █ █▄░█ █▀▀ █▀█                                             |\n");
                printf("|                                         █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░   █ █░▀█ █▀░ █▄█                                             |\n");
                printf("|                                                                                                                                   |\n");
                printf("|___________________________________________________________________________________________________________________________________|\n");
                printf("|___________________________________________________________________________________________________________________________________|\n\n");
                printf("\nId               = %d",contacts[Contacts].contact__id);
                printf("\nFirstname        = %s",contacts[Contacts].contact__fname);
                printf("\nLastname         = %s",contacts[Contacts].contact__lname);
                printf("\nWorkplace        = %s",contacts[Contacts].contact__workplace);
                printf("\nEmail            = %s",contacts[Contacts].contact__email);
                printf("\nMobile Number    = %s",contacts[Contacts].contact__mobile__number);
                printf("\nRelative Person  = %s",contacts[Contacts].contact__relative__person);
            }

    }else if(choice==3){
            printf("\n\n\n\n\n");
            printf("____________________________________________________________________________________________________________________________________\n");
            printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                        █░░ █ █▀ ▀█▀   █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀                                                |\n");
            printf("|                                        █▄▄ █ ▄█ ░█░   █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░                                                |\n");
            printf("|                                                                                                                                   |\n");
            printf("|___________________________________________________________________________________________________________________________________|\n");
            printf("|___________________________________________________________________________________________________________________________________|\n\n");
            for(int Contact__list=0; Contact__list<count; Contact__list++){
            printf("\n    Contact %d ",(Contact__list+1));
            printf("\nID               = %d",contacts[Contact__list].contact__id);
            printf("\nFirstname        = %s",contacts[Contact__list].contact__fname);
            printf("\nLastname         = %s",contacts[Contact__list].contact__lname);
            printf("\nWorkplace        = %s",contacts[Contact__list].contact__workplace);
            printf("\nEmail            = %s",contacts[Contact__list].contact__email);
            printf("\nMobile Number    = %s",contacts[Contact__list].contact__mobile__number);
            printf("\nRelative Person  = %s",contacts[Contact__list].contact__relative__person);
            }

        }


        else if(choice==4){
        int contact_id;
            printf("\n\n\n\n\n");
            printf("____________________________________________________________________________________________________________________________________\n");
            printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                       █░█ █▀█ █▀▄ ▄▀█ ▀█▀ █▀▀   █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀                                      |\n");
            printf("|                                       █▄█ █▀▀ █▄▀ █▀█ ░█░ ██▄   █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░                                      |\n");
            printf("|                                                                                                                                   |\n");
            printf("|___________________________________________________________________________________________________________________________________|\n");
            printf("|___________________________________________________________________________________________________________________________________|\n\n");
            printf("\nEnter Contact Id For Update : ");
            scanf("%d", &contact_id);
            int i = 0;
            int Contacts = -1;
            for (; i < count; i++) {
                if (contact_id == contacts[i].contact__id) {

                    Contacts = i;

                    break;
                }

            }

            if (Contacts == -1) {
                printf("| █▄░█ █▀█   █▀█ █▀▀ █▀▀ █▀█ █▀█ █▀▄   █▀▀ █▀█ █░█ █▄░█ █▀▄ |\n");
                printf("| █░▀█ █▄█   █▀▄ ██▄ █▄▄ █▄█ █▀▄ █▄▀   █▀░ █▄█ █▄█ █░▀█ █▄▀ |\n");
                printf("|                 (  )   (   )  )                    |\n");
                printf("|                  ) (   )  (  (                     |\n");
                printf("|                  ( )  (    ) )                     |\n");
                printf("|                  _____________                     |\n");
                printf("|                 <_____________> ___                |\n");
                printf("|                 |             |/ _ \\              |\n");
                printf("|                 |               | | |              |\n");
                printf("|                 |               |_| |              |\n");
                printf("|             _ __|             |\\___/            |\n");
                printf("|               /    \\___________/    \\          |\n");
                printf("|               \\_____________________/           |\n\n\n");


            } else {

            printf("Firstname :");
            scanf("%s",contacts[Contacts].contact__fname);

            printf("Lastname :");
            scanf("%s",contacts[Contacts].contact__lname);

            printf("Workplace :");
            scanf("%s",contacts[Contacts].contact__workplace);

            printf("Email :");
            scanf("%s",contacts[Contacts].contact__email);

            printf("Mobile Number :");
            scanf("%s",contacts[Contacts].contact__mobile__number);

            printf("Relative Person :");
            scanf("%s",contacts[Contacts].contact__relative__person);




            printf("\n\n\n\n\n");
            printf("____________________________________________________________________________________________________________________________________\n");
            printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                         █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀   █ █▄░█ █▀▀ █▀█                                             |\n");
            printf("|                                         █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░   █ █░▀█ █▀░ █▄█                                             |\n");
            printf("|                                                                                                                                   |\n");
            printf("|___________________________________________________________________________________________________________________________________|\n");
            printf("|___________________________________________________________________________________________________________________________________|\n\n");
            printf("\nID               = %d",contacts[Contacts].contact__id);
            printf("\nFirstname        = %s",contacts[Contacts].contact__fname);
            printf("\nLastname         = %s",contacts[Contacts].contact__lname);
            printf("\nWorkplace        = %s",contacts[Contacts].contact__workplace);
            printf("\nEmail            = %s",contacts[Contacts].contact__email);
            printf("\nMobile Number    = %s",contacts[Contacts].contact__mobile__number);
            printf("\nRelative Person  = %s",contacts[Contacts].contact__relative__person);


            }
        }

        else if(choice==5)
        {
           int contact_id;
            printf("\n\n\n\n\n");
            printf("____________________________________________________________________________________________________________________________________\n");
            printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                                                                                                                   |\n");
            printf("|                                       █▀▄ █▀▀ █░░ █▀▀ ▀█▀ █▀▀   █▀▀ █▀█ █▄░█ ▀█▀ ▄▀█ █▀▀ ▀█▀                                      |\n");
            printf("|                                       █▄▀ ██▄ █▄▄ ██▄ ░█░ ██▄   █▄▄ █▄█ █░▀█ ░█░ █▀█ █▄▄ ░█░                                      |\n");
            printf("|                                                                                                                                   |\n");
            printf("|___________________________________________________________________________________________________________________________________|\n");
            printf("|___________________________________________________________________________________________________________________________________|\n\n");
            printf("\nEnter Contact Id For Delete : ");
            scanf("%d", &contact_id);
            int i = 0;
            int Contacts = -1;
            for (; i < count; i++) {
                if (contact_id == contacts[i].contact__id) {

                    Contacts = i;

                    break;
                }

            }

            if (Contacts == -1) {
                printf("| █▄░█ █▀█   █▀█ █▀▀ █▀▀ █▀█ █▀█ █▀▄   █▀▀ █▀█ █░█ █▄░█ █▀▄ |\n");
                printf("| █░▀█ █▄█   █▀▄ ██▄ █▄▄ █▄█ █▀▄ █▄▀   █▀░ █▄█ █▄█ █░▀█ █▄▀ |\n");
                printf("|                 (  )   (   )  )                    |\n");
                printf("|                  ) (   )  (  (                     |\n");
                printf("|                  ( )  (    ) )                     |\n");
                printf("|                  _____________                     |\n");
                printf("|                 <_____________> ___                |\n");
                printf("|                 |             |/ _ \\              |\n");
                printf("|                 |               | | |              |\n");
                printf("|                 |               |_| |              |\n");
                printf("|             _ __|             |\\___/            |\n");
                printf("|               /    \\___________/    \\          |\n");
                printf("|               \\_____________________/           |\n\n\n");

            } else {

                if(Contacts==count)
                {
                    count--;
                }
                else if(count>0)
                {
                    contacts[Contacts]=contacts[count-1];
                    count--;

                }


                printf("\n\n\n\n\n");
            printf("| █▀ █░█ █▀▀ █▀▀ █▀▀ █▀ █▀ █▀▀ █░█ █░░ █░░ █▄█  █▀▄ █▀▀ █░░ █▀▀ ▀█▀ █▀▀ █▀▄ |\n");
            printf("| ▄█ █▄█ █▄▄ █▄▄ ██▄ ▄█ ▄█ █▀░ █▄█ █▄▄ █▄▄ ░█░  █▄▀ ██▄ █▄▄ ██▄ ░█░ ██▄ █▄▀ |\n");
            printf("|                 (  )   (   )  )                    |\n");
            printf("|                  ) (   )  (  (                     |\n");
            printf("|                  ( )  (    ) )                     |\n");
            printf("|                  _____________                     |\n");
            printf("|                 <_____________> ___                |\n");
            printf("|                 |             |/ _ \\              |\n");
            printf("|                 |               | | |              |\n");
            printf("|                 |               |_| |              |\n");
            printf("|             _ __|             |\\___/            |\n");
            printf("|               /    \\___________/    \\          |\n");
            printf("|               \\_____________________/           |\n\n\n");


            }


        }



    }

}







void Contact__Menu() {
    printf("\n\n\n\n\n");
    printf("____________________________________________________________________________________________________________________________________\n");
    printf("|_______________________________________________________________________________________________________________________[-]_[_]_[X]_|\n");
    printf("|                                                                                                                                   |\n");
    printf("|  ░█▀▀█ █▀▀█ █▀▀▄ ▀▀█▀▀ █▀▀█ █▀▀ ▀▀█▀▀ 　 ░█▀▄▀█ █▀▀█ █▀▀▄ █▀▀█ █▀▀▀ █▀▀ █▀▄▀█ █▀▀ █▀▀▄ ▀▀█▀▀ 　 ░█▀▀▀█ █──█ █▀▀ ▀▀█▀▀ █▀▀ █▀▄▀█   |\n");
    printf("|  ░█─── █──█ █──█ ──█── █▄▄█ █── ──█── 　 ░█░█░█ █▄▄█ █──█ █▄▄█ █─▀█ █▀▀ █─▀─█ █▀▀ █──█ ──█── 　 ─▀▀▀▄▄ █▄▄█ ▀▀█ ──█── █▀▀ █─▀─█   |\n");
    printf("|  ░█▄▄█ ▀▀▀▀ ▀──▀ ──▀── ▀──▀ ▀▀▀ ──▀── 　 ░█──░█ ▀──▀ ▀──▀ ▀──▀ ▀▀▀▀ ▀▀▀ ▀───▀ ▀▀▀ ▀──▀ ──▀── 　 ░█▄▄▄█ ▄▄▄█ ▀▀▀ ──▀── ▀▀▀ ▀───▀   |\n");
    printf("|                                                                                                                                   |\n");
    printf("|___________________________________________________________________________________________________________________________________|\n");
    printf("|___________________________________________________________________________________________________________________________________|");
    printf("\n|(1) Add New Contact                                                                                                                |");
    printf("\n|(2) Search Contact                                                                                                                 |");
    printf("\n|(3) Display  all Contacts                                                                                                          |");
    printf("\n|(4) Update Contact                                                                                                                 |");
    printf("\n|(5) Delete Contact                                                                                                                 |");
    printf("\n|(0) Exit !                                                                                                                         |");
    printf("\n|___________________________________________________________________________________________________________________________________|\n");
    printf("\n\nEnter : ");
}

int user__choice() {

    int choice;

    do {

        scanf("%d", &choice);
               if(choice>=0 && choice<=5)
               {
                   break;
               }
               else
               {
                   printf("\nPlease Enter Valid Choice \n");

               }

    }while(1);

    return  choice;
}
