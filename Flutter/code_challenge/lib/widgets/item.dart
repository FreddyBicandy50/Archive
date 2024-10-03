import 'package:flutter/material.dart';

class CardItem extends StatelessWidget {
  final String itemName;

  const CardItem({
    super.key,
    required this.itemName,
  });

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(20.0),
      margin: const EdgeInsets.all(20.0),
      decoration: BoxDecoration(
        shape: BoxShape.rectangle,
        color: const Color.fromARGB(255, 162, 58, 25),
        borderRadius: BorderRadius.circular(10.0),
        boxShadow: [
          BoxShadow(
            color: Colors.grey.withOpacity(0.2),
            spreadRadius: 5,
            blurRadius: 7,
            offset: const Offset(0, 3),
          ),
        ],
      ),
      child: Text(
        itemName,
        style: const TextStyle(
            color: Colors.white, fontSize: 18, fontWeight: FontWeight.bold),
      ),
    );
  }
}
