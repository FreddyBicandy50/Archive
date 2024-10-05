import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: Scaffold(
      backgroundColor: const Color.fromARGB(255, 174, 174, 174),
      //App Bar
      appBar: AppBar(
          backgroundColor: Colors.teal,
          title: const Center(
            child: Text(
              style: TextStyle(color: Colors.white),
              "Meet Bashboushi",
            ),
          )),
      //Body
      body: const SafeArea(
        child: Center(
          child: Image(
            //Add in pubspec.yaml
            // assets:
            //  - images/
            image: AssetImage("images/Bashboushi.png"),
          ),
        ),
      ),
    ),
  ));
}
