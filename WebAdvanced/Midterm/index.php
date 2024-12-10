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
$connection = sql_connect();
$sql = "SELECT * from projects";
$result = mysqli_query($connection, $sql);

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>home</title>
</head>

<body>
    <h1>Projects List</h1>
    <table width="100%" border="1">
        <th>Title</th>
        <th>Total Number of Hours</th>
        <th>Rate per hour in dollar</th>
        <th>Start Date</th>
        <?php
        while ($row = mysqli_fetch_assoc($result)) {
            print (
                "
                    <tr>
                        <td>
                            {$row['Title']}
                        </td>
                        <td>
                          {$row['hr']} hours
                        </td>
                        <td>
                            {$row['rate']}$
                        </td>
                        <td>
                           {$row['startdate']}
                        </td>
                        <td>
                            <a href='?del={$row['id']}'>delete</a>
                        </td>
                    </tr>
                "
            );
        }
        ?>

    </table>
    <br>
    <a href="addProject.php"> Add a new project</a>
</body>

</html>

<?php
if (isset($_GET['del']) && ctype_digit($_GET['del'])) {
    $delet_query = "DELETE FROM projects WHERE id = {$_GET['del']}";
    if (mysqli_query($connection, $delet_query))
        header("location:/");
}
?>