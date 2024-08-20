<?php use App\Models\agent?>
<x-mainlayout>
    <x-slot:page_title>book</x-slot:page_title>
    <x-slot:heading_title>Book Details</x-slot:heading_title>
    <main>
        <div data-aos="fade-up">
            <h1 class="px-4"><b>{{$book['heading']}}</b></h1>
        </div>
        <div class="inline-block" data-aos="fade-up">
            <br>
            <a href="{{$book['link']}}" target="_blank"><img class="px-4" src="{{$book['image']}}" width="200"/></a>
        </div>


        <div data-aos="fade-up">
            <br>
            <ul class="px-4">
                <li data-aos="fade-up"><b>Author:</b> {{$book['author']}}</li>
                <li data-aos="fade-up"><b>Publish date:</b> {{$book['publish_date']}}</li>
                <li data-aos="fade-up"><b>page:</b> {{$book['page']}}</li>
            </ul>
        </div>
        <br>
        <p data-aos="fade-up" class="px-4">{{$book['description']}}</p>
    </main>
</x-mainlayout>
