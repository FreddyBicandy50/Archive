<?php

use Illuminate\Support\Facades\Route;

route::get("/", function () {
    return abort(403, "Forbidden");
});