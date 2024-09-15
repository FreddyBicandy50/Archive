<!doctype html>
<html>
<head>
    <title>{{ $title ?? 'home' }}</title>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="https://cdn.tailwindcss.com"></script>
</head>
<body >
    <div class="fixed top-0 left-0 h-screen w-16 m-0 flex flex-col bg-gray-900 text-white shadow-lg">
      <x-nav></x-nav>
    </div>
    {{$slot}}
</body>
</html>
