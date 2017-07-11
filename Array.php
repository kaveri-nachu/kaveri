<?php
$numbers = array(31,14,15,7,2);
rsort($numbers);
$arrlength = count($numbers);
for($x = 0; $x < $arrlength; $x++) 
{
    echo $numbers[$x];
    echo "<br>";
}
?>
