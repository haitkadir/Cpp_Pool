// #include <iostream>
// #include <ctime>
// using namespace std;

// int main()
// {
// 	time_t curr_time;
// 	curr_time = time(NULL);

//     char buffer[256];
//     strftime(buffer, sizeof(buffer), "%a %b %d %H:%M:%S %Y", );
//     cout << curr_time << endl;

// 	tm *tm_local = localtime(&curr_time);
// 	cout << "Current local time : " << tm_local->tm_year << ":" << tm_local->tm_mon << ":" << tm_local->tm_mday;
// 	return 0;
// }

#include <ctime>
#include <iostream>
 
int main()
{
    std::time_t t = std::time(NULL);
    char mbstr[255];
    if (std::strftime(mbstr, sizeof(mbstr), "[%G%m%e_%I%M%S]", std::localtime(&t))) {
        std::cout << mbstr << std::endl;
    }

}