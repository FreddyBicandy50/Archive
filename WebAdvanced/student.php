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

<body bgcolor="#F5F5DC">


    <h1 align="center" style="color: blue;">Student Form</h1>

    <div align="center">
        <form method="POST" action="<?= $_SERVER['PHP_SELF']; ?>">
            <table style="border-spacing: collapse; border: 2px solid ;">
                <tr>
                    <td>
                        <label>Student ID:</label>
                    </td>
                    <td>
                        <input type="number" name="sID" required style="<?= $getStyle; ?>"> </input>
                    </td>
                </tr>
                <tr>
                    <td>
                        <label>First Name:</label>
                    </td>
                    <td>
                        <input type="text" name="fname" required style="<?= $getStyle; ?>"> </input>
                    </td>
                </tr>
                <tr>
                    <td>
                        <label>Last_Name:</label>
                    </td>
                    <td>
                        <input type="text" name="lname" required style="<?= $getStyle; ?>"> </input>
                    </td>
                </tr>
                <tr>
                    <td>
                        <label>Date Of Birth:</label>
                    </td>
                    <td>
                        <input type="text" name="dob" required placeholder="Year-Month-Day" style="<?= $getStyle; ?>">
                        </input>
                    </td>
                </tr>
                <tr>
                    <td>
                        <label>Address:</label>
                    </td>
                    <td>
                        <input type="text" name="address" required style="<?= $getStyle; ?>"> </input>
                    </td>
                </tr>
                <tr>
                    <td>
                        <label>Email:</label>
                    </td>
                    <td>
                        <input type="email" name="email" required placeholder="ex@students.liu.edu.lb"
                            style="<?= $getStyle; ?>"> </input>
                    </td>
                </tr>
                <tr>
                    <td>
                        <label for="Major">Major:</label>
                    </td>
                    <td>
                        <select id="options" name="major" required style="width: 200px; padding: 5px;">
                            <option value="" disabled selected>Select an option</option>
                            <option value="CSCI">Computer Science</option>
                            <option value="CCE">Computer Communication Engineering</option>
                            <option value="IT">Information Technology</option>
                            <option value="MTH">Mathematics</option>
                            <option value="PHS">Physics</option>
                            <option value="GDS">Graphic Design</option>
                        </select>
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

    function ft_DateValidationRule($date)
    {
        $i = 0;
        $len = strlen($date);
        if ($len < 10)
            die("error near date of birth `Wrong Format DOB Example 2024-11-19" . $len);
        while ($i < $len) {
            if (!ctype_digit($date[$i]) && ($i != 4 && $i != 7))
                die("here error near date of birth `Wrong Format DOB Example 2024-11-19");
            if (($date[$i] != '-') && ($i == 4 || $i == 7))
                die("error near date of birth `Wrong Format DOB Example 2024-11-19");
            $i++;
        }
    }

    function ft_StudentInfoValidationRulw($student_name, $student_Lname)
    {
        $i = 0;
        $len = strlen($student_name);
        while ($i < $len) {
            if (ctype_digit($student_name[$i]))
                die("error near Student Name `Found Digits Name Example Frederic");
            if (ft_isSpecial($student_name[$i]))
                die("error near Student Name `Found Special Characters Name Example Frederic");
            $i++;
        }

        $i = 0;
        $len = strlen($student_Lname);
        while ($i < $len) {
            if (ctype_digit($student_Lname[$i]))
                die("error near Student Last Name `Wrong Format Last Name Example Bicandy");
            if (ft_isSpecial($student_Lname[$i]))
                die("error near Student Last Name `Wrong Format Last Name Example Bicandy");
            $i++;
        }
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        echo "<h3 align='center'>Submitted Succesfully</h1>";
        $getInfo = [
            'Id' => $_REQUEST['sID'] ?? '',
            'Name' => htmlspecialchars($_REQUEST['fname']),
            'Lname' => htmlspecialchars($_REQUEST['lname']),
            'Dob' => htmlspecialchars($_REQUEST['dob']),
            'Address' => htmlspecialchars($_REQUEST['address']),
            'Email' => htmlspecialchars($_REQUEST['email']),
            'Major' => $_REQUEST['major'],
        ];

        foreach ($getInfo as $Field => $value) {
            if (empty($value)) {
                die("error empty value near `" . $Field);
            }
        }

        ft_DateValidationRule($getInfo['Dob']);
        ft_StudentInfoValidationRulw($getInfo['Name'], $getInfo['Lname']);

    }
    ?>
    <h3 align="center">Data Recieved</h3>
    <table align="center" style="border: 2px solid blue ;" border="1">
        <tr>
            <td><b>ID</b></td>
            <td>
                <?= $getInfo['Id'] ?>
            </td>
        <tr>
            <td><b>First Name</b></td>
            <td><?= $getInfo['Name'] ?></td>
        </tr>
        <tr>
            <td><b>Last Name</b></td>
            <td><?= $getInfo['Lname'] ?></td>
        </tr>
        <tr>
            <td><b>Date Of Birth</b></td>
            <td><?= $getInfo['Dob'] ?></td>
        </tr>
        <tr>
            <td><b>Address</b></td>
            <td><?= $getInfo['Address'] ?></td>
        </tr>
        <tr>
            <td><b>Email</b></td>
            <td><?= $getInfo['Email'] ?></td>
        </tr>
        <tr>
            <td><b>Major</b></td>
            <td><?= $getInfo['Major'] ?></td>
        </tr>
    </table>
</body>