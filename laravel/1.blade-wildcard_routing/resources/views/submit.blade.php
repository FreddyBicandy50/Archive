<?php
$input = "";
if (isset($_GET['subroute'])) {
    $input = $_GET['subroute'];
}
?>


<x-header>
    <h1>link</h1>
    <a href=<?= $input ?>>link to new route</a>
</x-header>
