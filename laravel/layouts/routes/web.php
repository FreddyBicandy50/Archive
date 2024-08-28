<?php

use Illuminate\Support\Facades\Route;

Route::get('/', function () {
    return view('welcome');
});

Route::get('/about', function () {
    return view('about');
});

Route::get('/contact', function () {
    return view('contact');
});

Route::get('/form', function () {
    return view('form');
});

Route::get('/submit', function ()
{
    $input = request('subroute');
    if ($input !== null)
        return redirect('/submit/' . $input);
    return view('submit');
});

Route::get('/submit/{input}', function ($input) {
    return "This is a new dynamic route for: " . htmlspecialchars($input);
});
