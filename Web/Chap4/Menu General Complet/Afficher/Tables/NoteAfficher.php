<?php

    //Connexion
    $serveur = "localhost";
    $utilisateur = "root";
    $motdepasse = "";
    $base = "gestion_etudiant";

    $conn = mysqli_connect("$serveur","$utilisateur","$motdepasse","$base");


    $sql = "SELECT * FROM Note";

    $result = mysqli_query($conn, $sql);

    while ($ligne=mysqli_fetch_row($result)) {
        echo ("$ligne[0], $ligne[1], $ligne[2], $ligne[3], $ligne[4], $ligne[5], $ligne[6], $ligne[7] <br>");
    }

?>