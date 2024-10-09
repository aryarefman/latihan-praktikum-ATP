#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    switch(n)
    {
        case 200:
            printf("OK");
            break;

        case 201:
            printf("Created");
            break;

        case 301:
            printf("Moved Permanently");
            break;

        case 302:
            printf("Found");
            break;
            
        case 400:
            printf("Bad Request");
            break;

        case 401:
            printf("Not Authorised");
            break;

        case 403:
            printf("Forbidden");
            break;

        case 404:
            printf("Page Not Found");
            break;
            
        case 405:
            printf("Method Not Allowed");
            break;

        case 500:
            printf("Internal Service Error");
            break;

        case 503:
            printf("Service Unavailable");
            break;

        default:
            printf("error tidak diketahui");
    } 
    return 0;
}