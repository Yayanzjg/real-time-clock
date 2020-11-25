#include <Arduino.h>
#include <TimeLib.h>

typedef struct
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
} datetime_t;

/**
 * @brief This function is used to display the menu on the terminal.
 *        The menu has two options. One for setting date and time of 
 *        the RTC and the onther one for getting the current date and 
 *        time of the RTC and display it on the terminal.
 * 
 */
static void display_menu(void)
{
}

/**
 * @brief This function is used to read the command from the user.
 *        The commands can be 'S' for setting date and time of the RTC, 
 *        'G' for getting the current date and time of the RTC and display it or
 *        '\\n' for printing a new line and displaying the menu.
 * 
 * @return The command can be 'S', 'G' or '\\n'.
 */
static char read_command(void)
{
}

/**
 * @brief This function is used to read date and time in the fromat of YYYY-MM-DD hh:mm:ss 
 * 
 *        from the user and format it in the structure of datetime_t and return it.
 * @return datetime_t The formated date and time in the structure of datetime_t.
 */
static datetime_t read_datetime(void)
{
    datetime_t x; 
    Serial.println("\nType in the date: YYYY-MM-DD hh:mm:ss\n");
    scanf("%d,%d,%d,%d,%d,%d",&x.year,&x.month,&x.day,&x.hour,&x.minute,&x.second);
    

    return x;
}

/**
 * @brief This function is used to set date and time of the RTC.
 *        To set date and time of the RTC you can use the setTime function.
 * 
 * @param datetime The structured date and time which is used to initialize the RTC.
 */
static void set_datetime(datetime_t datetime)
{
}

/**
 * @brief This function is used to get the current date and time of the RTC and display it for the user.
 *        To get the current date and time of the RTC, you can use the year, month, day, hour, minute and second functions.
 *        The displayed date and time shall be in the formate of YYYY-MM-DD hh:mm:ss.
 * 
 */
static void get_current_datetime(void)
{
}

void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
        ;
    }
}

void loop()
{
    display_menu();

    char command = read_command();

    if (command == 'S')
    {
        datetime_t temp = read_datetime(); // Get date and time from the user
        set_datetime(temp);                // Set the RTC
    }
    else if (command == 'G')
    {
        get_current_datetime();
        // Get the current date and time of the RTC and Display it for the user
    }
    else if (command == '\n')
    {
        Serial.println("\n");
    }
}
