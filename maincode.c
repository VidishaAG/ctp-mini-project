//data storage
//speed
#include <stdio.h>

int main() 
{
    //variable declaration
    char quantity;
    int dataChoice,speedChoice, tempChoice, currencyChoice, massChoice, userinputF, userinputC, userinputINRtoUSD, userinputUSDtoINR, userinputINRtoJPY, userinputINRtoEuro,
    userinputOunce, userinputGram, fahrenheitToCelcius, celciusToFahrenheit; 
    float USDtoINR, INRtoJPY, INRtoEuro, INRtoUSD, ounceToPounds, gramsToPounds, gramsToCarat, caratToPounds;
    //Menu for users to choose from
    printf("Welcome to Unit Converter!\n");
    printf("Here is a list of quantities to choose from: \n");
    printf("Temperature(T),Currency(C),Mass(M),Length(L),Time(T), Data(D), Speed(S) \n");
    printf("Please enter the letter you want to convert.\n");
    scanf("%c",&quantity);

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
            printf("Celcius: %.2f",Bytes);
        }
        else if(dataChoice == 2){
            printf("Please enter the Megabytes: \n");
            float Megabytes;
            scanf("%f",&Megabytes);
            float KiloBytes =  Megabytes*1024;
            printf("Celcius: %.2f",KiloBytes);
        }
        else if(dataChoice == 3){
            printf("Please enter the Gigabytes: \n");
            float Gigabytes;
            scanf("%f",&Gigabytes);
            float MegaBytes =  Gigabytes*1024;
            printf("Celcius: %.2f",MegaBytes);
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
        if(dataChoice == 1){
            printf("Please enter the Km/h: \n");
            float Kmh;
            scanf("%f",&Kmh);
            float ms =  Kmh*0.2778;
            printf("Celcius: %.2f",ms);
        }
        else if(dataChoice == 2){
            printf("Please enter the m/s: \n");
            float Ms;
            scanf("%f",&Ms);
            float Kmh =  Ms*3.6;
            printf("Celcius: %.2f",Kmh);
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
        }
        else if(tempChoice == 2){
            printf("Please enter the Celcius degree: \n");
            scanf("%d",&userinputC);
            celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
            printf("Fahrenheit: %d",celciusToFahrenheit);
        }
        else if(tempChoice == 3){
            printf("Please enter the Fahrenheit degrees: \n");
            float fahrenheit;
            scanf("%f",&fahrenheit);
            float kelvin =  (fahrenheit - 32) *(5/9) + 273 ;
            printf("Kelvin: %.2f",kelvin);
        }
        else if(tempChoice == 4){
            printf("Please enter the Kelvin degree: \n");
            float kelvin;
            scanf("%f",&kelvin);
            float fahrenheit =  (kelvin - 273)*(9.0/5.0) + 32;
            printf("Fahrenheit: %.2f",fahrenheit);
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
            printf("Euro: %.2f",INRtoEuro); // %.2f = rounds the float to only 2 decimal places;
        }
        else if(currencyChoice == 2)
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoJPY);
            INRtoJPY = userinputINRtoJPY *1.61;
            printf("JPY: %.2f",INRtoJPY);
        }
        else if(currencyChoice == 3) 
        {
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoUSD);
            INRtoUSD = userinputINRtoUSD*0.013;
            printf("USD: %.2f",INRtoUSD);
        }
        else if(currencyChoice==4)
        {
            printf("Please enter the USD amount: \n");
            scanf("%d",&userinputUSDtoINR);
            USDtoINR=userinputUSDtoINR*76.00;
            printf("INR: %.2f",USDtoINR)
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
        }
        else if(massChoice == 2) 
        {
            printf("Please enter the gram amount: \n");
            scanf("%d",&userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("Pounds: %.2f",gramsToPounds);
        }
        else if(massChoice==3)
        {
            printf("Please enter the gram amount: \n");
            scanf("%d",&userinputGram);
            gramsToCarat = userinputGram/0.2;
            printf("Carats: %.2f",gramsToCarat);
        }
        else if(massChoice==4)
        {
            printf("Please enter the carats: \n");
            scanf("%d",&userinputCarat);
            caratToPounds = userinputCarat*0.000440925;
            printf("Pounds: %.2f",caratToPounds);
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
            float centimeters =  inches * 0.0254;
            printf("Meters: %.2f",centimeters);
        }
        else if(lengthChoice == 2){
            printf("Please enter the meters amount: \n");
            float centimeters;
            scanf("%f",&centimeters);
            float inches =  centimeters / 0.0254;
            printf("Inches: %.2f",inches);
        }
        else if(lengthChoice == 3){
            printf("Please enter the foots amount: \n");
            float foot;
            scanf("%f",&foot);
            float meters =  foot * 0.3048;
            printf("Meters: %.2f",meters);
        }
        else if(lengthChoice == 4){
            printf("Please enter the meters amount: \n");
            float meters;
            scanf("%f",&meters);
            float foots =  meters / 0.3048;
            printf("Foots: %.2f",foots);
        }
        else
            printf("Please enter the correct choice. \n");
    }

    return 0;
}