static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    //{ "  ", "checkupdates | wc -l",               60,                 0 },
    //{ "",    "brightness",                         2,                  0 },
    //{" Network: ", "/home/lex/.local/bin/wifi.sh", 5      0},
    { "",    "$HOME/.local/bin/volume",              1,                 0 },
    { "",    "$HOME/.local/bin/battery",             1,                 0 },
    { "",    "date '+ %d/%m/%Y   %H:%M%p '",       2,                 0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
