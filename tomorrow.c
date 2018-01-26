
int
tomorrow() {
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today, tomorrow;
    const int daysPerMonth[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    printf("Enter todya's date (mm dd yyyyy): ");
    scanf("%i %i %i", &today.month, &today.day, &today.year);

    if(today.day != daysPerMonth[today.month -1]) {

    }
}
