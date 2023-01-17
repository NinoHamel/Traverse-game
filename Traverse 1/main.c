#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<math.h>
#include <time.h>

 #define TAILLE_MAX 1000








// Structure de chaque pion : un type ( carré,... ) et le joueur auquel il appartient //

typedef struct pions pions;
struct pions {
  int type;
  int joueur;

};



// Partie consacrée aux fonctions et procédures //



void initialisation(pions traverse[10][10])
{
   for (int i=0;i<10;i++)
   {
    for (int j=0;j<10;j++)
        {
        traverse[i][j].type=0;
        traverse[i][j].joueur=0;
        }
   }
}

/* --------------------------------- */

void affichage(pions traverse[10][10]) // procédure qui affiche l'échiquier //

{
     int k ; int c; int i;

     for(i=0;i<10;i++)
     {
         printf(" %d  ",i);
     }

     printf("\n");



     for(k=0;k<10;k++)
      {
          for(c=0;c<10;c++)
           {
               if (traverse[k][c].type == 0)
                {
                    printf("|  |");
                }

                else if (traverse[k][c].type == 1 || traverse[k][c].type == 8 || traverse[k][c].type == 10 || traverse[k][c].type == 17 ||
                traverse[k][c].type == 26 || traverse[k][c].type == 33 || traverse[k][c].type == 18 || traverse[k][c].type == 25)
                {
                    printf("|ca|");
                }

                else if (traverse[k][c].type == 2 || traverse[k][c].type == 7 || traverse[k][c].type == 11 || traverse[k][c].type == 16 ||
                traverse[k][c].type == 19 || traverse[k][c].type == 24 || traverse[k][c].type == 27 || traverse[k][c].type == 32)
                 {
                     printf("|tr|");
                 }

                 else if (traverse[k][c].type == 3 || traverse[k][c].type == 6 || traverse[k][c].type == 12 || traverse[k][c].type == 15 ||
                traverse[k][c].type == 20 || traverse[k][c].type == 23 || traverse[k][c].type == 28 || traverse[k][c].type == 31)
                  {
                      printf("|lo|");
                  }

                  else if (traverse[k][c].type == 4 || traverse[k][c].type == 5 || traverse[k][c].type == 13 || traverse[k][c].type == 14 ||
                traverse[k][c].type == 21 || traverse[k][c].type == 22 || traverse[k][c].type == 29 || traverse[k][c].type == 30)
                   {
                       printf("|ce|");
                   }
           }
           printf("  %d  ",k);
           printf("\n");

      }

      printf("\n");
      printf("\n");
}

pions traverse[10][10];

/* --------------------------------- */

