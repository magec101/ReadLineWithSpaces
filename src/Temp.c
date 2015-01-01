main()
{
    int i, j;
    char ch;
    
    i = 'A';
    
    printf("%c %d", i, i);
    
    ch = getchar();
    
    printf("%c %d", ch, ch);
    while((j=getchar()) == '\n');
    
    j = getchar();
    printf("%c %d", j, j);
}