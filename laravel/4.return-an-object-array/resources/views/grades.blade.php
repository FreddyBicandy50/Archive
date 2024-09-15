<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">
<head>
    <title>fetch data using route </title>
    <style>
    </style>
</head>
<body class="font-sans antialiased dark:bg-black dark:text-white/50">
<h1> available grades:</h1>
<ul>
    <li>{{$grade['id']}} <br> <b>{{$grade['grade']}}</b></li>
</ul>
</body>
</html>
