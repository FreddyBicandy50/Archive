<?php

use Illuminate\Support\Facades\Route;

Route::get('/', function () {
    return view('welcome');
});

Route::get('/submit', function () {
    $input = request('stringInput');
    if ($input !== null) {
        return redirect('/submit/' . $input);
    }
    return view('submit');
});

Route::get('/submit/{input}', function ($input) {
    return "This is a new dynamic route for: " . htmlspecialchars($input);
});


?>
