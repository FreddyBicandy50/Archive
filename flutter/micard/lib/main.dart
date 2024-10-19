import 'package:flutter/material.dart';

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.blue,
        body: SafeArea(
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              // ICON
              const CircleAvatar(
                radius: 50.0,
                backgroundImage: AssetImage("images/freddy.JPG"),
              ),
              const SizedBox(
                width: 500,
              ),
              // JOB
              const Text(
                  style: TextStyle(
                    fontFamily: "Pacifico",
                    fontSize: 40.0,
                    fontWeight: FontWeight.bold,
                    color: Colors.white,
                  ),
                  "Freddy"),
              const SizedBox(
                height: 10,
              ),
              Text(
                style: TextStyle(
                  letterSpacing: 4.5,
                  fontWeight: FontWeight.bold,
                  fontFamily: "Source Sans Pro",
                  color: Colors.blue[50],
                ),
                "FLUTTER DEVELOPER",
              ),
              // DIVIDER
              Container(
                margin: const EdgeInsets.only(top: 9.5),
                width: 120,
                height: 0.6,
                color: Colors.white,
              ),
              // TEL BOX
              const Card(
                color: Colors.white,
                margin: EdgeInsets.symmetric(horizontal: 45, vertical: 35),
                child: ListTile(
                  leading: Icon(
                    Icons.phone,
                    color: Colors.blue,
                  ),
                  title: Text(
                    style: TextStyle(
                      fontSize: 14.5,
                      color: Colors.blueGrey,
                      fontWeight: FontWeight.bold,
                      fontFamily: "Source Sans Pro",
                      letterSpacing: 2.5,
                    ),
                    '+961 79 131-124',
                  ),
                ),
              ),
              const Card(
                color: Colors.white,
                margin: EdgeInsets.symmetric(horizontal: 45, vertical: 0),
                child: ListTile(
                  leading: Icon(
                    Icons.email,
                    color: Colors.blue,
                  ),
                  title: Text(
                    style: TextStyle(
                      fontSize: 13.5,
                      color: Colors.blueGrey,
                      fontWeight: FontWeight.bold,
                      fontFamily: "Source Sans Pro",
                      letterSpacing: 0,
                    ),
                    'fredybicandy085@gmail.com',
                  ),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
