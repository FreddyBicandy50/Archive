<?php
$currentRoute = $_SERVER['REQUEST_URI'];
$style = "relative flex items-center justify-center h-12 w-12 mt-2 mb-2 mx-auto shadow-lg bg-gray-600 text-green-500 hover:bg-green-600 transition-all duration-300 ease-linear cursor-pointer rounded-3xl hover:rounded-xl ";
?>

<nav>
    <a href="/add" class="<?= $currentRoute=="/add"? $style."rounded-xl":$style ?>">
        <img width="50%" src="https://static-00.iconduck.com/assets.00/heavy-plus-sign-emoji-2048x2048-6r2kskqi.png" alt="Add Icon">
    </a>
    <a href="/discover" class="<?= $currentRoute=="/discover"? $style."rounded-xl":$style ?>">
        <img width="50%" src="https://www.iconarchive.com/download/i149723/simpleicons-team/simple/fireship.1024.png" alt="Discover Icon">
    </a>
    <a href="/" class="<?= $currentRoute=="/"? $style."rounded-xl":$style ?>">
        <img width="50%" src="https://cdn-icons-png.flaticon.com/512/5968/5968756.png" alt="Home Icon">
    </a>
</nav>
