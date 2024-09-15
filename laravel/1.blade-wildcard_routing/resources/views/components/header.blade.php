<!doctype html>
<html>
<head>
    <title>{{ $title ?? 'home' }}</title>
</head>
<body>
    <x-nav></x-nav>
    {{$slot}}
</body>
</html>
