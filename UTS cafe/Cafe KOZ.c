#include <stdio.h>
#include <stdlib.h>

void main ()
{
    printf ("<================================ cafe koz ================================>");
    printf ("\n                                <DAFTAR MENU>                                ");
    printf ("\n MINUMAN :                                                         HARGA  ");
    printf ("\n**************************************************************************");
    printf ("\n|1. espresso                                                      Rp5.000|");
    printf ("\n|2. cappuccino                                                    Rp5.000|");
    printf ("\n|3. mocha                                                         Rp5.000|");
    printf ("\n|4. cafe late                                                     Rp5.000|");
    printf ("\n***************************************************************************\n");
    printf ("\n\n MAKANAN ");
    printf ("\n**************************************************************************");
    printf ("\n|1. nasi gorang                                                  Rp10.000|");
    printf ("\n|2. chiken katsu                                                 Rp15.000|");
    printf ("\n|3. kentang goreng                                                Rp6.000|");
    printf ("\n|4. cream soup                                                    Rp6.000|");
    printf ("\n**************************************************************************\n");
    printf ("\n\n PAKET KOZ :");
    printf ("\n**************************************************************************");
    printf ("\n|1. nasi goreng dan minuman bebas milih                          Rp12.000|");
    printf ("\n|2. chiken katsu dan minuman bebas milih                         Rp17.000|");
    printf ("\n**************************************************************************\n");
    printf ("\n\n PAKET XTRA KOZ :");
    printf ("\n**************************************************************************");
    printf ("\n|1. nasigoreng,kentang atau cream soup, dan minum bebas milih    Rp18.000|");
    printf ("\n|2. chiken khatsu,kentang atau cream soup, dan minum bebas milih Rp23.000|");
    printf ("\n**************************************************************************\n");

    int nama,menu_makanan,menu_minuman,jumlah_pesan,paket_koz,paket_xtra_koz,harga, harga2,harga3,harga4,total,total2,total3,total4,jumlah_total;


    printf ("\n\npilih menu minuman :");
    scanf ("%d",&menu_minuman);

    switch (menu_minuman)
    {
    case 0:
        {
            printf ("\n**************************************************************************\n");
            printf ("tidak memilih menu minuman ");
            harga = 0;
            total = harga*jumlah_pesan;
            printf ("\ntotal: Rp %d",total);
            printf ("\n**************************************************************************\n");
            break ;

        }
    case 1:
        {
        printf ("\n**************************************************************************\n");
        printf ("\npesanan yang anda pilih : espresso  Rp5.000 ");
        printf ("\njumlah pesanan :");
        scanf ("%d",&jumlah_pesan);
        harga =5000;
        total = harga*jumlah_pesan;
        printf ("\ntotal: Rp %d",total);
        printf ("\n**************************************************************************\n");
        break ;
        }

    case 2:
        {
        printf ("\n**************************************************************************\n");
        printf ("\npesanan yang anda pilih : cappuccino  Rp5.000  ");
        printf ("\njumlah pesanan :");
        scanf ("%d",&jumlah_pesan);
        harga =5000;
        total = harga*jumlah_pesan;
        printf ("\ntotal: Rp %d",total);
        printf ("\n**************************************************************************\n");
        break ;
        }
    case 3:
        {
        printf ("\n**************************************************************************\n");
        printf ("\npesanan yang anda pilih : mocha  Rp5.000  ");
        printf ("\njumlah pesanan :");
        scanf ("%d",&jumlah_pesan);
        harga =5000;
        total = harga*jumlah_pesan;
        printf ("\ntotal : Rp %d",total);
        printf ("\n**************************************************************************\n");
        break ;
        }
    case 4:
        {
        printf ("\n**************************************************************************\n");
        printf ("\npesanan yang anda pilih : cafe late  Rp5.000  ");
        printf ("\njumlah pesanan :");
        scanf ("%d",&jumlah_pesan);
        harga =5000;
        total = harga*jumlah_pesan;
        printf ("\ntotal : Rp %d",total);
        printf ("\n**************************************************************************\n");
        break ;
        }
    default :
        {
            printf ("\n**************************************************************************\n");
            printf ("menu yang anda pilih tidak ada");
           harga = 0;
           total = harga*jumlah_pesan;
            printf ("\ntotal : Rp %d",total);
            printf ("\n**************************************************************************\n");
            break;
        }
    }


    printf ("\n\npilih menu makanan :");
    scanf ("%d",&menu_makanan);


    switch (menu_makanan)
    {
    case 0:
        {
            printf ("\n**************************************************************************\n");
             printf ("tidak memilih menu makanan ");
             harga2 = 0;
             total2 = harga2*jumlah_pesan;
             printf ("\ntotal: Rp %d",total2);
             printf ("\n**************************************************************************\n");
             break;
        }
    case 1:
        {
            printf ("\n**************************************************************************\n");
            printf ("\npesanan yang anda pilih adalah : nasi goreng    Rp10.000");
             printf ("\njumlah pesanan :");
            scanf ("%d",&jumlah_pesan);
            harga2 = 10000;
            total2 = harga2*jumlah_pesan;
            printf ("\ntotal: Rp %d",total2);
            printf ("\n**************************************************************************\n");
            break ;
        }
    case 2:
        {
            printf ("\n**************************************************************************\n");
            printf ("\npesanan yang anda pilih adalah : chiken katsu    Rp15.000 ");
            printf ("\njumlah pesanan :");
            scanf ("%d",&jumlah_pesan);
            harga2 = 15000;
            total2 = harga2*jumlah_pesan;
            printf ("\ntotal: Rp %d",total2);
            printf ("\n**************************************************************************\n");
            break ;
        }
    case 3:
        {
            printf ("\n**************************************************************************\n");
            printf ("\npesanan yang anda pilih adalah : kentang    Rp6.000 ");
              printf ("\njumlah pesanan :");
               scanf ("%d",&jumlah_pesan);
            harga2 = 6000;
            total2 = harga2*jumlah_pesan;
            printf ("\ntotal : Rp %d",total2);
            printf ("\n**************************************************************************\n");
            break;
        }
    case 4:
        {
            printf ("\n**************************************************************************\n");
            printf ("\npesanan yang anda pilih adalah : cream soup    Rp6.000 ");
              printf ("\njumlah pesanan :");
                scanf ("%d",&jumlah_pesan);
            harga2 = 6000;
            total2 = harga2*jumlah_pesan;
            printf ("\ntotal : Rp %d",total2);
            printf ("\n**************************************************************************\n");
            break;
        }
    default :
        {
            printf ("\n**************************************************************************\n");
            printf ("menu yang anda pilih tidak ada");

           harga2 = 0;
           total2 = harga2*jumlah_pesan;
            printf ("\ntotal : Rp %d",total2);
            printf ("\n**************************************************************************\n");
            break;
        }

    }

    printf ("\n\npilih menu paket koz :");
    scanf ("%d",&paket_koz);


    switch (paket_koz)
    {
    case 0:
        {
            printf ("\n**************************************************************************\n");
            printf ("tidak memilih menu paket koz  ");
            harga3 = 0;
            total3 = harga3*jumlah_pesan;
            printf ("\ntotal: Rp %d",total3);
            printf ("\n**************************************************************************\n");
            break ;
        }
    case 1:
        {
            printf ("\n********************************************************************************\n");
            printf ("\npesanan yang anda pilih adalah : nasi goreng dan minuman bebas milih  Rp12.000 ");

            printf ("\njumlah pesanan :");
            scanf ("%d",&jumlah_pesan);

            harga3 = 12000;
            total3 = harga3*jumlah_pesan;
            printf ("\ntotal: Rp %d",total3);
            printf ("\n********************************************************************************\n");
            break;
        }
    case 2:
        {
            printf ("\n********************************************************************************\n");
            printf ("\npesanan yang anda pilih adalah : chiken katsu dan minuman bebas milih  Rp17.000 ");

        printf ("\njumlah pesanan :");
    scanf ("%d",&jumlah_pesan);

            harga3 = 17000;
            total3 = harga3*jumlah_pesan;
            printf ("\ntotal: Rp %d",total3);
            printf ("\n********************************************************************************\n");
            break ;
        }
    default:
        {
            printf ("\n********************************************************************************\n");
           printf ("menu yang anda pilih tidak ada");

           harga3 = 0;
           total3 = harga3*jumlah_pesan;
            printf ("\ntotal : Rp %d",total3);
           printf ("\n********************************************************************************\n");
            break;
        }

    }


    printf ("\n\npilih menu paket xtra koz :");
    scanf ("%d",&paket_xtra_koz);


    switch (paket_xtra_koz)
    {
    case 0:
       {
           printf ("\n********************************************************************************\n");
           printf ("tidak memilih paket xtra koz");
           harga4 = 0;
           total4 = harga4*jumlah_pesan;
            printf ("\ntotal : Rp %d",total4);
        printf ("\n********************************************************************************\n");
            break;
       }
    case 1:
        {
            printf ("\n********************************************************************************************************\n");
            printf ("\npesana yang anda pilih adalah : nasi goreng,kentang atau cream soup, dan minum bebas milih  Rp18.000 ");

        printf ("\njumlah pesanan :");
    scanf ("%d",&jumlah_pesan);

            harga4 = 18000;
            total4 = harga4*jumlah_pesan;
            printf ("\ntotal: Rp %d",total4);
            printf ("\n*******************************************************************************************************\n");
            break ;
        }
    case 2:
        {
            printf ("\n*******************************************************************************************************\n");
            printf ("\npesana yang anda pilih adalah : chiken katsu,kentang atau cream soup, dan minum bebas milih  Rp23.000 ");

        printf ("\njumlah pesanan :");
    scanf ("%d",&jumlah_pesan);

            harga4 = 23000;
            total4 = harga4*jumlah_pesan;
            printf ("\ntotal: Rp %d",total4);
            printf ("\n*******************************************************************************************************\n");
            break ;
        }
    default :
        {
            printf ("\n*******************************************************************************************************\n");
           printf ("menu yang anda pilih tidak ada");

           harga4 = 0;
           total4 = harga4*jumlah_pesan;
            printf ("\ntotal : Rp %d",total4);
            printf ("\n*******************************************************************************************************\n");
            break;
        }
    }
          printf ("\n**************************************************************************");
          jumlah_total = total+total2+total3+total4;
          printf ("\n\ntotal yang harus di bayar = Rp   %d",jumlah_total);
          printf ("\n**************************************************************************\n");
}


