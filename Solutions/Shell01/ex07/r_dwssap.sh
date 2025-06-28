#!/bin/bash

cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./'

# cat /etc/passwd Lit le fichier contenant les utilisateurs

# grep -v '^#' Supprime les lignes commençant par # (ce sont des commentaires)

# sed -n 'n;p' Affiche une ligne sur deux à partir de la 2e ligne
# n saute la première ligne
# p affiche la suivante
# Puis répète : saute 1, affiche 1, etc

# cut -d ':' -f1 Coupe chaque ligne au niveau des : et garde le 1er champ (le login)

# rev Inverse chaque login (ex: marvin devient nivram)

# sort -r Trie les lignes par ordre alphabétique inverse

# sed -n "${FT_LINE1},${FT_LINE2}p" Affiche uniquement les lignes entre FT_LINE1 et FT_LINE2 inclus

# Ces variables doivent être exportées avant d’exécuter le script :
#	export FT_LINE1=7
#	export FT_LINE2=15

# tr '\n' ',' Remplace chaque retour à la ligne par une virgule

# sed 's/,/, /g' Ajoute un espace après chaque virgule

# sed 's/, $/./' Remplace la dernière virgule + espace par un point final
