void print_char(char c);


void my_print_n_ascii (int howMany)
{
    if (howMany<=0 || howMany>=93)
        return;
    else {
        for (char x = '!' ; x <=howMany+32 ; x++ ) {
          print_char(x);
        }
    } 
}

int main (void)
{
   my_print_n_ascii(90) ;
}