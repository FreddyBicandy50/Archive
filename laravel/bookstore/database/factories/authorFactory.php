<?php

namespace Database\Factories;

use Illuminate\Database\Eloquent\Factories\Factory;

/**
 * @extends \Illuminate\Database\Eloquent\Factories\Factory<\App\Models\author>
 */
class authorFactory extends Factory
{
    /**
     * Define the model's default state.
     *
     * @return array<string, mixed>
     */
    public function definition(): array
    {
        return [
            'name' => $this->faker->word(),
            'age' => $this->faker->numberBetween(1, 90),
            'gender' => $this->faker->boolean(),
            'book_id' => $this->faker->numberBetween(1, 11),
        ];

    }
}
