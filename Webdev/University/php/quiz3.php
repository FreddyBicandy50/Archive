<?php
    $size = intval($_POST['area']);
    for ($i = 0; $i < $size; $i++) echo "*";
 
    echo "<br>";

    // Print the middle rows of the square
    for ($i = 0; $i < $size - 2; $i++) {
        echo "*";
        for ($j = 0; $j < $size - 2; $j++) echo "*";
       
        echo "* <br>";
    }

    // Print the bottom row of the square
    if ($size > 1) {
        for ($i = 0; $i < $size; $i++) {
            echo "*";
        }
        echo "<br>";
    }

?>
<html>
    <body>
        <form method="post" action="http://localhost:3000/quiz3.php">
            <input type="number" name="area" placeholder="enter square size">
            <input type="submit" name="sb" value='Submit'> 
       </form> 
</body> 
</html>