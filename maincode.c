#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <string.h>

int main()
{
    FILE *fpointer;
    fpointer = fopen("database.txt", "a");

    //variable declaration
    char quantity;
    int dataChoice,speedChoice, tempChoice, currencyChoice, massChoice, userinputF, userinputC, userinputINRtoUSD, userinputUSDtoINR, userinputINRtoJPY, userinputINRtoEuro,
            userinputOunce, userinputCarat, userinputGram, fahrenheitToCelcius, celciusToFahrenheit;
    float USDtoINR, INRtoJPY, INRtoEuro, INRtoUSD, ounceToPounds, gramsToPounds, gramsToCarat, caratToPounds;
    //Menu for users to choose from
    printf("Welcome to Unit Converter!\n");
    printf("Here is a list of quantities to choose from: \n");
    printf("Temperature(T),Currency(C),Mass(M),Length(L),Time(T), Data(D), Speed(S) \n");
    printf("Please enter the letter you want to convert.\n");
    scanf("%c",&quantity);

    char finalString[150];
    time_t dateandtime;
    time(&dateandtime);

    ctime_r(&dateandtime, finalString);

    fprintf(fpointer, "\n%s ",finalString);
    char const *tempString;
    tempString = (char *) malloc (150 * sizeof (char));

    if(quantity =='D'){
        printf("Welcome to Data Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Kilobytes to Bytes. \n");
        printf("Enter 2 for Megabytes to Kilobytes. \n");
        printf("Enter 3 for Gigabytes to Megabytes. \n");
        scanf("%d",&dataChoice);
        if(dataChoice == 1){
            printf("Please enter the Kilobytes: \n");
            float Kilobytes;
            scanf("%f",&Kilobytes);
            float Bytes =  Kilobytes*1024;
            printf("Bytes: %.2f",Bytes);
            fprintf(fpointer,"Converted %.2f kilobytes to %.2f bytes",Kilobytes,Bytes);

        }
        else if(dataChoice == 2){
            printf("Please enter the Megabytes: \n");
            float Megabytes;
            scanf("%f",&Megabytes);
            float KiloBytes =  Megabytes*1024;
            printf("Kilobytes: %.2f",KiloBytes);
            fprintf(fpointer,"Converted %.2f Megabytes to %.2f kilobytes",Megabytes,KiloBytes);
        }
        else if(dataChoice == 3){
            printf("Please enter the Gigabytes: \n");
            float Gigabytes;
            scanf("%f",&Gigabytes);
            float MegaBytes =  Gigabytes*1024;
            printf("Megabytes: %.2f",MegaBytes);
            fprintf(fpointer,"Converted %.2f Gigabytes to %.2f megabytes",Gigabytes,MegaBytes);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    else if(quantity=='S'){
        printf("Welcome to Speed Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Km/h to m/s. \n");
        printf("Enter 2 for m/s to Km/h. \n");
        scanf("%d",&speedChoice);
        if(speedChoice == 1){
            printf("Please enter the Km/h: \n");
            float Kmh;
            scanf("%f",&Kmh);
            float ms =  Kmh*0.2778;
            printf("meterperseconds: %.2f",ms);
            fprintf(fpointer,"Converted %.2f kilometer per hour to %.2f meter per second",Kmh,ms);
        }
        else if(speedChoice == 2){
            printf("Please enter the m/s: \n");
            float Ms;
            scanf("%f",&Ms);
            float Kmh =  Ms*3.6;
            printf("Kmh: %.2f",Kmh);
            fprintf(fpointer,"Converted %.2f meter per second to %.2f meter per second",Ms,Kmh);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    else if(quantity == 'T'){
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
        printf("Enter 3 for Fahrenheit to Kelvin. \n");
        printf("Enter 4 for Kelvin to Fahrenheit. \n");
        scanf("%d",&tempChoice);
        if(tempChoice == 1){
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d",&userinputF);
            fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
            printf("Celcius: %d",fahrenheitToCelcius);
            fprintf(fpointer,"Converted %.2f Fahrenheit to %.2f Celsius", userinputF,fahrenheitToCelcius);
        }
        else if(tempChoice == 2){
            printf("Please enter the Celcius degree: \n");
            scanf("%d",&userinputC);
            celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
            printf("Fahrenheit: %d",celciusToFahrenheit);
            fprintf(fpointer,"Converted %.2f Celsius to %.2f Fahrenheit", userinputC,celciusToFahrenheit);
        }
        else if(tempChoice == 3){
            printf("Please enter the Fahrenheit degrees: \n");
            float fahrenheit;
            scanf("%f",&fahrenheit);
            float kelvin =  (fahrenheit - 32) *(5/9) + 273 ;
            printf("Kelvin: %.2f",kelvin);
            fprintf(fpointer,"Converted %.2f fahrenheit to %.2f kelvin", fahrenheit,kelvin);
        }
        else if(tempChoice == 4){
            printf("Please enter the Kelvin degree: \n");
            float kelvin;
            scanf("%f",&kelvin);
            float fahrenheit =  (kelvin - 273)*(9.0/5.0) + 32;
            printf("Fahrenheit: %.2f",fahrenheit);
            fprintf(fpointer,"Converted %.2f Kelvin to %.2f fahrenheit", kelvin,fahrenheit);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    else if(quantity == 'C') {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for INR to Euro. \n");
        printf("Enter 2 for INR to JPY. \n");
        printf("Enter 3 for INR to USD. \n");
        printf("Enter 4 for USD to INR. \n");
        scanf("%d",&currencyChoice);
        if(currencyChoice == 1){
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoEuro);
            INRtoEuro = userinputINRtoEuro * 0.012;
            printf("Euro: %.2f",INRtoEuro); 
            fprintf(fpointer,"Converted %.2f INRs to %.2f Euros", userinputINRtoEuro,INRtoEuro);
        }
        else if(currencyChoice == 2)
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoJPY);
            INRtoJPY = userinputINRtoJPY *1.61;
            printf("JPY: %.2f",INRtoJPY);
            fprintf(fpointer,"Converted %.2f INRs to %.2f JPYs", userinputINRtoJPY,INRtoJPY);
        }
        else if(currencyChoice == 3)
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoUSD);
            INRtoUSD = userinputINRtoUSD*0.013;
            printf("USD: %.2f",INRtoUSD);
            fprintf(fpointer,"Converted %.2f INRs to %.2f USDs", userinputINRtoUSD,INRtoUSD);
        }
        else if(currencyChoice==4)
        {
            printf("Please enter the USD amount: \n");
            scanf("%d",&userinputUSDtoINR);
            USDtoINR=userinputUSDtoINR*76.00;
            printf("INR: %.2f",USDtoINR);
            fprintf(fpointer,"Converted %.2f USDs to %.2f INRs", userinputUSDtoINR,USDtoINR);
        }
        else
            printf("Please enter correct choice. \n");
    }
    else if(quantity == 'M'){
        printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for ounces to pounds. \n");
        printf("Enter 2 for gram to pounds. \n");
        printf("Enter 3 for gram to carat. \n");
        printf("Enter 4 for carat to pounds.\n");
        scanf("%d",&massChoice);
        if(massChoice == 1)
        {
            printf("Please enter the ounce amount: \n");
            scanf("%d",&userinputOunce);
            ounceToPounds = userinputOunce * 0.0625;
            printf("Pounds: %.2f",ounceToPounds);
            fprintf(fpointer,"Converted %.2f Ounce to %.2f Pounds", userinputOunce,ounceToPounds);
        }
        else if(massChoice == 2)
        {
            printf("Please enter the gram amount: \n");
            scanf("%d",&userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("Pounds: %.2f",gramsToPounds);
            fprintf(fpointer,"Converted %.2f Grams to %.2f Pounds", userinputGram,gramsToPounds);
        }
        else if(massChoice==3)
        {
            printf("Please enter the gram amount: \n");
            scanf("%d",&userinputGram);
            gramsToCarat = userinputGram/0.2;
            printf("Carats: %.2f",gramsToCarat);
            fprintf(fpointer,"Converted %.2f grams to %.2f Carats", userinputGram,gramsToCarat);
        }
        else if(massChoice==4)
        {
            printf("Please enter the carats: \n");
            scanf("%d",&userinputCarat);
            caratToPounds = userinputCarat*0.000440925;
            printf("Pounds: %.2f",caratToPounds);
            fprintf(fpointer,"Converted %.2f Carats to %.2f Pounds", userinputCarat,caratToPounds);
        }
        else
            printf("Please enter the correct choice. \n");
    }
    else if(quantity == 'L'){
        printf("Welcome to Length Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for inches to meters. \n");
        printf("Enter 2 for meters to inches. \n");
        printf("Enter 3 for foot to meters. \n");
        printf("Enter 4 for meters to foot. \n");
        int lengthChoice;
        scanf("%d",&lengthChoice);
        if(lengthChoice == 1){
            printf("Please enter the inches amount: \n");
            float inches;
            scanf("%f",&inches);
            float Meters =  inches * 0.0254;
            printf("Meters: %.2f",Meters);
            fprintf(fpointer,"Converted %.2f inches to %.2f Meters", inches,Meters);
        }
        else if(lengthChoice == 2){
            printf("Please enter the meters amount: \n");
            float centimeters;
            scanf("%f",&centimeters);
            float inches =  centimeters / 0.0254;
            printf("Inches: %.2f",inches);
            fprintf(fpointer,"Converted %.2f centimeters to %.2f inches", centimeters,inches);
        }
        else if(lengthChoice == 3){
            printf("Please enter the foots amount: \n");
            float foot;
            scanf("%f",&foot);
            float meters =  foot * 0.3048;
            printf("Meters: %.2f",meters);
            fprintf(fpointer,"Converted %.2f foots to %.2f meters", foot, meters);
        }
        else if(lengthChoice == 4){
            printf("Please enter the meters amount: \n");
            float meters;
            scanf("%f",&meters);
            float foots =  meters / 0.3048;
            printf("Foots: %.2f",foots);
            fprintf(fpointer,"Converted %.2f meters to %.2f foots", meters, foots);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    return 0;
}
