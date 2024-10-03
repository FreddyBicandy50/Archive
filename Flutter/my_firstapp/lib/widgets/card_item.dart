import 'package:flutter/material.dart';

class CardItem extends StatelessWidget {
  final String imageUrl;
  final String itemName;
  final String itemPrice;

  // Constructor to accept item details
  const CardItem({
    super.key,
    required this.imageUrl,
    required this.itemName,
    required this.itemPrice,
  });

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 200,
      height: 250,
      padding: const EdgeInsets.all(20.0),
      margin: const EdgeInsets.all(20.0),
      decoration: BoxDecoration(
        shape: BoxShape.rectangle,
        color: Colors.grey[200], // Light gray color
        borderRadius: BorderRadius.circular(10.0),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.5),
            spreadRadius: 5,
            blurRadius: 7,
            offset: const Offset(0, 3), // Changes position of shadow
          ),
        ],
      ),
      child: Column(
        children: [
          const Text(
            "item 1", // Item name passed via constructor
            style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
          ),
          ClipRRect(
              borderRadius: BorderRadius.circular(8.0), // Rounded image corners
              child: Image.network(
                imageUrl, // Image URL passed via constructor
                width: 100,
                height: 100,
                fit: BoxFit.cover,
              )),
          const Text(
            "price:", // Item name passed via constructor
            style: TextStyle(fontSize: 18, fontWeight: FontWeight.bold),
          ),
        ],
      ),
    );
  }
}
