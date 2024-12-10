<?php
function sql_connect()
{
    $host = "192.168.0.109";
    $username = "null";
    $password = "@1120338#7";
    $database = "management";

    $connection = mysqli_connect($host, $username, $password, $database);
    if (!$connection) {
        die("Connection failed: " . mysqli_connect_error());
    }
    return $connection;
}

function validate($input)
{
    return htmlspecialchars(trim($input));
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $errors = []; 

    if (isset($_POST['Title']) && isset($_POST['hr']) && isset($_POST['rate']) && isset($_POST['startdate'])) {
        $Title = validate($_POST['Title']);
        $hr = validate($_POST['hr']);
        $rate = validate($_POST['rate']);
        $startdate = validate($_POST['startdate']);

        if (empty($Title) || empty($hr) || empty($rate) || empty($startdate)) {
            $errors[] = "All fields are required.";
        }

        if (!preg_match("/^[A-Za-z\s]+$/", $Title)) {
            $errors[] = "Title must contain only letters and spaces.";
        }

        if (!is_numeric($hr) || intval($hr) <= 0) {
            $errors[] = "Number of hours must be a positive numeric value.";
        }

        if (!is_numeric($rate) || floatval($rate) <= 0) {
            $errors[] = "Rate per hour must be a positive numeric value.";
        }

        if (!strtotime($startdate)) {
            $errors[] = "Start date is not a valid date.";
        }

        if (empty($errors)) {
            $sql = "INSERT INTO projects (Title, hr, rate, startdate) VALUES ('$Title', $hr, $rate, '$startdate')";
            $connection = sql_connect();
            if (mysqli_query($connection, $sql)) {
                echo "<p style='color:green;'>New record created successfully.</p>";
            } 
            mysqli_close($connection);
        } else {
            foreach ($errors as $error) {
                echo "<p style='color:red;'>$error</p>";
            }
        }
    } else {
        echo "<p style='color:red;'>Please fill in all fields.</p>";
    }
}
?>