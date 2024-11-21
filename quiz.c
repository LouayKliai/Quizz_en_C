#include<stdio.h>
#include <ctype.h>
typedef struct questiontype{
	char question[100];
	char reponse1[20];
	char reponse2[20];
	char reponse3[20];
	char reponse4[20];
	char reponse_correcte; 
	 } questiontype;
int main(){
		int i,nb_rep=0,choix,taille;
		char rep;
		
	  questiontype questions[50] = {
        {"Quel mot-cle est utilise pour declarer un entier en C?", "var", "int", "define", "static", 'B'},
        {"Quelle est l'extension d'un fichier source en C?", ".cpp", ".java", ".c", ".py", 'C'},
        {"Quelle fonction est utilise pour afficher du texte en C?", "print()", "System.out.print()", "printf()", "cout", 'C'},
        {"Quel est le symbole utilise pour le commentaire sur une seule ligne?", "#", "//", "/*", "*/", 'B'},
        {"Quel est le symbole utilise pour les operateurs logiques 'ET' en C?", "&", "&&", "||", "!", 'B'},
        {"Quelle bibliotheque est necessaire pour utiliser `printf` et `scanf`?", "stdlib.h", "string.h", "stdio.h", "math.h", 'C'},
        {"Quel est le mot-cle pour declarer une constante en C?", "final", "const", "static", "constant", 'B'},
        {"Quelle est la taille d'un entier (`int`) typique en C sur une machine 32 bits?", "2 octets", "4 octets", "8 octets", "16 octets", 'B'},
        {"Quel est l'operateur pour le modulo (reste de division) en C?", "/", "%", "*", "+", 'B'},
        {"Comment allouer dynamiquement de la memoire en C?", "new", "malloc", "alloc", "dynamic", 'B'},
        {"Quel est le mot-cle pour liberer de la memoire alloue dynamiquement en C?", "delete", "free", "remove", "release", 'B'},
        {"Quelle fonction est utilise pour lire une chaine de caracteres en C?", "getstring()", "gets()", "scanf()", "readline()", 'C'},
        {"Quelle boucle est utilise pour iterer un nombre fixe de fois?", "while", "do-while", "for", "foreach", 'C'},
        {"Que signifie `NULL` en C?", "Une variable vide", "Un pointeur non defini", "Un pointeur a 0", "Une chaine vide", 'B'},
        {"Comment inclure une bibliotheque en C?", "include()", "#include", "import", "using", 'B'},
        {"Comment definir une macro en C?", "macro", "#define", "const", "static", 'B'},
        {"Quel est le mot-cle pour une structure en C?", "struct", "class", "package", "module", 'A'},
        {"Quel est le mot-cle pour quitter une boucle en C?", "exit", "quit", "break", "stop", 'C'},
        {"Quel type de variable peut stocker une seule lettre?", "char", "string", "int", "letter", 'A'},
        {"Quel est le type de retour de la fonction `main` en C?", "void", "int", "char", "float", 'B'},
        {"Quelle fonction est utilise pour copier une chaine en C?", "strcpy()", "copy()", "strcat()", "strcopy()", 'A'},
        {"Quel operateur est utilise pour acceder au contenu d'un pointeur?", "&", "*", "->", ".", 'B'},
        {"Comment appelle-t-on une fonction en C?", "run()", "execute()", "call()", "invoke()", 'C'},
        {"Quelle est la valeur boolenne de `0` en C?", "true", "false", "undefined", "null", 'B'},
        {"Quelle est la valeur de la variable `a` apres cette operation : `int a = 5; a++;`?", "5", "6", "4", "Erreur", 'B'},
        {"Quel est l'operateur pour comparer l'egalite entre deux variables?", "=", "==", "!=", "===", 'B'},
        {"Quel est le mot-cle pour passer un argument par reference?", "ref", "pointer", "pass", "Il n'y en a pas", 'D'},
        {"Quelle bibliotheque inclut les fonctions mathematiques en C?", "stdio.h", "stdlib.h", "math.h", "string.h", 'C'},
        {"Quelle est la priorite des operateurs mathematiques en C?", "Multiplication avant addition", "Addition avant division", "Gauche a droite", "Aucune", 'A'},
        {"Que fait la fonction `strlen()`?", "Compte les caracteres dans un tableau", "Compte les caracteres dans une chaine", "Retourne la taille d'un tableau", "Compte les mots", 'B'},
        {"Quel est l'equivalent de `a += b` en C?", "a = a + b", "a = b + a", "a = b", "a = a - b", 'A'},
        {"Quel est le type d'une fonction qui ne retourne aucune valeur?", "int", "void", "null", "char", 'B'},
        {"Quel est le role de `return` dans une fonction?", "Arreter le programme", "Retourner une valeur", "Ignorer une boucle", "Compiler le code", 'B'},
        {"Quelle fonction est utilise pour convertir une chaine en entier?", "atoi()", "itoa()", "stringtoint()", "parseInt()", 'A'},
        {"Quel est l'operateur utilise pour acceder aux champs d'une structure?", ".", "->", "*", "&", 'A'},
        {"Comment appelle-t-on un pointeur qui ne pointe sur rien?", "Un pointeur NULL", "Un pointeur vide", "Un pointeur casse", "Un pointeur perdu", 'A'},
        {"Quel est le mot-cle pour creer une union en C?", "union", "struct", "combine", "join", 'A'},
        {"Comment comparer deux chaines en C?", "==", "equals()", "strcmp()", "compare()", 'C'},
        {"Comment declarer un tableau de 10 entiers en C?", "int array[10];", "int array = {10};", "int array(10);", "int array{10};", 'A'},
        {"Quel est le type de retour de `sizeof`?", "int", "long", "size_t", "double", 'C'},
        {"Quel est l'equivalent de `a = a * b`?", "a *= b", "a = b * a", "a * b = a", "a = b * a * a", 'A'},
        {"Comment verifier si deux variables pointent vers le meme espace memoire?", "==", "compare()", "same()", "&", 'A'},
        {"Quelle fonction est utilise pour arreter un programme en cas d'erreur?", "exit()", "stop()", "abort()", "close()", 'C'},
        {"Quelle est la valeur d'un pointeur non initialise?", "NULL", "Aleatoire", "0", "Inconnu", 'B'},
        {"Comment initialiser un tableau en C?", "{1,2,3}", "array(1,2,3)", "[1,2,3]", "list[1,2,3]", 'A'},
        {"Quel est le role de `#pragma` en C?", "Optimiser le code", "Fournir des directives au compilateur", "declarer une variable", "creer des macros", 'B'},
        {"Que signifie `typedef` en C?", "Renommer un type", "creer un pointeur", "Allouer de la memoire", "creer une macro", 'A'},
        {"Quelle est la bibliotheque utilise pour manipuler des chaines?", "string.h", "stdio.h", "stdlib.h", "math.h", 'A'}
    };



printf("=====================================================================================================================\n");
printf("Bonjour, bienvenue dans le quiz de programmation C!\n");
printf("=====================================================================================================================\n\n\n\n");	

printf("1.Passer le quiz \n");
printf("2.creer un quiz \n");
do{
	printf("entrer votre choix: ");
	scanf("%d",&choix);
}while(choix !=1 && choix!=2);

if(choix==1){
	for(i=0;i<48;i++){
		printf("%d)%s\n\n A)%s\n B)%s\n C)%s\n D)%s\n\n",i,questions[i].question,questions[i].reponse1,questions[i].reponse2,questions[i].reponse3,questions[i].reponse4);
		printf("votre reponse : ");
		scanf(" %c",&rep);
		if(toupper(rep) == questions[i].reponse_correcte ){
			printf("Correct .\n");
			nb_rep++;
		}else{
			printf("Incorrect .\n");
		}
	}
	printf("Votre score est %f",((float)nb_rep/47)*100);
}
else{
	do{
		printf("donner nb des question : ");
		scanf("%d",&taille);
	}while(taille<10);
	printf("pas encore developer\n");
}
printf("A bientot.");
}
