import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: Scaffold(
      backgroundColor: const Color.fromARGB(255, 233, 222, 224),
      appBar: AppBar(
        title: const Center(
          child: Text(
            style: TextStyle(color: Colors.white),
            'I Am Rich',
          ),
        ),
        backgroundColor: Colors.blueGrey[900],
      ),
      body: const Center(
        child:  Image(
          //add in the pubspec.yaml file
            // assets:
              // - path/image.png or
              // - path/
          image: AssetImage("images/kitycat.png"),
          alignment: Alignment.centerRight,
        ),
      ),
    ),
  ));
}
