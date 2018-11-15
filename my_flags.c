int flags_search(char *str, int i)
{
    int counter = 0;
    if (str[i] == '+' || str[i] == ' ' || str[i] == '-' || str[i] == '#') {
        while (str[i] == '+' || str[i] == ' ' || str[i] == '-' || str[i] == '#') {
            counter += 1;
            i += 1;
        }
        return (counter);
    }
    else
        return (0);
}

char *flag(char *str, int i) // bad return 
{
    int n = 0;
    char flags[flags_search(str, i)];
    flags[flags_search(str, i)] = '\0';
    while (str[i] == '+' || str[i] == ' ' || str[i] == '-' || str[i] == '#') {
        flags[n] = str[i];
        n += 1;
        i += 1;
    }
    return (flags);
}

int precision_search(char *str, int i)
{
    int result = 0;
    while (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) {
        if (str[i] == '.') {
            i += 1;
            while (str[i] >= '0' && str[i] <= '9') {
                result = ((result * 10) + (str[i] - '0'));
                i += 1;
            }
            return (result);
        }
        else
            i += 1;
    }
    return (-1);
}

int width(char *str, int i)
{
    int result = 0;
    if (str[i] >= '0' && str[i] <= '9') {
        while (str[i] >= '0' && str[i] <= '9') {
            result = ((result * 10) + (str[i] - '0'));
            i += 1;
        }
        return (result);
    }
    else
        return (0);
}





































