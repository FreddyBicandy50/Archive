<?php

namespace Database\Factories;

use Illuminate\Database\Eloquent\Factories\Factory;

/**
 * @extends \Illuminate\Database\Eloquent\Factories\Factory<\App\Models\books>
 */

class booksFactory extends Factory
{
    /**
     * Define the model's default state.
     *
     * @return array<string, mixed>
     */

    public function definition(): array
    {
        return [
            'title' => $this->faker->word(),
            'publish_date' => $this->faker->date(),
            'image' => $this->faker->image(),
            'author' => $this->faker->name(),
            'link' => $this->faker->url(),
            'page' => $this->faker->numberBetween(1, 900),
        ];
    }
}
