#include <stdio.h>

int main()
{
    char category; // variable to store the category of conversion
    int tempChoice;
    int currencyChoice;
    int massChoice;
    int userinputF;          // Fahrenheit input
    int userinputC;          // Celsius input
    int FahrenheitToCelsius; // variable that strores the result of Fahrenheit to Celsius conversion
    int CelsiusToFahrenheit; // variable that stores the result of Celsius to Fahrenheit conversion
    int userinputOunce;      // Ounce input
    float OuncetoPound;      // variable that stores the result of Ounce to Pound conversion
    int userinputGram;       // Gram input
    float GramtoPound;       // variable that stores the result of Gram to Pound conversion
    int userinputKSHtoUSD;   // Kenyan Shilling to USD
    int KSHtoUSD;            // variable that stores the result of Kenyan Shilling to USD conversion
    int userinputKSHtoEUR;   // Kenyan Shilling to Euro
    int KSHtoEUR;            // variable that stores the result of Kenyan Shilling to Euro conversion
    int userinputKSHtoJPY;   // Kenyan Shilling to Japanese Yen
    int KSHtoJPY;            // variable that stores the result of Kenyan Shilling to Japanese Yen conversion

    printf("Welcome to the Unit Converter!\n");
    printf("Please select a category for conversion:\n");
    printf("Enter 't' for Temperature conversion\n");
    printf("Enter 'c' for Currency conversion\n");
    printf("Enter 'm' for Mass conversion\n");
    printf("Enter your choice (t/c/m): ");
    scanf(" %c", &category); // space before %c to consume any newline character

    if (category == 't')
    {
        printf("You  have selected Temperature conversion.\n");
        printf("Enter 1 for Fahrenheit to Celsius\n");
        printf("Enter 2 for Celsius to Fahrenheit\n");
        printf("Enter your choice (1/2): ");
        scanf("%d", &tempChoice);

        if (tempChoice == 1)
        {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%d", &userinputF);
            FahrenheitToCelsius = (userinputF - 32) * 5 / 9;
            printf("Temperature in Celsius: %d\n", FahrenheitToCelsius);
        }
        else if (tempChoice == 2)
        {
            printf("Enter temperature in Celsius: ");
            scanf("%d", &userinputC);
            CelsiusToFahrenheit = (userinputC * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %d\n", CelsiusToFahrenheit);
        }
        else
        {
            printf("Invalid choice.\n");
            printf("Please restart the program and select a valid option.\n");
        }
    }
    else if (category == 'c')
    {
        printf("You selected Currency conversion.\n");
        printf("Enter 1 for Kenyan Shilling to USD\n");
        printf("Enter 2 for Kenyan Shilling to Euro\n");
        printf("Enter 3 for Kenyan Shilling to Japanese Yen\n");
        printf("Enter your choice (1/2/3): ");
        scanf("%d", &currencyChoice);

        if (currencyChoice == 1)
        {
            printf("Enter amount in Kenyan Shilling: ");
            scanf("%d", &userinputKSHtoUSD);
            KSHtoUSD = userinputKSHtoUSD / 110.0; // conversion rate
            printf("Amount in USD: %.2f\n", KSHtoUSD);
        }
        else if (currencyChoice == 2)
        {
            printf("Enter amount in Kenyan Shilling: ");
            scanf("%d", &userinputKSHtoEUR);
            KSHtoEUR = userinputKSHtoEUR / 130.0; // conversion rate
            printf("Amount in Euro: %.2f\n", KSHtoEUR);
        }
        else if (currencyChoice == 3)
        {
            printf("Enter amount in Kenyan Shilling: ");
            scanf("%d", &userinputKSHtoJPY);
            KSHtoJPY = userinputKSHtoJPY / 1.2; // conversion rate
            printf("Amount in Japanese Yen: %.2f\n", KSHtoJPY);
        }
        else
        {
            printf("Invalid choice");
            printf("Please restart the program and select a valid option.\n");
        }
    }
    else if (category == 'm')
    {
        printf("You selected Mass conversion.\n");
        printf("Enter 1 for Ounce to Pound\n");
        printf("Enter 2 for Gram to Pound\n");
        printf("Enter your choice (1/2): ");
        scanf("%d", &massChoice);

        if (massChoice == 1)
        {
            printf("Enter amount in Ounce: ");
            scanf("%d", &userinputOunce);
            OuncetoPound = userinputOunce / 16.0; // conversion rate
            printf("Amount in Pound: %.2f\n", OuncetoPound);
        }
        else if (massChoice == 2)
        {
            printf("Enter amount in Gram: ");
            scanf("%d", &userinputGram);
            GramtoPound = userinputGram / 453.592; // conversion rate
            printf("Amount in Pound: %.2f\n", GramtoPound);
        }
        else
        {
            printf("Invalid choice.\n");
            printf("Please restart the program and select a valid option.\n");
        }
    }
    else
    {
        printf("Invalid category selected.\n");
        printf("Please restart the program and select a valid category.\n");
    }
    return 0;
}