<?php
// Define error variables and set them to empty values
 $fnameErr = $lnameErr = $dobErr = $addressErr = $emailErr = $majorErr = "";
 $fname = $lname = $dob = $address = $email = $major = "";


if ($_SERVER["REQUEST_METHOD"] == "POST") {

    if (empty($_POST["fname"])) {
        $fnameErr = "First name is required";
    } else {
        $fname = test_input($_POST["fname"]);
        if (!preg_match("/^[a-zA-Z-' ]*$/", $fname)) {
            $fnameErr = "Only letters and whitespace allowed";
        }
    }

    if (empty($_POST["lname"])) {
        $lnameErr = "Last name is required";
    } else {
        $lname = test_input($_POST["lname"]);
        if (!preg_match("/^[a-zA-Z-' ]*$/", $lname)) {
            $lnameErr = "Only letters and whitespace allowed";
        }
    }

    if (empty($_POST["dob"])) {
        $dobErr = "Date of birth is required";
    } else {
        $dob = test_input($_POST["dob"]);
    }

    if (empty($_POST["address"])) {
        $addressErr = "Address is required";
    } else {
        $address = test_input($_POST["address"]);
    }

    if (empty($_POST["email"])) {
        $emailErr = "Email is required";
    } else {
        $email = test_input($_POST["email"]);
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $emailErr = "Invalid email format";
        }
    }

    if (empty($_POST["major"])) {
        $majorErr = "Major is required";
    } else {
        $major =$_POST["major"];
    }
}

function test_input($data) {
    $data = trim($data);
    $data = stripslashes($data);
    $data = htmlspecialchars($data);
    return $data;
}
?>

<!DOCTYPE HTML>
<html>
<head>
    <style>
        .error {color: #FF0000;}
    </style>
</head>
<body>
<?php
 include "inc/connection.php";
if(isset($_GET['sid']) && isset($_GET['update']))
{   $id1=$_GET['sid'];
    $id=$_GET['sid'];
 
$sql1 = "select * from students where sID=".$id;
$result1 = mysqli_query($conn, $sql1);
if (mysqli_num_rows($result1) >0){
$row1 = mysqli_fetch_assoc($result1);
$fname =$row1["fname"];
 $lname = $row1["lname"];
 $dob = $row1["dob"];
 $address = $row1["address"];
 $email = $row1["email"];
 $major =$row1["major"] ;
}
}
?>
<h2>Student Form</h2>
<p><span class="error">* required field</span></p>
<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
<input type='hidden' name='ids' value="<?php echo $id1;?>">
    First Name: <input type="text" name="fname" value="<?php echo $fname;?>">
    <span class="error">* <?php echo $fnameErr;?></span>
    <br><br>
    Last Name: <input type="text" name="lname" value="<?php echo $lname;?>">
    <span class="error">* <?php echo $lnameErr;?></span>
    <br><br>
    Date of Birth: <input type="date" name="dob" value="<?php echo $dob;?>">
    <span class="error">* <?php echo $dobErr;?></span>
    <br><br>
    Address: <input type="text" name="address" value="<?php echo $address;?>">
    <span class="error">* <?php echo $addressErr;?></span>
    <br><br>
    Email: <input type="text" name="email" value="<?php echo $email;?>">
    <span class="error">* <?php echo $emailErr;?></span>
    <br><br>
Major: <select name="major" value="<?php echo $major;?>">
  <option value="Computer Science">Computer Science</option>
  <option value="IT">IT</option>
  <option value="Engineering">Engineering</option>
  <option value="Pharmacy">Pharmacy</option>
</select>  <span class="error">* <?php echo $majorErr;?></span>
    <input type="submit" name="submit" value="Update">
</form>

<?php

if ($_SERVER["REQUEST_METHOD"] == "POST" && !$fnameErr && !$lnameErr && !$dobErr && !$addressErr && !$emailErr && !$majorErr) {
  
    include "inc/connection.php";
  $sql="update students set fname='".$fname."', lname ='". $lname."', dob ='".  $dob."', address ='".  $address."',email='".  $email."', major= '".  $major."' where sID=".$_POST["ids"];

    if (mysqli_query($conn, $sql)) {
      echo " record updated successfully";
    } else {
      echo "Error: " . $sql . "<br>" . mysqli_error($conn);
    }
    mysqli_close($conn);
    
}
?>
<br>
<br>
<a href="showstudents.php"> Show students </a>
</body>
</html>
