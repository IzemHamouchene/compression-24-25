# Master 1 SII : Multimédia

## TP 3 : Calculate size
Le but de ce TP est de mettre en pratique les notions apprises durant le [cours](https://canvas.instructure.com/courses/4077355/files/164844328?module_item_id=59396783) pour le calcul des images niveau de gris, couleurs et vidéo.


**Pour rappel**  
Chaque pixel d’une image niveau de gris est codé sur 8 bits.
Pour la conversion  
  
* 1 octet = 8 bits  
* 1 ko = 1024 octet  
* 1 mo = 1024 ko  
* 1 go = 1024 mo  

### Exercice 1 : Image size (CalculateImageSize.c)

Il vous est demandé d’écrire un programme en langage C qui calcule la taille d’une image niveau de gris (**en ko**) et couleur (**en mo**).  

##### Paramètre d’entrées (2)
Le programme reçoit deux paramètres en entrées (langeure et largeur) de l’image sous format string.

##### Paramètre de sortie (2)
Le programme doit afficher (printf):  
1. La taille de l’image niveau de gris  
2. La taille de l’image couleur.  

_Les valeurs de sortie doivent être affichées avec deux chiffres après la virgule._
  
  
### Exercice 2 : Video size (CalculateVideo.c)
  
Il vous est demandé d’écrire un programme en langage C qui calcule la taille d'une vidéo qui comprend la moitié du temps avec des images niveau de gris et l'autre moitié avec des images  couleur. Exemple : si la vidéo dure 4 minutes, 2 minutes sont en niveau de gris et 2 sont n couleur.  
  
##### Paramètre d’entrées (3)
Le programme reçoit les paramètres suivants (ordonées):  
1. Taille de l'image en niveau de gris (**en ko**)  
2. Durée de la vidéo (en seconde)  
3. FPS (Frame Per Second)  
  
##### Paramètre de sortie (1)
Le programme doit afficher (printf):  
1. La taille de la vidéo (la moitié du temps est en niveau de gris et l'autres moitié en couleur)(**en go**)  
  
_Les valeurs de sortie doivent être affichées avec deux chiffres après la virgule._
