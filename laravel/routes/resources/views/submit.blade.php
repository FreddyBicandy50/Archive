<?php
$input = "";
if (isset($_GET['stringInput'])) {
    $input = $_GET['stringInput'];
    echo "You entered: " . htmlspecialchars($input);
}
?>


<html>
<body>
<a href=<?= $input ?>>link to new route</a>
</body>
</html>
