<!-- Current: "bg-gray-900 text-white", Default: "text-gray-300 hover:bg-gray-700 hover:text-white" -->
@php
    use App\Models\agent;
    agent::ismobile()? $font="text-sm":$font="text-base";


    $enable="bg-gray-900 text-white block rounded-md px-3 py-2 font-medium ".$font;
    $disable="text-gray-300 hover:bg-gray-700 hover:text-white block rounded-md px-3 py-2 font-medium ".$font;
    count(explode("book/",Request()->url()))>=2? $id='book/'.explode("book/",Request()->url())[1]:$id="";
@endphp

<a href="/" class="{{Request()->is('/') || Request()->is($id) ? $enable:$disable}}" aria-current="page"><b>Library</b></a>
<a href="/about"
   class="{{Request()->is('about')? $enable:$disable}}"><b>About</b></a>
<a href="/contact"
   class="{{Request()->is('contact')? $enable:$disable}}"><b>Contact</b></a>


