import 'package:code_challenge/widgets/nav.dart';
import 'package:flutter/material.dart';
import 'package:code_challenge/widgets/item.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        colorScheme: ColorScheme.fromSeed(
            seedColor: const Color.fromARGB(255, 162, 58, 25)),
        useMaterial3: true,
      ),
      home: const MyHomePage(title: 'Flutter Demo Home Page'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});
  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: SafeArea(
        child: Row(
          // Use Row to place the side nav and content
          children: [
            const Nav(), // The side navigation panel
            Expanded(
              // Main content area
              child: Padding(
                padding: const EdgeInsets.all(20.0),
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  crossAxisAlignment: CrossAxisAlignment.center,
                  children: [
                    const CardItem(
                      itemName: "Light Stream",
                    ),
                    const SizedBox(
                        height: 20), // Space between card and buttons
                    Row(
                      mainAxisAlignment: MainAxisAlignment.center,
                      children: [
                        ElevatedButton(
                          onPressed: () {
                            print('Favorite button pressed!');
                          },
                          child: const Icon(Icons.favorite),
                        ),
                        const SizedBox(width: 20), // Space between buttons
                        ElevatedButton(
                          onPressed: () {
                            print('Next button pressed!');
                          },
                          child: const Text("Next"),
                        )
                      ],
                    )
                  ],
                ),
              ),
            )
          ],
        ),
      ),
    );
  }
}
