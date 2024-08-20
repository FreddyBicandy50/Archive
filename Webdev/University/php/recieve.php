<?php
    $grade = $_POST["inp"];

    if ($grade < 0 || $grade > 100) {
        echo "invalid input!";
    }else{ 
        if ($grade >= 90) {
            echo "you got an A";
        } elseif ($grade >= 80) {
            echo "you got B";
        } elseif ($grade >= 70) {
            echo "you got C";
        } elseif ($grade >= 60) {
            echo "you got D";
        } else {
            echo "you got an F";
        }
    }
?>