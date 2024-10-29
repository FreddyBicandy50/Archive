import 'package:flutter/material.dart';
import 'custom_card.dart';

class Elevbutton extends StatefulWidget {
  final Icon icon;
  final VoidCallback onPressed; // Callback for button press

  const Elevbutton({super.key, required this.icon, required this.onPressed});

  @override
  State<Elevbutton> createState() => _ElevbuttonState();
}

class _ElevbuttonState extends State<Elevbutton> {
  int color = 0xFF5d5f6e;

  void buttonColorState() {
    setState(() {
      color = 0xFF7b7d8a; // Change to pressed color
    });

    widget.onPressed(); // Call the callback function

    // Reset to original color after a short delay
    Future.delayed(const Duration(milliseconds: 200), () {
      setState(() {
        color = 0xFF5d5f6e; // Reset to default color
      });
    });
  }

  @override
  Widget build(BuildContext context) {
    return customButton(
      getColor: color,
      getButton: ElevatedButton(
        onPressed: buttonColorState,
        style: ElevatedButton.styleFrom(
          overlayColor: Colors.transparent,
          backgroundColor: Colors.transparent,
          shadowColor: Colors.transparent,
          padding: EdgeInsets.zero,
        ),
        child: widget.icon,
      ),
    );
  }
}
