<!DOCTYPE html>
<html lang="{{ str_replace('_', '-', app()->getLocale()) }}">
<head>
    <title>using catch data foreach </title>
    <style>
    </style>
</head>
<body class="font-sans antialiased dark:bg-black dark:text-white/50">
<h1> available students:</h1>
<ul>
    @foreach($students as $student )
        <li>{{$student['id']}} <br> <b>{{$student['name']}}</b></li>
    @endforeach
</ul>
</body>
</html>
