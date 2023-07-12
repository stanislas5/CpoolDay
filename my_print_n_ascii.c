void my_print_n_ascii (int howMany)
{
    if (howMany<=0 || howMany>93)
        return;
    else {
        for (char x = '!' ; x <=howMany ; x++ ) {
          print_char(x);
        }
    } 
}