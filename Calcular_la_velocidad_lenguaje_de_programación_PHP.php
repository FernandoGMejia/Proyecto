<?php

/**
 * @author
 * @copyright 2018
 */

$d = (double)$_GET["Distancia"];
$t = (double)$_GET["Tiempo"];

$v = $d/$t;

echo "La velocidad de la maquina del tiempo es de: ".$v."Km/h";

?>
<!DOCTYPE html>
<html>
<body></body>
</html>
