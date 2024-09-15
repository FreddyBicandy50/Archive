<?php

use Illuminate\Support\Facades\Route;

Route::get('/', function () {
    return view('welcome');
});


Route::get('/discover', function () {
    return view('discover');
});


Route::get('/add', function () {
    return view('add');
});