void depart(pions traverse[10][10],int nbr_joueur)
{


    initialisation(traverse);

        traverse[0][1].type=1;
        traverse[0][2].type=2;
        traverse[0][3].type=3;
        traverse[0][4].type=4;
        traverse[0][5].type=5;
        traverse[0][6].type=6;
        traverse[0][7].type=7;
        traverse[0][8].type=8;
        traverse[9][1].type=10;
        traverse[9][2].type=11;
        traverse[9][3].type=12;
        traverse[9][4].type=13;
        traverse[9][5].type=14;
        traverse[9][6].type=15;
        traverse[9][7].type=16;
        traverse[9][8].type=17;



        traverse[0][1].joueur=1;
        traverse[0][2].joueur=1;
        traverse[0][3].joueur=1;
        traverse[0][4].joueur=1;
        traverse[0][5].joueur=1;
        traverse[0][6].joueur=1;
        traverse[0][7].joueur=1;
        traverse[0][8].joueur=1;
        traverse[9][1].joueur=2;
        traverse[9][2].joueur=2;
        traverse[9][3].joueur=2;
        traverse[9][4].joueur=2;
        traverse[9][5].joueur=2;
        traverse[9][6].joueur=2;
        traverse[9][7].joueur=2;
        traverse[9][8].joueur=2;


        if(nbr_joueur == 3 || nbr_joueur == 4){ //3 joueurs
            traverse[1][0].type=18;
            traverse[2][0].type=19;
            traverse[3][0].type=20;
            traverse[4][0].type=21;
            traverse[5][0].type=22;
            traverse[6][0].type=23;
            traverse[7][0].type=24;
            traverse[8][0].type=25;

            traverse[1][0].joueur=3;
            traverse[2][0].joueur=3;
            traverse[3][0].joueur=3;
            traverse[4][0].joueur=3;
            traverse[5][0].joueur=3;
            traverse[6][0].joueur=3;
            traverse[7][0].joueur=3;
            traverse[8][0].joueur=3;
        }

        if(nbr_joueur == 4){ //4 joueurs
            traverse[1][9].type=26;
            traverse[2][9].type=27;
            traverse[3][9].type=28;
            traverse[4][9].type=29;
            traverse[5][9].type=30;
            traverse[6][9].type=31;
            traverse[7][9].type=32;
            traverse[8][9].type=33;

            traverse[1][9].joueur=4;
            traverse[2][9].joueur=4;
            traverse[3][9].joueur=4;
            traverse[4][9].joueur=4;
            traverse[5][9].joueur=4;
            traverse[6][9].joueur=4;
            traverse[7][9].joueur=4;
            traverse[8][9].joueur=4;
        }

    affichage(traverse);
}



     /* --------------------------------- */

    /* Dans toute le programme,

    Le paramètre a représente le numéro de la ligne que l'on veut modifier ;

    le paramètre b représente le numero de la colonne que l'on veut modifier ;

    le paramètre c représente le numéro de la ligne que va saisir l'utilisateur pour modifier la position de son pion ;

     le paramètre d représente le numéro de la colonne  que va saisir l'utilisateur pour modifier la position de son pion ;


    */

    // Fonction concernant la version � deux joueurs //

    int  carre_valide(pions traverse[10][10],  int a , int b , int c , int d) // fonction qui teste si le déplacement d'un carré est valide //
     {
         if( a != c && b != d )
          {
             return 0;
          }

          else if(c>=a+2 || d>=b+2)
           {
               return 0;
           }

          else
            return 1;




     }

     /* --------------------------------- */

     int losange_valide(pions traverse[10][10], int a , int b , int c , int d) // fonction qui teste si le déplacement d'un losange est valide //

     {


        if(c == a+1 && d == b-1)
         {
             return 1;
         }

         else if(c == a+1 && d == b+1)
          {
              return 1;
          }

          else if(c == a-1 && d == b+1)
           {
               return 1 ;
           }

           else if(c == a-1 && d == b-1)
            {
                return 1;
            }

            else
              return 0;

     }

     /* --------------------------------- */


     // fonction qui teste si le déplacement d'un triangle est valide //


     int triangle_valide(pions traverse[10][10], int a , int b , int c , int d)

     {


       if (traverse[a][b].joueur == 1)
       {

       if(d == b+1 && c == a+1)
        {
            return 1;
        }

        else if(d == b-1 && c == a+1)
        {
            return 1;
        }



        else if(c == a-1 && d == b)
         {
             return 1 ;
         }

         else
           return 0;
        }

        else if(traverse[a][b].joueur == 2)
         {
             if(d == b+1 && c == a-1)
              {
                  return 1;
              }

              else if(d == b-1 && c == a-1)
               {
                   return 1 ;
               }

               else if ( c == a+1 && d == b)
               {
                   return 1;
               }

               else
                 return 0;


         }

        else if (traverse[a][b].joueur == 3)
          {
              if(c == a && d == b-1)
               {
                   return 1;
               }

               else if (c == a+1 && d == b+1)
                {
                    return 1 ;
                }

                else if (c == a-1 && d == b+1)
                 {
                     return 1 ;
                 }

                 else
                  return 0;
          }

          else if (traverse[a][b].joueur == 4)
           {
               if(c == a && d == b)
                {
                    return 1 ;
                }

                 else if (c == a+1 && d == b-1)
                {
                    return 1 ;
                }

                else if (c == a-1 && d == b-1)
                 {
                     return 1 ;
                 }

                 else
                  return 0;


           }

     }






     int cercle_valid(pions traverse[10][10], int a , int b , int c , int d) // fonction qui teste si le deplacement d'un cercle est valide //

     {
         if (traverse[a][b].joueur == 1 || traverse[a][b].joueur == 2 || traverse[a][b].joueur == 3 || traverse[a][b].joueur == 4)
         {



         if(c == a+1 && d == b+1)
          {
              return 1;
          }

          else if(c == a+1 && d == b-1)
           {
               return 1;
           }

           else if(c == a-1 && d == b+1)
            {
                return 1;
            }

            else if(c == a-1 && d == b-1)
             {
                 return 1;
             }

             else if(c == a+1 && d == b)
              {
                  return 1;
              }

              else if(c == a-1 && d == b)
               {
                   return 1;
               }

               else if (d == b+1 && c == a)
                {
                    return 1;
                }

                else if(d == b-1 && c == a)
                 {
                     return 1 ;
                 }

                 else
                  return 0;
         }
     }






             void deplacement(pions traverse[10][10],int a , int b, int c , int d)
             {

                    traverse[c][d].type = traverse[a][b].type; //déplacement du pion
                    traverse[c][d].joueur = traverse[a][b].joueur;

                    traverse[a][b].type = 0;
                    traverse[a][b].joueur = 0;


                     affichage(traverse);
             }


            int  condition_arret(pions traverse[10][10], int i , int j)   // pas utilisée dans le main car si arrivée alors départ
            {

               for(j=1;j<9;j++)
                {
                    if(traverse[0][j].type != 0)
                     {
                         return 0;
                     }
                }

                for(i=1;i<9;i++)
                 {
                     if(traverse[9][i].type != 0)
                      {
                          return 0;
                      }
                 }
                 return 1;
            }

           int possibilites(pions traverse[10][10],int i, int j) // même chose

             {
               for(i=1;i<9;i++)
                {
                    while(traverse[0][i].type != 0)
                     {
                         return 0;
                     }
                }

                for(j=1;j<9;j++)
                 {
                     while(traverse[9][j].type != 0)
                      {
                          return 0;
                      }
                 }
                 return 1;
             }


            int victoire(pions traverse[10][10])

             {
                 int i;
                 int j;

                int somme1 = 0; int somme2 = 0;int somme3 =0;int somme4 = 0;


                for(i=1;i<9;i++)
                 {
                    somme1 = somme1 + traverse[0][i].type;
                 }

                 for(j=1;j<9;j++)
                  {
                      somme2 = somme2 + traverse[9][j].type;
                  }

                  for(j=1;j<9;j++)
                  {
                      somme3 = somme3 + traverse[i][0].type;
                  }

                  for(j=1;j<9;j++)
                  {
                      somme4 = somme4 + traverse[j][0].type;
                  }

                  if(somme1 == 108 || somme2 == 36 || somme3 == 236 || somme4 == 172)
                   {
                       return 1;
                   }

                   else
                     return 0;

             }

             /* --------------------------------- */




            /* --------------------------------- */

            void init(int tab[10][10]) // useless
             {
                 int i ; int j;

                 for (i= 0;i<10;i++)
                  {
                      for(j=0;j<10;j++)
                       {
                           tab[i][j] = 0;
                       }
                  }
             }




            // Procedure match nul pour le carre //

            void carrematchnul(pions traverse[10][10] ,  int tab[30][30], int a , int b)
            {
                int i ; int j; int k;

                int repetition = 0;

                 if (traverse[a][b].type == 1 )
                  {
                       tab[a][b]++;

                     if (tab[a][b] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }
                  }

                  else if (traverse[a][b].type == 8)
                   {
                       tab[a+1][b+1]++;

                     if (tab[a+1][b+1] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }
                  }

                  else if (traverse[a][b].type == 10)
                   {
                       tab[a+2][b+2]++;


                     if (tab[a+2][b+2] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  else if (traverse[a][b].type == 17)
                   {
                       tab[a+3][b+3]++;


                     if (tab[a+3][b+3] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  for(i=0;i<30;i++)
                   {
                       for(j=0;j<30;j++)
                        {
                            if(tab[i][j] == 2)
                             {
                                 printf("bonjour\n");
                             }
                        }
                   }

                }



                // Procedure  match nul pour le triangle //


                void trianglematchnul(pions traverse[10][10] , int tab[30][30], int a , int b)
              {
                int i ; int j; int k;



                int repetition = 0;


                 if (traverse[a][b].type == 2) // || traverse[a][b].type == 7 || traverse[a][b].type == 11 || traverse[a][b].type == 16) //
                  {
                       tab[a+15][b+15]++;


                     if (tab[a+15][b+15] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  else if (traverse[a][b].type == 7)
                  {
                      tab[a+4][b+4]++;


                     if (tab[a+4][b+4] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  else if(traverse[a][b].type == 11)
                  {
                     tab[a+5][b+5]++;


                     if (tab[a+5][b+5] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  else if (traverse[a][b].type == 16)
                  {
                      tab[a+6][b+6]++;


                     if (tab[a+6][b+6] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }


                  }





                }


                // Procedure match nul losange //

                 void matchnullosange(pions traverse[10][10] , int tab[30][30], int a , int b)
               {
                int i ; int j; int k;



                int repetition = 0;


                 if (traverse[a][b].type == 3) //|| traverse[a][b].type == 6 || traverse[a][b].type == 12 || traverse[a][b].type == 15) //
                  {
                       tab[a+7][b+7]++;


                     if (tab[a+7][b+7] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  else if(traverse[a][b].type == 6)
                  {
                     tab[a+8][b+8]++;


                     if (tab[a+8][b+8] == 3)
                       {
                           printf("C'est un match nul  \n");

                           exit(1);
                       }



                  }

                  else if(traverse[a][b].type == 12)
                  {
                    tab[a+9][b+9]++;


                     if (tab[a+9][b+9] == 3)
                       {
                           printf("C'est un match nul \n");

                           exit(1);
                       }

                  }

                  else if(traverse[a][b].type == 15)
                  {
                     tab[a+10][b+10]++;


                     if (tab[a+10][b+10] == 3)
                       {
                           printf("C'est un match nul \n");

                           exit(1);
                       }


                  }



                 }

                 // Procedure match nul cercle //

                  void matchnulcercle(pions traverse[10][10] , int tab[30][30], int a , int b)
                {
                int i ; int j; int k;



                int repetition = 0;


                 if (traverse[a][b].type == 4) //|| traverse[a][b].type == 5 || traverse[a][b].type == 13 || traverse[a][b].type == 14) //
                  {
                       tab[a+11][b+11]++;


                     if (tab[a+11][b+11] == 3)
                       {
                           printf("C'est un match nul \n");

                           exit(1);
                       }



                  }

                  else if(traverse[a][b].type == 5)

                  {
                      tab[a+12][b+12]++;


                     if (tab[a+12][b+12] == 3)
                       {
                           printf("C'est un match nul \n");

                           exit(1);
                       }


                  }


                  else if( traverse[a][b].type == 13 )

                  {
                      tab[a+13][b+13]++;


                     if (tab[a+13][b+13] == 3)
                       {
                           printf("C'est un match nul \n");

                           exit(1);
                       }


                  }


                  else if (traverse[a][b].type == 14)

                  {
                       tab[a+14][b+14]++;


                     if (tab[a+14][b+14] == 3)
                       {
                           printf("C'est un match nul \n");

                           exit(1);
                       }


                  }




                }


       /* ---------------------------------- */


         void sauvegarde(pions traverse[11][10],int k,int tab[30][30],int tour_joueur)
                    {
                        FILE* fichier = NULL;
                        int i ; int j;

                        fichier = fopen("tra.txt","w");

                        if (fichier != NULL)
                        {

                            for(i=0;i<10;i++)
                             {
                                 for(j=0;j<10;j++)
                                  {
                                     fprintf(fichier,"%d %d %d %d\n",traverse[i][j].type,traverse[i][j].joueur,k,tour_joueur);
                                  }
                             }

                            }


                        fclose(fichier);


                    }



         void lecture(pions traverse[10][10],int* k,int tab[30][30],int* tour_joueur)
                    {
                        int i ; int j ;

                        FILE* fichier = NULL;

                        fichier = fopen("tra.txt","r");

                        if(fichier != NULL)
                        {

                            for(i=0;i<10;i++)
                             {
                                 for(j=0;j<10;j++)
                                  {
                                       fscanf(fichier,"%d %d %d %d",&traverse[i][j].type,&traverse[i][j].joueur,k,tour_joueur);
                                  }
                             }

                            // fscanf(fichier,"%d",&tour_joueur);

                                 /* printf("la valeur de k est %d \n",k);

                                printf("la valeur du joueur est %d \n",traverse[8][1].joueur);

                                printf("la valeur du joueur est %d \n",traverse[1][1].joueur);

                                printf("la valeur du tableau est %d \n",tab[0][1]);*/

                        }

                         fclose(fichier);





                    }




        /*---------------------------*/
        // AKA NINO FUSION PROGRAMME //

        int triangle(pions traverse[10][10],int a,int b,int c,int d)
            {
                switch(traverse[a][b].joueur){
                    case 1: //joueur 1
                        if(a+2==c){ //même ligne ?
                            if(traverse[a+1][b+1].type!=0 && b+2 == d){ //on test si il y a un pion pour effecter le saut (à droite?)
                                    return 1;
                                }
                            if(traverse[a+1][b-1].type!=0 && b-2 == d){ //on teste si il y a un pion pour effecter le saut (à gauche?)
                                    return 1;
                                }
                        }

                        if(b==d){ //test pour le deplacement derriere
                            if(traverse[a-1][b].type!=0 && a-2 == c){
                                return 1;
                            }
                        }
                        else {return 0;}

                    case 2: //joueur 2
                        if(a-2==c){ //même ligne ?
                            if(traverse[a-1][b+1].type!=0 && b+2 == d){ //on teste si il y a un pion pour effecter le saut (à droite?)
                                    return 1;
                                }
                            if(traverse[a-1][b-1].type!=0 && b-2 == d){ //on teste si il y a un pion pour effecter le saut (à gauche?)
                                    return 1;
                                }
                        }

                        if(b==d){ //test pour le deplacement derriere
                            if(traverse[a+1][b].type!=0 && a+2 == c){
                                return 1;
                            }
                        }
                        else {return 0;}

                    case 3: //joueur 3
                        if(b+2==d){ //même colonne ?
                            if(traverse[a-1][b+1].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                    return 1;
                                }
                            if(traverse[a+1][b+1].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                    return 1;
                                }
                        }

                        if(a==c){ //test pour le déplacement derrière
                            if(traverse[a][b-1].type!=0 && b-2 == d){
                                return 1;
                            }
                        }
                        else {return 0;}

                    case 4: //joueur 4
                        if(b-2==d){ //même colonne ?
                                if(traverse[a-1][b-1].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                        return 1;
                                    }
                                if(traverse[a+1][b-1].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                        return 1;
                                    }
                            }

                        if(a==c){ //test pour le deplacement derriere
                            if(traverse[a][b+1].type!=0 && b+2 == d){
                                return 1;
                            }
                        }
                        else {return 0;}
                    }
            }

        int saut(pions traverse[10][10],int a, int b, int c, int d)
            {

                if (traverse[a][b].type == 1 || traverse[a][b].type == 8 || traverse[a][b].type == 10 || traverse[a][b].type == 17 ||
                traverse[a][b].type == 26 || traverse[a][b].type == 33 || traverse[a][b].type == 18 || traverse[a][b].type == 25)
                {
                 //si le pion est un carre
                        if(b==d){ //même colonne ?
                            if(traverse[a+1][b].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                    return 1;
                                }
                            if(traverse[a-1][b].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                    return 1;
                                }
                        }

                        if(a==c){ //même ligne ?
                            if(traverse[a][b+1].type!=0 && b+2 == d){ //on teste si il y a un pion pour effecter le saut (à droite?)
                                    return 1;
                                }
                            if(traverse[a][b-1].type!=0 && b-2 == d){ //on teste si il y a un pion pour effecter le saut (à gauche?)
                                    return 1;
                                }
                        }

                        return 0; //debug
                    }




                //triangle
                else if (traverse[a][b].type == 2 || traverse[a][b].type == 7 || traverse[a][b].type == 11 || traverse[a][b].type == 16 ||
                traverse[a][b].type == 19 || traverse[a][b].type == 24 || traverse[a][b].type == 27 || traverse[a][b].type == 32){

                    return(triangle(traverse,a,b,c,d));
                }

                //losange

                else if (traverse[a][b].type == 3 || traverse[a][b].type == 6 || traverse[a][b].type == 12 || traverse[a][b].type == 15 ||
                traverse[a][b].type == 20 || traverse[a][b].type == 23 || traverse[a][b].type == 28 || traverse[a][b].type == 31){

                    if(b+2==d){ //à droite ?
                        if(traverse[a+1][b+1].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                return 1;
                            }
                        if(traverse[a-1][b+1].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                return 1;
                            }
                    }

                    if(b-2==d){ //à gauche ?
                        if(traverse[a+1][b-1].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                return 1;
                            }
                        if(traverse[a-1][b-1].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                return 1;
                            }
                    }

                    return 0; //debug
                }


                //cercle

                else if (traverse[a][b].type == 4 || traverse[a][b].type == 5 || traverse[a][b].type == 13 || traverse[a][b].type == 14 ||
                traverse[a][b].type == 21 || traverse[a][b].type == 22 || traverse[a][b].type == 29 || traverse[a][b].type == 30){

                    if(b+2==d){ //à droite ?
                            if(traverse[a+1][b+1].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                    return 1;
                                }
                            if(traverse[a-1][b+1].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                    return 1;
                                }
                        }

                        if(b-2==d){ //à gauche ?
                            if(traverse[a+1][b-1].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                    return 1;
                                }
                            if(traverse[a-1][b-1].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                    return 1;
                                }
                        }

                        if(b==d){ //même colonne ?
                            if(traverse[a+1][b].type!=0 && a+2 == c){ //on teste si il y a un pion pour effecter le saut (en bas?)
                                    return 1;
                                }
                            if(traverse[a-1][b].type!=0 && a-2 == c){ //on teste si il y a un pion pour effecter le saut (en haut?)
                                    return 1;
                                }
                        }

                        if(a==c){ //même ligne ?
                            if(traverse[a][b+1].type!=0 && b+2 == d){ //on teste si il y a un pion pour effecter le saut (à droite?)
                                    return 1;
                                }
                            if(traverse[a][b-1].type!=0 && b-2 == d){ //on teste si il y a un pion pour effecter le saut (à gauche?)
                                    return 1;
                                }
                        }

                        return 0; //debug
                    }

                    else {return 0;} //le mouvement n'est pas un saut
            }


        void saut2(pions traverse[10][10],int a, int b, int c, int d){
            int var_saut = 1;


            while(var_saut != 0){ //necessaire si on veut faire plusieurs sauts
                deplacement(traverse,a,b,c,d);

                printf("Rentrer 1 pour faire un autre saut ou un autre chiffe si vous ne voulez rien faire\n");
                scanf("%d", &var_saut);

                if(var_saut == 1){ //nouveau saut
                    do{

                        printf("entrez la nouvelle ligne \n");
                        scanf("%d",&c);
                        printf("entrez la nouvelle colonne \n");
                        scanf("%d",&d);

                        if( a == c && b == d ){             // condition de débugage au cas ou on a entré 1 mais on veut finalement pas de 2nd saut
                            var_saut=0;

                            printf("\n\n\n");
                            affichage(traverse);
                        }

                    } while( (saut(traverse,a,b,c,d)!=1) && var_saut != 0 ); //redemander si le saut n'est pas valide ou passer si on ne veut plus faire de saut
                }

                else{var_saut=0;} // ne plus faire de sauts
            }
}

        void tour(pions traverse[10][10],int a ,int b , int c , int d)
        {
            switch(traverse[a][b].joueur)

            {
                case 1:
                    traverse[c][d].joueur = 1;
                    break;

                case 2:
                    traverse[c][d].joueur = 2;
                    break;

                case 3:
                    traverse[c][d].joueur = 3;
                    break;

                case 4:
                    traverse[c][d].joueur = 4;
                    break;
            }
        }

        int changement_tour(int nbr_joueur, int tour_joueur){

            switch(nbr_joueur){

                case 0: // joueur vs IA

                return 2;

                case 2: // joueur vs joueur

                if(tour_joueur == 2){
                    return 1;
                    }

                else{return tour_joueur+1;}

                case 3: // 3 joueurs

                if(tour_joueur == 3){
                    return 1;
                    }

                else{return tour_joueur+1;}


                case 4: // 4 joueurs

                if(tour_joueur == 4){
                    return 1;
                    }

                else{return tour_joueur+1;}

                }
        }



       /*---------------------------*/

       int bordure(pions traverse[10][10],int a, int b,int c,int d)
       {

           if ( (d == 0 && c == 9) || (d == 0 && c == 0) || (c == 0 && d == 9) || (c == 9 && d == 9) ){
                return 0; // les coins
            }

           if (d == 0 || d == 9 || c == 0 || c == 9)


            {



                if(traverse[a][b].joueur == 1 && c != 9){ //bordure autre que la ligne d'arrivee

                return 0;
                }

                else if(traverse[a][b].joueur == 2 && c != 0){  //bordure autre que la ligne d'arrivee

                return 0;
                }

                else if(traverse[a][b].joueur == 3 && d != 9){  //bordure autre que la ligne d'arrivee

                return 0;
                }

                else if(traverse[a][b].joueur == 4 && d != 0){  //bordure autre que la ligne d'arrivee

                return 0;
                }
            }

            return 1; //mouvement valide qui n'est pas sur une bordure
       }





       /*---------------------------------*/

       void confinement(pions traverse[10][10],int a , int b,int c , int d)
       {
          /* if(traverse[a][b].type == 1)
            {
                traverse[c][d].type = 1;
            }

            else if (traverse[a][b].type == 2)
             {
                 traverse[c][d].type = 2;
             }

             else if (traverse[a][b].type == 3)
             {
                 traverse[c][d].type = 3;
             }

             else if (traverse[a][b].type == 4)
             {
                 traverse[c][d].type = 4;
             }

             else if (traverse[a][b].type == 5)
             {
                 traverse[c][d].type = 5;
             }

             else if (traverse[a][b].type == 6)
             {
                 traverse[c][d].type = 6;
             }

             else if (traverse[a][b].type == 7)
             {
                 traverse[c][d].type = 7;
             }

             else if (traverse[a][b].type == 8)
             {
                 traverse[c][d].type = 8;
             }

             else if (traverse[a][b].type == 10)
             {
                 traverse[c][d].type = 10;
             }

             else if (traverse[a][b].type == 11)
             {
                 traverse[c][d].type = 11;
             }

             else if (traverse[a][b].type == 12)
             {
                 traverse[c][d].type = 12;
             }

             else if (traverse[a][b].type == 13)
             {
                 traverse[c][d].type = 13;
             }

             else if (traverse[a][b].type == 14)
             {
                 traverse[c][d].type = 14;
             }

             else if (traverse[a][b].type == 15)
             {
                 traverse[c][d].type = 15;
             }

             else if (traverse[a][b].type == 16)
             {
                 traverse[c][d].type = 16;
             }

             else if (traverse[a][b].type == 17)
             {
                 traverse[c][d].type = 17;
             }*/


             traverse[c][d].type = traverse[a][b].type;

       }

       /*-----------------------------*/

       void test(pions traverse[10][10], int a , int b , int c , int d)
       {

          a = rand()%9;

          b= rand()%9;

          while(traverse[a][b].type == 0)
          {
              srand(time(NULL));
              a = rand()%9;
              b= rand()%9;
          }

          if (traverse[a][b].type == 1 )
          {

              c = a + 1;
              d = b;

               while (traverse[c][d].type != 0)
              {
                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b ;

              }

             while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b;
             }

              traverse[c][d].type = 1;
              traverse[a][b].type = 0;


          }

          else if (traverse[a][b].type == 8 )
          {
              c = a + 1;
              d = b;

               while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b ;

              }

             while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b;
             }

              traverse[c][d].type = 8;
              traverse[a][b].type = 0;
          }

          else if (traverse[a][b].type == 2)
          {

                  c = a + 1;
                  d = b + 1;

              while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b + 1;

              }

              while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b + 1;
             }




              traverse[c][d].type = 2;

               traverse[a][b].type = 0;

          }

           else if (traverse[a][b].type == 7)
          {

                  c = a + 1;
                  d = b + 1;

                   while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b + 1;

              }

              while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b + 1;
             }

               traverse[c][d].type = 7;

               traverse[a][b].type = 0;

          }

          else if (traverse[a][b].type == 3)
          {
              c = a + 1;
              d = b - 1;

                while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b - 1;

              }

              while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b - 1;
             }


              traverse[c][d].type = 3;

               traverse[a][b].type = 0;
          }

            else if (traverse[a][b].type == 6)
          {
              c = a + 1;
              d = b - 1;

                while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b - 1;

              }

              while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b - 1;
             }


              traverse[c][d].type = 6;

               traverse[a][b].type = 0;
          }

          else if (traverse[a][b].type == 4)
          {
              c = a + 1;
              d = b + 1;

                while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b + 1;

              }

              while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b + 1;
             }


              traverse[c][d].type = 4;

               traverse[a][b].type = 0;
          }


          else if (traverse[a][b].type == 5)
          {
              c = a + 1;
              d = b + 1;

                while (traverse[c][d].type != 0)
              {


                  a = rand()%9;
                  b= rand()%9;

                   c = a + 1;
                   d = b + 1;

              }

              while(d == 0 || d == 9 )
             {

                 a = rand()%9;
                 b = rand()%9;

                 c = a + 1;
                 d = b + 1;
             }


              traverse[c][d].type = 5;
              traverse[a][b].type = 0;
          }

       }





       /*-------------------------*/





     // Programme principal //


   int main(void)
      {
          int a ; pions traverse[10][10] ; int b ; int c; int d; int valid1; int i ; int j; int valid2 ; int valid3 ; int valid4; int arret; int victoiree;
          int somme1; int somme2; int somme3; int somme4; int possibilitees; int x ; int y ; int z ; int w; int rep1 ; int match; int e ; int f ; int rep;   int h ; int g; int l;  int test1; int tab[30][30];
           int compteur1 ; int compteur2;   char ch[10]; int n; int demandee; int reprisee; int joueur; int nbr_joueur; int tour_joueur;

          int toure;
          int k= 0;
          int t = 0;

          for(i=0;i<30;i++)
           {
               for(j=0;j<30;j++)
                {
                    tab[i][j] = 0;
                }
           }

           printf("tapez 1 si vous voulez une nouvelle partie et 2 pour charger l'ancienne partie \n");
           scanf("%d",&n);

           if(n == 1) //nouvelle partie
           {

          printf("entrez le nombre de joueurs souhaites pour la partie ou bien 0 pour faire un match contre l'IA:\n");
          scanf("%d", &nbr_joueur);

          depart(traverse,nbr_joueur); //initalisation

          if(nbr_joueur == 0){
              tour_joueur = 2;
          }
          else{tour_joueur = 1;}




         do{

        if(nbr_joueur == 0){ //si joueur vs IA alors ceci permet à l'IA de jouer

          test(traverse,a,b,c,d);
          affichage(traverse);

          k++;
        }


          printf("entrez la ligne que vous allez modifier \n");
          scanf("%d",&a);
          printf("entrez la colonne que vous allez modifier \n");
          scanf("%d",&b);


        //permet de verifier si le joueur deplace un des ses pions et pas ceux des autres

        while(tour_joueur != traverse[a][b].joueur)
                {

                    printf("ce n'est pas a ton tour de jouer   \n");
                    printf("entrez la ligne que vous allez modifier \n");
                    scanf("%d",&a);
                    printf("entrez la colonne que vous allez modifier \n");
                    scanf("%d",&b);

            }



        printf("entrez la nouvelle ligne \n");
        scanf("%d",&c);
        printf("entrez la nouvelle colonne \n");
        scanf("%d",&d);



        // soit faire le saut soit faire un deplacement normal

        if(saut(traverse,a,b,c,d)==1){ //saut

            saut2(traverse,a,b,c,d); //fonctions pour faire les sauts là (c'est complique)

            if(bordure(traverse,a,b,c,d) == 0){ //permet de ne pas avoir un poin sur une bordure

                do{ //repeter tant que le saut n'est pas valide
                printf("On ne peut pas avoir un pion sur une bordure du plateau !!\n");
                printf("Veuillez deplacer le pion en question\n\n");

                        printf("entrez la nouvelle ligne \n");
                        scanf("%d",&c);
                        printf("entrez la nouvelle colonne \n");
                        scanf("%d",&d);

                    } while( saut(traverse,a,b,c,d) !=1 ); //verifier si le saut est valide

                printf("\n\n\n");
                deplacement(traverse,a,b,c,d);

            }
        }

        else{ //deplacement normal
            while(traverse[c][d].type != 0)
            {
                printf("cette case est occupee \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);

            }

        while(bordure(traverse,a,b,c,d) == 0)
        {
            printf("tu ne peux pas aller sur cette case   \n");
            printf("entrez la nouvelle ligne \n");
            scanf("%d",&c);
            printf("entrez la nouvelle colonne \n");
            scanf("%d",&d);
        }

        confinement(traverse,a,b,c,d);

        carrematchnul(traverse,tab,c,d);
        trianglematchnul(traverse,tab,c,d);
        matchnullosange(traverse,tab,c,d);
        matchnulcercle(traverse,tab,c,d);

        tour(traverse,a,b,c,d);

          valid1=carre_valide(traverse,a,b,c,d);

          valid2=triangle_valide(traverse,a,b,c,d);

          valid3=losange_valide(traverse,a,b,c,d);

          valid4=cercle_valid(traverse,a,b,c,d);


          while((traverse[a][b].type == 1 || traverse[a][b].type == 8 || traverse[a][b].type == 10 || traverse[a][b].type == 17) && valid1==0)
           {
                printf("Ce mouvement n'est pas autorise \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid1 = carre_valide(traverse,a,b,c,d);

           }

              while ((traverse[a][b].type == 2 || traverse[a][b].type == 7 || traverse[a][b].type == 11 || traverse[a][b].type == 16) && valid2 == 0)
            {
                printf("Ce mouvement n'est pas autorise \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid2 = triangle_valide(traverse,a,b,c,d);
            }

            while ((traverse[a][b].type == 3 || traverse[a][b].type == 6 || traverse[a][b].type == 12 || traverse[a][b].type == 15) && valid3 == 0)
             {
                printf("Ce mouvement n'est pas autorise  \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid3 = losange_valide(traverse,a,b,c,d);
             }

             while ((traverse[a][b].type == 4 || traverse[a][b].type == 5 || traverse[a][b].type == 13 || traverse[a][b].type == 14) && valid4 == 0)
              {
                printf("Ce mouvement n'est pas autorise \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid4 = cercle_valid(traverse,a,b,c,d);
              }

            printf("\n\n\n");
            deplacement(traverse,a,b,c,d);

          arret = condition_arret(traverse,i,j);

           while(k ==30 && arret == 0)
            {
                printf("la partie est finie \n");
                exit(0);
            }

            victoiree = victoire(traverse);

            if (victoiree == 1)
             {
                 printf("la partie est finie \n");
                 return 0;
             }



        } //fin du deplacement normal (le else)

        tour_joueur = changement_tour(nbr_joueur,tour_joueur); //changement de tour

          k++;

          sauvegarde(traverse,k,tab,tour_joueur);





        } while(k<100);

           }

            //---------------------------------------------------//
            //              REPRISE D'UNE PARTIE                 //
            //---------------------------------------------------//

           else if (n == 2)
           {
               lecture(traverse,&k,tab,&tour_joueur);

               printf("la valeur de k avec laquelle je suis rentre est %d \n",k);

               affichage(traverse);

               printf("le joueur qui reprend la partie est le joueur %d \n",tour_joueur);

                do{

          printf("entrez la ligne que vous allez modifier \n");
          scanf("%d",&a);
          printf("entrez la colonne que vous allez modifier \n");
          scanf("%d",&b);

          //permet de verifier si le joueur deplace un des ses pions et pas ceux des autres
            while(tour_joueur != traverse[a][b].joueur)
                    {

                        printf("ce n'est pas a ton tour de jouer   \n");
                        printf("entrez la ligne que vous allez modifier \n");
                        scanf("%d",&a);
                        printf("entrez la colonne que vous allez modifier \n");
                        scanf("%d",&b);

                }

          carrematchnul(traverse,tab,a,b);
          trianglematchnul(traverse,tab,a,b);
          matchnullosange(traverse,tab,a,b);
          matchnulcercle(traverse,tab,a,b);

                  printf("entrez la nouvelle ligne \n");
                  scanf("%d",&c);
                  printf("entrez la nouvelle colonne \n");
                  scanf("%d",&d);

                  tour(traverse,a,b,c,d);

    // soit faire le saut soit faire un deplacement normal

            if(saut(traverse,a,b,c,d)==1){ //saut

                saut2(traverse,a,b,c,d); //fonction pour faire les sauts

                if(bordure(traverse,a,b,c,d) == 0){ //permet de ne pas avoir un pion sur un coin du plateau

                    do{ //repeter tant que le saut n'est pas valide
                    printf("On ne peut pas avoir un pion sur le coin du plateau !!\n");
                    printf("Veuillez deplacer le pion en question\n\n");

                            printf("entrez la nouvelle ligne \n");
                            scanf("%d",&c);
                            printf("entrez la nouvelle colonne \n");
                            scanf("%d",&d);

                        } while( saut(traverse,a,b,c,d) !=1 ); //verifier si le saut est valide

                    printf("\n\n\n");
                    deplacement(traverse,a,b,c,d);

                }
            }

    else{ //deplacement normal

          while(traverse[c][d].type != 0)
           {
               printf("cette case est occupee \n");
               printf("entrez la ligne que vous allez modifier \n");
               scanf("%d",&a);
               printf("entrez la colonne que vous allez modifier \n");
               scanf("%d",&b);
               printf("entrez la nouvelle ligne \n");
               scanf("%d",&c);
               printf("entrez la nouvelle colonne \n");
               scanf("%d",&d);

           }

                while(bordure(traverse,a,b,c,d) == 0)
                {
                    printf("case non valide \n");
                    printf("entrez la nouvelle ligne \n");
                    scanf("%d",&c);
                    printf("entrez la nouvelle colonne \n");
                    scanf("%d",&d);
                }


          valid1=carre_valide(traverse,a,b,c,d);

          valid2=triangle_valide(traverse,a,b,c,d);

          valid3=losange_valide(traverse,a,b,c,d);

          valid4=cercle_valid(traverse,a,b,c,d);


          while((traverse[a][b].type == 1 || traverse[a][b].type == 8 || traverse[a][b].type == 10 || traverse[a][b].type == 17) && valid1==0)  // tant que le mouvement d'un carre n'est pas valide par la fonction valid1
           {
                printf("Ce mouvement n'est pas autorise \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid1 = carre_valide(traverse,a,b,c,d);

           }

              while ((traverse[a][b].type == 2 || traverse[a][b].type == 7 || traverse[a][b].type == 11 || traverse[a][b].type == 16) && valid2 == 0)  // tant que le mouvement d'un triangle n'est pas valide par la fonction valid1
            {
                printf("Ce mouvement n'est pas autorise \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid2 = triangle_valide(traverse,a,b,c,d);
            }

            while ((traverse[a][b].type == 3 || traverse[a][b].type == 6 || traverse[a][b].type == 12 || traverse[a][b].type == 15) && valid3 == 0)  // tant que le mouvement d'un losange n'est pas valide par la fonction valid1
             {
                printf("Ce mouvement n'est pas autorise  \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid3 = losange_valide(traverse,a,b,c,d);
             }

             while ((traverse[a][b].type == 4 || traverse[a][b].type == 5 || traverse[a][b].type == 13 || traverse[a][b].type == 14) && valid4 == 0)
              {
                printf("Ce mouvement n'est pas autorise  \n");
                printf("entrez la ligne que vous allez modifier \n");
                scanf("%d",&a);
                printf("entrez la colonne que vous allez modifier \n");
                scanf("%d",&b);
                printf("entrez la nouvelle ligne \n");
                scanf("%d",&c);
                printf("entrez la nouvelle colonne \n");
                scanf("%d",&d);
                valid4 = cercle_valid(traverse,a,b,c,d);
              }

            printf("\n\n\n");
            deplacement(traverse,a,b,c,d);

          arret = condition_arret(traverse,i,j);

           while(k ==30 && arret == 0)
            {
                printf("la partie est finie \n");
                exit(0);
            }

            victoiree = victoire(traverse);

            if (victoiree == 1)
             {
                 printf("la partie est finie \n");
                 return 0;
             }


        } //fin du deplacement normal (le else)

        tour_joueur = changement_tour(nbr_joueur,tour_joueur); //changement de tour

          k++;

           sauvegarde(traverse,k,tab,tour_joueur);

        } while(k<100);
           }




      return 0;


      }




