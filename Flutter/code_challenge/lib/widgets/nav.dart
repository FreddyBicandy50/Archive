import 'package:flutter/material.dart';

class Nav extends StatelessWidget {
  const Nav({super.key});

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(20.0),
      decoration: BoxDecoration(
        color: Colors.white,
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.2),
            spreadRadius: 5,
            blurRadius: 7,
            offset: const Offset(0, 3), // Shadow offset
          ),
        ],
      ),
      child: Column(
        children: [
          ElevatedButton(
            onPressed: () {
              print('Home page');
            },
            child: const Icon(Icons.home),
          ),
          const SizedBox(height: 20), // Space between buttons
          ElevatedButton(
            onPressed: () {
              print('Button 2 pressed!');
            },
            child: const Icon(Icons.favorite),
          ),
        ],
      ),
    );
  }
}
