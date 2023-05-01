 #include<stdio.h>
 #include<string.h>
 void Salting(char password[]);  // yeh function new pass print kare ga after the addition of new pass
 int main()
 {
      char password[100];
      scanf("%s",password);
      Salting(password);  // calling function
 }
 void Salting(char password[])
 {
       char salt []= "123";
       char newPassword[200];  // jis mian salt and old pass ko copy karain ga
      strcpy(newPassword,password); // pass ko newpasss main copy krna 
      strcat(newPassword,salt); // new pass = newpass + salt 
      puts(newPassword);

 }