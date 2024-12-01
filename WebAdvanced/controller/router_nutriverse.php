<?php

$NutriVerse = 'nutriverse';
if (URL("/$NutriVerse") || URL("/$NutriVerse/") || URL("/$NutriVerse/?i=1")) {
    die(require("nutriverse/pages/home.html"));
}

if (URL("/$NutriVerse/about") || URL("/$NutriVerse/about/") || URL("/$NutriVerse/about/?i=1")) {
    die(require("nutriverse/pages/about.html"));
}

if (URL("/$NutriVerse/request_form/") || URL("/$NutriVerse/request_form/") || URL("/$NutriVerse/request_form/?i=1")) {
    die(require("nutriverse/pages/request_form.html"));
}
