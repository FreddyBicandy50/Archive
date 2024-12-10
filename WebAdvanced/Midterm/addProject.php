<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <h1>Add a new Project</h1>
    <form action="addService.php" method="POST">
        <label>
            Project Title
            <input required name="Title" type="text">
            <br>
            <br>
        </label>
        <label>
            Number of hours
            <input required name="hr" type="number">
            <br>
            <br>
        </label>
        <label>
            Rate per of hours
            <input required name="rate" type="number">
            <br>
            <br>
        </label>
        <label>
            Start Date
            <input required name="startdate" type="Date">
            <br>
            <br>
        </label>
        <button type="submit">Submit</button>
    </form>
</body>

</html>