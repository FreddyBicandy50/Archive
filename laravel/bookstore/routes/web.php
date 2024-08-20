<?php

use Illuminate\Support\Facades\Route;



use App\Models\books;

Route::get('/', function () {
    return view('library',['books'=>books::all()]);
});


Route::get('book/{id}', function ($id) {
    return view('book',['book'=>books::all()[$id-1]],['id'=>$id]);
});


Route::get('about', function () {
    return view('about');
});

Route::get('contact', function () {
    return view('contact');
});
