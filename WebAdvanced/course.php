<?php
$getStyle = "width: 200px; padding: 5px;";
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LIU</title>
</head>

<body bgcolor="#eeeeee">
    <h1 align="center" style="color: #ffb019;">Courses Form</h1>
    <div align="center">
        <form method="POST" action="<?= $_SERVER['PHP_SELF']; ?>">
            <table style="border-spacing: collapse; border: 2px solid #ffb019;">
                <tr>
                    <td><label>Title:</label></td>
                    <td><input type="text" name="courseTitle" required style="<?= $getStyle; ?>"></td>
                </tr>
                <tr>
                    <td><label>Code:</label></td>
                    <td><input type="text" name="courseCode" required style="<?= $getStyle; ?>"></td>
                </tr>
                <tr>
                    <td><label>Number Of Credits:</label></td>
                    <td><input type="number" name="noc" required style="<?= $getStyle; ?>">
                    </td>
                </tr>
            </table>
            <br>
            <button type="submit" style="<?= $getStyle; ?>">Submit</button>
        </form>
    </div>

    <?php

    function ft_isSpecial($char)
    {
        if ($char == '-' || $char == '$' || $char == '/' || $char == '!' || $char == '@' || $char == '#')
            return (true);
        return (false);
    }

    function ft_CourseTitleValidation($CourseName)
    {
        $i = 0;
        $len = strlen($CourseName);
        while ($i < $len) {
            if (ft_isSpecial($CourseName[$i]))
                die("Error Course Name Contains Special Characters");
            $i++;
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        echo "<h3 align='center'>Submitted Succesfully</h1>";
        $getInfo = [
            'Title' => htmlspecialchars($_REQUEST['courseTitle']),
            'Code' => htmlspecialchars($_REQUEST['courseCode']),
            'Number Of Credits' => $_REQUEST['noc'],
        ];

        ft_CourseTitleValidation($getInfo['Title']);
        ft_NumberOfCredits($getInfo['Number Of Credits']); 
    }

    ?>

    <h3 align="center">Data Recieved</h3>
    <table align="center" style="border: 2px solid #eeeeee ;" border="1">
        <tr>
            <td><b>Title</b></td>
            <td><?= $getInfo['Title'] ?></td>
        </tr>
        <tr>
            <td><b>Code</b></td>
            <td><?= $getInfo['Code'] ?></td>
        </tr>
        <tr>
            <td><b>Number Of Credits</b></td>
            <td><?= $getInfo['Number Of Credits'] ?></td>
        </tr>
    </table>
</body>