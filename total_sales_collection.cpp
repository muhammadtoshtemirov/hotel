#include<iostream>
using namespace std;
int main() {
    int quant;
    int choice;
    int qrooms = 0, qpasta = 0, qburger = 0, qnoodles = 0, qshake = 0, qchicken = 0;
    int srooms = 0, spasta =0, sburger =0, snoodles =0,sshake=0,schicken=0;
    int total_rooms =0,total_pasta=0, total_burger=0, total_noodles=0,total_shake=0,total_chiken=0;

    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms avaliable : ";
    cin>>qrooms;
    cout<<"\n  Quantity of pasta : ";
    cin>>qpasta;
    cout<<"\n  Quantity of burger : ";
    cin>>qburger;
    cout<<"\n  Quantity of noodles : ";
    cin>>qnoodles;
    cout<<"\n  Quantity of shake : ";
    cin>>qshake;
    cout<<"\n  Quantity of chicken-roll : ";
    cin>>qchicken;

    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) shake";
    cout<<"\n6) Chicken-roll";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";


    cout<<"\n\n Please Enter your choice!  ";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"\n\n Enter the number of rooms you want: ";
            cin>>quant;
            if (qrooms-srooms >= quant){
                srooms=srooms+quant;
                total_rooms=total_rooms+quant*1200;
                cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you!";

            }else
               cout<<"\n\tOnly"<<qrooms-srooms<<" Rooms remaining in hotel";
               break;

        case 2:
            cout<<"\n\n Enter Pasta Quantity : ";

            cin>>quant;
            if (qpasta-spasta >= quant){
                spasta= spasta+quant;
                total_pasta=total_pasta+quant*250;
                cout<<"\n\n\t\t"<<quant<<" Pasta is order!";

            }else
                cout<<"\n\tOnly"<<qpasta-spasta<<" Pasta remaining in hotel";
            break;
        case 3:
            cout<<"\n\n Enter Burger Quantity : ";

            cin>>quant;
            if (qburger-sburger >= quant){
                sburger= sburger+quant;
                total_burger=total_burger+quant*120;
                cout<<"\n\n\t\t"<<quant<<" Burger is order!";

            }else
                cout<<"\n\tOnly"<<qburger-sburger<<" Burger remaining in hotel";
            break;
        case 4:
            cout<<"\n\n Enter Noodles Quantity : ";

            cin>>quant;
            if (qnoodles-snoodles >= quant){
                snoodles= snoodles+quant;
                total_noodles=total_noodles+quant*140;
                cout<<"\n\n\t\t"<<quant<<" Noodle is order!";

            }else
                cout<<"\n\tOnly"<<qnoodles-snoodles<<" Noodles remaining in hotel";
            break;
        case 5:
            cout<<"\n\n Enter Shake Quantity : ";

            cin>>quant;
            if (qshake-sshake >= quant){
                sshake= sshake+quant;
                total_shake=total_shake+quant*120;
                cout<<"\n\n\t\t"<<quant<<" Shake is order!";

            }else
                cout<<"\n\tOnly"<<qshake-sshake<<" Shakes  remaining in hotel";
            break;
        case 6:
            cout<<"\n\n Enter Chicken-roll Quantity : ";

            cin>>quant;
            if (qchicken-schicken >= quant){
                schicken= schicken+quant;
                total_chiken=total_chiken+quant*150;
                cout<<"\n\n\t\t"<<quant<<" Chiken-roll is order!";

            }else
                cout<<"\n\tOnly"<<qchicken-schicken<<" Ckicken-roll remaining in hotel";
            break;
        case 7:
            cout<<"\n\t\tDetails of sales and collection ";
            cout<<"\n\n Number of rooms we had : "<<qrooms;
            cout<<"\n\nNumber of rooms we gave for rent : "<<srooms;
            cout<<"\n\n Remaining rooms : "<<qrooms-srooms;
            cout<<"\n\n Total rooms collection for the day : "<<total_rooms;


            cout<<"\n\n Number of Pastas we had : "<<qpasta;
            cout<<"\n\nNumber of Pastas  we sold : "<<spasta;
            cout<<"\n\n Remaining Pastas : "<<qpasta-spasta;
            cout<<"\n\n Total Pasata collection for the day : "<<total_pasta;

            cout<<"\n\n Number of burgers we had : "<<qburger;
            cout<<"\n\nNumber of burgers we sold : "<<sburger;
            cout<<"\n\n Remaining burgers : "<<qburger-sburger;
            cout<<"\n\n Total burger collection for the day : "<<total_burger;

            cout<<"\n\n Number of Noodles we had : "<<qnoodles;
            cout<<"\n\nNumber of Noodles  we sold : "<<snoodles;
            cout<<"\n\n Remaining Noodles : "<<qnoodles-snoodles;
            cout<<"\n\n Total Noodle collection for the day : "<<total_noodles;

            cout<<"\n\n Number of Chicken-roll we had : "<<qchicken;
            cout<<"\n\nNumber of Chicken-roll  we sold : "<<schicken;
            cout<<"\n\n Remaining Chicken-roll : "<<qchicken-schicken;
            cout<<"\n\n Total Chicken-roll collection for the day : "<<total_chiken;

            cout<<"\n\n\t\t Total collection for the day : "<<total_chiken + total_pasta + total_burger + total_rooms + total_noodles + total_shake;
            break;

        case 8:
            exit(0);
        default:
            cout<<"\n Please select the numbers mentioned above ! ";

    }
    goto m;





}
