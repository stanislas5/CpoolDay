void print_char(char c);


void my_print_n_ascii (int howMany)
{
    if (howMany<=0 || howMany>=93)
        return;
    else {
        for (char x = '!' ; x <=howMany+35 ; x++ ) {
          print_char(x);
        }
    } 
}

