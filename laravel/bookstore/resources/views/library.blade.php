<?php use App\Models\agent?>
<x-mainlayout>
    <x-slot:page_title>Home</x-slot:page_title>
    <x-slot:heading_title>Library</x-slot:heading_title>

    @php
        agent::ismobile()? $cols=2:$cols=3;
        $rows=0;
    @endphp

    <main>
        <table cellpadding="5">

            @foreach($books as $book)
                @if($rows==$cols)
                    <?php $rows=0;?>
                    <tr>
                        @endif
                        <td data-aos="fade-up">
                            <a href="/book/{{$book['id']}}">
                                <img src="{{$book['image']}}" width="250"/>
                            </a>
                        </td>
            <?php $rows+=1;?>

        @endforeach
    </main>
</x-mainlayout>
