/*
===========================================
    System image unpack and repack tool
              by:- @itsdrnoob 
     Please read README.md for credits      
===========================================  
*/
#include <stdio.h>

void pause(int);

main()
{
    int iSelection = 0;
    char cSelectionbr = '\0';

    system("clear");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\tSYSTEM IMAGE TOOLS\n");
    printf("\t\t\t\t  by @itsdrnoob\n");
    pause(2);
    system("clear");
    system("cp tools/brotli /usr/local/bin");
    system("cp tools/blockimgdiff.py /usr/local/bin");
    system("cp tools/common.py /usr/local/bin");
    system("cp tools/img2sdat.py /usr/local/bin");
    system("cp tools/img2simg /usr/local/bin");
    system("cp tools/rangelib.py /usr/local/bin");
    system("cp tools/sdat2img.py /usr/local/bin");
    system("cp tools/sparse_img.py /usr/local/bin");
    printf("\t\t\t\tSYSTEM IMAGE TOOLS \n\t\t\t\t by @itsdrnoob\n");
    printf("\n");
    printf("\n");
    
    /*----------------Mode selection------------------*/
    do 
    {
    printf("\nSelect an option.. \n");
    printf("\n1. system.new.dat.br to system.img \t2. system.img to system.new.dat.br\n");
    printf("\n3. vendor.new.dat.bt to vendor.img \t4. vendor.img to vendor.new.dat.br\n");
    printf("\n5. Exit\n");
    printf("\n");
    printf("Enter your selection:- ");
    scanf("%d", &iSelection);


    /*------system.new.dat.br to system.raw.img-------*/
    
    if (iSelection == 1)
    {
        system("clear");
        printf("\nMake sure you have system.new.dat.br and system.transfer.list in folder.\n");
        printf("\n");
        printf("Unpacking system.new.dat.br...Be patient..\n");
        system("brotli --decompress system.new.dat.br");
        system("sdat2img.py system.transfer.list system.new.dat system.raw.img");
        system("rm system.new.dat");
        printf("\n");
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t\t\tSystem Image Unpacked..\n");
        pause(2);
        system("clear");

    }


    /*----------system.raw.img to system.new.dat.br---------*/

    if (iSelection == 2)
    {
        system("clear");
        printf("Make sure raw image is present\n");
        system("mv system.img system.raw.img");
        printf("Repacking system.img...Be patient..\n");
        system("img2simg system.raw.img system.img");
        system("img2sdat.py -v 4 system.img");
        system("rm system.img");
        system("brotli -0 system.new.dat");
        system("rm system.new.dat");
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t\t\tSystem Image Repacked..\n");
        pause(2);
        system("clear");
        
    }

    /*--------------vendor.new.dar.br to vendor.raw.img----------------*/
    if (iSelection == 3)
    {
        system("clear");
        printf("\nMake sure you have vendor.new.dat.br and vendor.transfer.list in folder.\n");
        printf("\n");
        printf("Unpacking vendor.new.dat.br...Be patient..\n");
        system("brotli --decompress vendor.new.dat.br");
        system("sdat2img.py vendor.transfer.list vendor.new.dat vendor.raw.img");
        system("rm vendor.new.dat");
        printf("\n");
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t\t\tVendor Image Unpacked..\n");
        pause(2);
        system("clear");
    }

    /*--------------------vendor.raw.img to vendor.new.dat.br-----------------------*/

    if (iSelection == 4)
    {
        system("clear");
        printf("Make sure raw image is present\n");
        system("mv vendor.img vendor.raw.img");
        printf("Repacking vendor.img..Be patient..\n");
        system("img2simg vendor.raw.img vendor.img");
        system("img2sdat.py -v 4 -p vendor vendor.img");
        system("rm vendor.img");
        system("brotli -0 vendor.new.dat");
        system("rm vendor.new.dat");
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t\t\tVendor Image Repacked..\n");
        pause(2);
        system("clear");
    }

    if (iSelection > 5)
    {
        system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n\t\t\tPlease Select a valid option\n");
        pause(2);
        system("clear");
    }

    /*-----------------EXIT----------------*/

    } while (iSelection != 5);
    system("clear");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\tSYSTEM IMAGE TOOLS\n");
    printf("\t\t\t\t  by @itsdrnoob\n");
    printf("\n");
    printf("\n");
    printf("\n\t\t\t\t   Bye Bye :)\n");
    pause(2);
    system("clear");
    

    
}

void pause(int iTime)
{
    int iCurrentTime  = 0;
    int iElapsedTime = 0;

    iCurrentTime = time(NULL);

    do 
    {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iCurrentTime) < iTime);
}